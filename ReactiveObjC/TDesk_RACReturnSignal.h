//
//  RACReturnSignal.h
//  ReactiveObjC
//
//  Created by Justin Spahr-Summers on 2013-10-10.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "TDesk_RACSignal.h"

// A private `RACSignal` subclasses that synchronously sends a value to any
// subscribers, then completes.
@interface RACReturnSignal<__covariant ValueType> : RACSignal<ValueType>

+ (RACSignal<ValueType> *)return:(ValueType)value;

@end
