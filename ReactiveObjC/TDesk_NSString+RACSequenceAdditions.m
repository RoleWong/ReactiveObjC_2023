//
//  NSString+RACSequenceAdditions.m
//  ReactiveObjC
//
//  Created by Justin Spahr-Summers on 2012-10-29.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "TDesk_NSString+RACSequenceAdditions.h"
#import "TDesk_RACStringSequence.h"

@implementation NSString (RACSequenceAdditions)

- (RACSequence *)rac_sequence {
	return [RACStringSequence sequenceWithString:self offset:0];
}

@end
