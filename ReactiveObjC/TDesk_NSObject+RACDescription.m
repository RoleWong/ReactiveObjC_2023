//
//  NSObject+RACDescription.m
//  ReactiveObjC
//
//  Created by Justin Spahr-Summers on 2013-05-13.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "TDesk_NSObject+RACDescription.h"
#import "TDesk_RACTuple.h"

@implementation NSValue (RACDescription)

- (NSString *)rac_description {
	return self.description;
}

@end

@implementation NSString (RACDescription)

- (NSString *)rac_description {
	return self.description;
}

@end

@implementation RACTuple (RACDescription)

- (NSString *)rac_description {
	if (getenv("RAC_DEBUG_SIGNAL_NAMES") != NULL) {
		return self.allObjects.description;
	} else {
		return @"(description skipped)";
	}
}

@end

NSString *RACDescription(id object) {
	if (getenv("RAC_DEBUG_SIGNAL_NAMES") != NULL) {
		if ([object respondsToSelector:@selector(rac_description)]) {
			return [object rac_description];
		} else {
			return [[NSString alloc] initWithFormat:@"<%@: %p>", [object class], object];
		}
	} else {
		return @"(description skipped)";
	}
}
