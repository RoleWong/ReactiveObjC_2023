//
//  RACEmptySequence.h
//  ReactiveObjC
//
//  Created by Justin Spahr-Summers on 2012-10-29.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "TDesk_RACSequence.h"

// Private class representing an empty sequence.
@interface RACEmptySequence : RACSequence

+ (RACEmptySequence *)empty;

@end
