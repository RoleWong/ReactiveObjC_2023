//
//  UISegmentedControl+RACSignalSupport.m
//  ReactiveObjC
//
//  Created by Uri Baghin on 20/07/2013.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "TDesk_UISegmentedControl+RACSignalSupport.h"
#import "TDesk_RACEXTKeyPathCoding.h"
#import "TDesk_UIControl+RACSignalSupportPrivate.h"

@implementation UISegmentedControl (RACSignalSupport)

- (RACChannelTerminal *)rac_newSelectedSegmentIndexChannelWithNilValue:(NSNumber *)nilValue {
	return [self rac_channelForControlEvents:UIControlEventValueChanged key:@keypath(self.selectedSegmentIndex) nilValue:nilValue];
}

@end
