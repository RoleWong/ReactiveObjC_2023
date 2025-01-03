//
//  NSEnumerator+RACSequenceAdditions.m
//  ReactiveObjC
//
//  Created by Uri Baghin on 07/01/2013.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "TDesk_NSEnumerator+RACSequenceAdditions.h"
#import "TDesk_RACSequence.h"

@implementation NSEnumerator (RACSequenceAdditions)

- (RACSequence *)rac_sequence {
	return [RACSequence sequenceWithHeadBlock:^{
		return [self nextObject];
	} tailBlock:^{
		return self.rac_sequence;
	}];
}

@end
