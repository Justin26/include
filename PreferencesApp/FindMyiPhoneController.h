//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface FindMyiPhoneController : NSObject
{
    NSObject<OS_dispatch_semaphore> *_stateChangeSem;
}

+ (id)shared;
- (void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enablePhoneLocatorWithCompletion:(CDUnknownBlockType)arg1;
- (id)preferredFindMyiPhoneAccount;
- (void)locatorStateDidChange:(id)arg1;
- (BOOL)isFindMyiPhoneEnabled;
- (BOOL)isFindMyiPhoneProvisioned;
- (void)dealloc;
- (id)init;

@end

