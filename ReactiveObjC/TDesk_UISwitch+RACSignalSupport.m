//
//  UISwitch+RACSignalSupport.m
//  ReactiveObjC
//
//  Created by Uri Baghin on 20/07/2013.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "TDesk_UISwitch+RACSignalSupport.h"
#import "TDesk_RACEXTKeyPathCoding.h"
#import "TDesk_UIControl+RACSignalSupportPrivate.h"

@implementation UISwitch (RACSignalSupport)

- (RACChannelTerminal *)rac_newOnChannel {
	return [self rac_channelForControlEvents:UIControlEventValueChanged key:@keypath(self.on) nilValue:@NO];
}

@end
