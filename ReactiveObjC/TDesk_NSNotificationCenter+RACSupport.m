//
//  NSNotificationCenter+RACSupport.m
//  ReactiveObjC
//
//  Created by Josh Abernathy on 5/10/12.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "TDesk_NSNotificationCenter+RACSupport.h"
#import "TDesk_RACEXTScope.h"
#import "TDesk_RACSignal.h"
#import "TDesk_RACSubscriber.h"
#import "TDesk_RACDisposable.h"

@implementation NSNotificationCenter (RACSupport)

- (RACSignal *)rac_addObserverForName:(NSString *)notificationName object:(id)object {
	@unsafeify(object);
	return [[RACSignal createSignal:^(id<RACSubscriber> subscriber) {
		@strongify(object);
		id observer = [self addObserverForName:notificationName object:object queue:nil usingBlock:^(NSNotification *note) {
			[subscriber sendNext:note];
		}];

		return [RACDisposable disposableWithBlock:^{
			[self removeObserver:observer];
		}];
	}] setNameWithFormat:@"-rac_addObserverForName: %@ object: <%@: %p>", notificationName, [object class], object];
}

@end
