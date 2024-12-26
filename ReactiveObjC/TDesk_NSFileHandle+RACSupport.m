//
//  NSFileHandle+RACSupport.m
//  ReactiveObjC
//
//  Created by Josh Abernathy on 5/10/12.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "TDesk_NSFileHandle+RACSupport.h"
#import "TDesk_NSNotificationCenter+RACSupport.h"
#import "TDesk_NSObject+RACDescription.h"
#import "TDesk_RACReplaySubject.h"
#import "TDesk_RACDisposable.h"

@implementation NSFileHandle (RACSupport)

- (RACSignal *)rac_readInBackground {
	RACReplaySubject *subject = [RACReplaySubject subject];
	[subject setNameWithFormat:@"%@ -rac_readInBackground", RACDescription(self)];

	RACSignal *dataNotification = [[[NSNotificationCenter defaultCenter] rac_addObserverForName:NSFileHandleReadCompletionNotification object:self] map:^(NSNotification *note) {
		return note.userInfo[NSFileHandleNotificationDataItem];
	}];
	
	__block RACDisposable *subscription = [dataNotification subscribeNext:^(NSData *data) {
		if (data.length > 0) {
			[subject sendNext:data];
			[self readInBackgroundAndNotify];
		} else {
			[subject sendCompleted];
			[subscription dispose];
		}
	}];
	
	[self readInBackgroundAndNotify];
	
	return subject;
}

@end
