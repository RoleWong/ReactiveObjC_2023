//
//  RACImmediateScheduler.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 11/30/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import "TDesk_RACScheduler.h"

// A private scheduler which immediately executes its scheduled blocks.
@interface RACImmediateScheduler : RACScheduler

@end
