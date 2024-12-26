//
//  UIGestureRecognizer+RACSignalSupport.m
//  ReactiveObjC
//
//  Created by Josh Vera on 5/5/13.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import "TDesk_UIGestureRecognizer+RACSignalSupport.h"
#import <ReactiveObjCForTDesk/RACTDesk_RACEXTScope.h>
#import "TDesk_NSObject+RACDeallocating.h"
#import "TDesk_NSObject+RACDescription.h"
#import "TDesk_RACCompoundDisposable.h"
#import "TDesk_RACDisposable.h"
#import "TDesk_RACSignal.h"
#import "TDesk_RACSubscriber.h"

@implementation UIGestureRecognizer (RACSignalSupport)

- (RACSignal *)rac_gestureSignal {
	@weakify(self);

	return [[RACSignal
		createSignal:^(id<RACSubscriber> subscriber) {
			@strongify(self);

			[self addTarget:subscriber action:@selector(sendNext:)];
			[self.rac_deallocDisposable addDisposable:[RACDisposable disposableWithBlock:^{
				[subscriber sendCompleted];
			}]];

			return [RACDisposable disposableWithBlock:^{
				@strongify(self);
				[self removeTarget:subscriber action:@selector(sendNext:)];
			}];
		}]
		setNameWithFormat:@"%@ -rac_gestureSignal", RACDescription(self)];
}

@end
