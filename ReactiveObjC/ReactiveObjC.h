//
//  ReactiveObjC.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReactiveObjC.
FOUNDATION_EXPORT double ReactiveObjCVersionNumber;

//! Project version string for ReactiveObjC.
FOUNDATION_EXPORT const unsigned char ReactiveObjCVersionString[];

#import <ReactiveObjCForTDesk/RACEXTKeyPathCoding.h>
#import <ReactiveObjCForTDesk/RACEXTScope.h>
#import <ReactiveObjCForTDesk/NSArray+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/NSData+RACSupport.h>
#import <ReactiveObjCForTDesk/NSDictionary+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/NSEnumerator+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/NSFileHandle+RACSupport.h>
#import <ReactiveObjCForTDesk/NSNotificationCenter+RACSupport.h>
#import <ReactiveObjCForTDesk/NSObject+RACDeallocating.h>
#import <ReactiveObjCForTDesk/NSObject+RACLifting.h>
#import <ReactiveObjCForTDesk/NSObject+RACPropertySubscribing.h>
#import <ReactiveObjCForTDesk/NSObject+RACSelectorSignal.h>
#import <ReactiveObjCForTDesk/NSOrderedSet+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/NSSet+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/NSString+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/NSString+RACSupport.h>
#import <ReactiveObjCForTDesk/NSIndexSet+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/NSUserDefaults+RACSupport.h>
#import <ReactiveObjCForTDesk/RACBehaviorSubject.h>
#import <ReactiveObjCForTDesk/RACChannel.h>
#import <ReactiveObjCForTDesk/RACCommand.h>
#import <ReactiveObjCForTDesk/RACCompoundDisposable.h>
#import <ReactiveObjCForTDesk/RACDelegateProxy.h>
#import <ReactiveObjCForTDesk/RACDisposable.h>
#import <ReactiveObjCForTDesk/RACEvent.h>
#import <ReactiveObjCForTDesk/RACGroupedSignal.h>
#import <ReactiveObjCForTDesk/RACKVOChannel.h>
#import <ReactiveObjCForTDesk/RACMulticastConnection.h>
#import <ReactiveObjCForTDesk/RACQueueScheduler.h>
#import <ReactiveObjCForTDesk/RACQueueScheduler+Subclass.h>
#import <ReactiveObjCForTDesk/RACReplaySubject.h>
#import <ReactiveObjCForTDesk/RACScheduler.h>
#import <ReactiveObjCForTDesk/RACScheduler+Subclass.h>
#import <ReactiveObjCForTDesk/RACScopedDisposable.h>
#import <ReactiveObjCForTDesk/RACSequence.h>
#import <ReactiveObjCForTDesk/RACSerialDisposable.h>
#import <ReactiveObjCForTDesk/RACSignal+Operations.h>
#import <ReactiveObjCForTDesk/RACSignal.h>
#import <ReactiveObjCForTDesk/RACStream.h>
#import <ReactiveObjCForTDesk/RACSubject.h>
#import <ReactiveObjCForTDesk/RACSubscriber.h>
#import <ReactiveObjCForTDesk/RACSubscriptingAssignmentTrampoline.h>
#import <ReactiveObjCForTDesk/RACTargetQueueScheduler.h>
#import <ReactiveObjCForTDesk/RACTestScheduler.h>
#import <ReactiveObjCForTDesk/RACTuple.h>
#import <ReactiveObjCForTDesk/RACUnit.h>

#if TARGET_OS_WATCH
#elif TARGET_OS_IOS || TARGET_OS_TV
	#import <ReactiveObjCForTDesk/UIBarButtonItem+RACCommandSupport.h>
	#import <ReactiveObjCForTDesk/UIButton+RACCommandSupport.h>
	#import <ReactiveObjCForTDesk/UICollectionReusableView+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/UIControl+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/UIGestureRecognizer+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/UISegmentedControl+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/UITableViewCell+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/UITableViewHeaderFooterView+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/UITextField+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/UITextView+RACSignalSupport.h>

	#if TARGET_OS_IOS
		#import <ReactiveObjCForTDesk/NSURLConnection+RACSupport.h>
		#import <ReactiveObjCForTDesk/UIStepper+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/UIDatePicker+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/UIAlertView+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/UIActionSheet+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/MKAnnotationView+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/UIImagePickerController+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/UIRefreshControl+RACCommandSupport.h>
		#import <ReactiveObjCForTDesk/UISlider+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/UISwitch+RACSignalSupport.h>
	#endif
#elif TARGET_OS_MAC
	#import <ReactiveObjCForTDesk/NSControl+RACCommandSupport.h>
	#import <ReactiveObjCForTDesk/NSControl+RACTextSignalSupport.h>
	#import <ReactiveObjCForTDesk/NSObject+RACAppKitBindings.h>
	#import <ReactiveObjCForTDesk/NSText+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/NSURLConnection+RACSupport.h>
#endif
