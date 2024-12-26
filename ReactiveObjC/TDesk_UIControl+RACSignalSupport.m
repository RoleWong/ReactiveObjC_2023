//
//  UIControl+RACSignalSupport.m
//  ReactiveObjC
//
//  Created by Josh Abernathy on 4/17/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import "TDesk_UIControl+RACSignalSupport.h"
#import <ReactiveObjCForTDesk/RACTDesk_RACEXTScope.h>
#import "TDesk_RACCompoundDisposable.h"
#import "TDesk_RACDisposable.h"
#import "TDesk_RACSignal.h"
#import "TDesk_RACSubscriber.h"
#import "TDesk_NSObject+RACDeallocating.h"
#import "TDesk_NSObject+RACDescription.h"

@implementation UIControl (RACSignalSupport)

- (RACSignal *)rac_signalForControlEvents:(UIControlEvents)controlEvents {
	@weakify(self);

	return [[RACSignal
		createSignal:^(id<RACSubscriber> subscriber) {
			@strongify(self);

			[self addTarget:subscriber action:@selector(sendNext:) forControlEvents:controlEvents];

			RACDisposable *disposable = [RACDisposable disposableWithBlock:^{
				[subscriber sendCompleted];
			}];
			[self.rac_deallocDisposable addDisposable:disposable];

			return [RACDisposable disposableWithBlock:^{
				@strongify(self);
				[self.rac_deallocDisposable removeDisposable:disposable];
				[self removeTarget:subscriber action:@selector(sendNext:) forControlEvents:controlEvents];
			}];
		}]
		setNameWithFormat:@"%@ -rac_signalForControlEvents: %lx", RACDescription(self), (unsigned long)controlEvents];
}

@end
