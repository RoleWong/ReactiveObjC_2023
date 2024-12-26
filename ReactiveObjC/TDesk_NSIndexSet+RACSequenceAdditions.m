//
//  NSIndexSet+RACSequenceAdditions.m
//  ReactiveObjC
//
//  Created by Sergey Gavrilyuk on 12/17/13.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "TDesk_NSIndexSet+RACSequenceAdditions.h"
#import "TDesk_RACIndexSetSequence.h"

@implementation NSIndexSet (RACSequenceAdditions)

- (RACSequence *)rac_sequence {
	return [RACIndexSetSequence sequenceWithIndexSet:self];
}

@end
