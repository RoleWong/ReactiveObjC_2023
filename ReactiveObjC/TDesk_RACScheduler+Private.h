//
//  RACScheduler+Private.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 11/29/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import "TDesk_RACScheduler.h"

NS_ASSUME_NONNULL_BEGIN

// The thread-specific current scheduler key.
extern NSString * const RACSchedulerCurrentSchedulerKey;

// A private interface for internal RAC use only.
@interface RACScheduler ()

// A dedicated scheduler that fills two requirements:
//
//   1. By the time subscription happens, we need a valid +currentScheduler.
//   2. Subscription should happen as soon as possible.
//
// To fulfill those two, if we already have a valid +currentScheduler, it
// immediately executes scheduled blocks. If we don't, it will execute scheduled
// blocks with a private background scheduler.
+ (instancetype)subscriptionScheduler;

// Initializes the receiver with the given name.
//
// name - The name of the scheduler. If nil, a default name will be used.
//
// Returns the initialized object.
- (instancetype)initWithName:(nullable NSString *)name;

@end

NS_ASSUME_NONNULL_END
