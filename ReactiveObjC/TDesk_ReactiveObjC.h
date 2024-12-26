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

#import <ReactiveObjCForTDesk/TDesk_RACEXTKeyPathCoding.h>
#import <ReactiveObjCForTDesk/TDesk_RACEXTScope.h>
#import <ReactiveObjCForTDesk/TDesk_NSArray+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/TDesk_NSData+RACSupport.h>
#import <ReactiveObjCForTDesk/TDesk_NSDictionary+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/TDesk_NSEnumerator+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/TDesk_NSFileHandle+RACSupport.h>
#import <ReactiveObjCForTDesk/TDesk_NSNotificationCenter+RACSupport.h>
#import <ReactiveObjCForTDesk/TDesk_NSObject+RACDeallocating.h>
#import <ReactiveObjCForTDesk/TDesk_NSObject+RACLifting.h>
#import <ReactiveObjCForTDesk/TDesk_NSObject+RACPropertySubscribing.h>
#import <ReactiveObjCForTDesk/TDesk_NSObject+RACSelectorSignal.h>
#import <ReactiveObjCForTDesk/TDesk_NSOrderedSet+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/TDesk_NSSet+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/TDesk_NSString+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/TDesk_NSString+RACSupport.h>
#import <ReactiveObjCForTDesk/TDesk_NSIndexSet+RACSequenceAdditions.h>
#import <ReactiveObjCForTDesk/TDesk_NSUserDefaults+RACSupport.h>
#import <ReactiveObjCForTDesk/TDesk_RACBehaviorSubject.h>
#import <ReactiveObjCForTDesk/TDesk_RACChannel.h>
#import <ReactiveObjCForTDesk/TDesk_RACCommand.h>
#import <ReactiveObjCForTDesk/TDesk_RACCompoundDisposable.h>
#import <ReactiveObjCForTDesk/TDesk_RACDelegateProxy.h>
#import <ReactiveObjCForTDesk/TDesk_RACDisposable.h>
#import <ReactiveObjCForTDesk/TDesk_RACEvent.h>
#import <ReactiveObjCForTDesk/TDesk_RACGroupedSignal.h>
#import <ReactiveObjCForTDesk/TDesk_RACKVOChannel.h>
#import <ReactiveObjCForTDesk/TDesk_RACMulticastConnection.h>
#import <ReactiveObjCForTDesk/TDesk_RACQueueScheduler.h>
#import <ReactiveObjCForTDesk/TDesk_RACQueueScheduler+Subclass.h>
#import <ReactiveObjCForTDesk/TDesk_RACReplaySubject.h>
#import <ReactiveObjCForTDesk/TDesk_RACScheduler.h>
#import <ReactiveObjCForTDesk/TDesk_RACScheduler+Subclass.h>
#import <ReactiveObjCForTDesk/TDesk_RACScopedDisposable.h>
#import <ReactiveObjCForTDesk/TDesk_RACSequence.h>
#import <ReactiveObjCForTDesk/TDesk_RACSerialDisposable.h>
#import <ReactiveObjCForTDesk/TDesk_RACSignal+Operations.h>
#import <ReactiveObjCForTDesk/TDesk_RACSignal.h>
#import <ReactiveObjCForTDesk/TDesk_RACStream.h>
#import <ReactiveObjCForTDesk/TDesk_RACSubject.h>
#import <ReactiveObjCForTDesk/TDesk_RACSubscriber.h>
#import <ReactiveObjCForTDesk/TDesk_RACSubscriptingAssignmentTrampoline.h>
#import <ReactiveObjCForTDesk/TDesk_RACTargetQueueScheduler.h>
#import <ReactiveObjCForTDesk/TDesk_RACTestScheduler.h>
#import <ReactiveObjCForTDesk/TDesk_RACTuple.h>
#import <ReactiveObjCForTDesk/TDesk_RACUnit.h>

#if TARGET_OS_WATCH
#elif TARGET_OS_IOS || TARGET_OS_TV
	#import <ReactiveObjCForTDesk/TDesk_UIBarButtonItem+RACCommandSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UIButton+RACCommandSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UICollectionReusableView+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UIControl+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UIGestureRecognizer+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UISegmentedControl+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UITableViewCell+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UITableViewHeaderFooterView+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UITextField+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_UITextView+RACSignalSupport.h>

	#if TARGET_OS_IOS
		#import <ReactiveObjCForTDesk/TDesk_NSURLConnection+RACSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UIStepper+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UIDatePicker+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UIAlertView+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UIActionSheet+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_MKAnnotationView+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UIImagePickerController+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UIRefreshControl+RACCommandSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UISlider+RACSignalSupport.h>
		#import <ReactiveObjCForTDesk/TDesk_UISwitch+RACSignalSupport.h>
	#endif
#elif TARGET_OS_MAC
	#import <ReactiveObjCForTDesk/TDesk_NSControl+RACCommandSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_NSControl+RACTextSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_NSObject+RACAppKitBindings.h>
	#import <ReactiveObjCForTDesk/TDesk_NSText+RACSignalSupport.h>
	#import <ReactiveObjCForTDesk/TDesk_NSURLConnection+RACSupport.h>
#endif
