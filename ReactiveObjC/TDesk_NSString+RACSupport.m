//
//  NSString+RACSupport.m
//  ReactiveObjC
//
//  Created by Josh Abernathy on 5/11/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import "TDesk_NSString+RACSupport.h"
#import "TDesk_RACReplaySubject.h"
#import "TDesk_RACScheduler.h"

@implementation NSString (RACSupport)

+ (RACSignal *)rac_readContentsOfURL:(NSURL *)URL usedEncoding:(NSStringEncoding *)encoding scheduler:(RACScheduler *)scheduler {
	NSCParameterAssert(URL != nil);
	NSCParameterAssert(encoding != nil);
	NSCParameterAssert(scheduler != nil);
	
	RACReplaySubject *subject = [RACReplaySubject subject];
	[subject setNameWithFormat:@"+rac_readContentsOfURL: %@ usedEncoding:scheduler: %@", URL, scheduler];
	
	[scheduler schedule:^{
		NSError *error = nil;
		NSString *string = [NSString stringWithContentsOfURL:URL usedEncoding:encoding error:&error];
		if (string == nil) {
			[subject sendError:error];
		} else {
			[subject sendNext:string];
			[subject sendCompleted];
		}
	}];
	
	return subject;
}

@end
