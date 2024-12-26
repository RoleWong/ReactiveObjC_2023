//
//  UITextField+RACSignalSupport.m
//  ReactiveObjC
//
//  Created by Josh Abernathy on 4/17/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import "TDesk_UITextField+RACSignalSupport.h"
#import <ReactiveObjCForTDesk/RACTDesk_RACEXTKeyPathCoding.h>
#import <ReactiveObjCForTDesk/RACTDesk_RACEXTScope.h>
#import "TDesk_NSObject+RACDeallocating.h"
#import "TDesk_NSObject+RACDescription.h"
#import "TDesk_RACSignal+Operations.h"
#import "TDesk_UIControl+RACSignalSupport.h"
#import "TDesk_UIControl+RACSignalSupportPrivate.h"

@implementation UITextField (RACSignalSupport)

- (RACSignal *)rac_textSignal {
	@weakify(self);
	return [[[[[RACSignal
		defer:^{
			@strongify(self);
			return [RACSignal return:self];
		}]
		concat:[self rac_signalForControlEvents:UIControlEventAllEditingEvents]]
		map:^(UITextField *x) {
			return x.text;
		}]
		takeUntil:self.rac_willDeallocSignal]
		setNameWithFormat:@"%@ -rac_textSignal", RACDescription(self)];
}

- (RACChannelTerminal *)rac_newTextChannel {
	return [self rac_channelForControlEvents:UIControlEventAllEditingEvents key:@keypath(self.text) nilValue:@""];
}

@end
