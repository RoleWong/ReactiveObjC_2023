//
//  RACQueueScheduler.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 11/30/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import "TDesk_RACScheduler.h"

NS_ASSUME_NONNULL_BEGIN

/// An abstract scheduler which asynchronously enqueues all its work to a Grand
/// Central Dispatch queue.
///
/// Because RACQueueScheduler is abstract, it should not be instantiated
/// directly. Create a subclass using the `RACQueueScheduler+Subclass.h`
/// interface and use that instead.
@interface RACQueueScheduler : RACScheduler
@end

NS_ASSUME_NONNULL_END
