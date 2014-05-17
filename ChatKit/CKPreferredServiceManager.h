//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CKPreferredServiceManager : NSObject
{
    NSArray *_servicePrecedence;
    NSArray *_potentialServices;
    NSMutableArray *_knownHandles;
}

+ (id)sharedPreferredServiceManager;
+ (id)alloc;
@property(copy, nonatomic) NSArray *potentialServices; // @synthesize potentialServices=_potentialServices;
@property(copy, nonatomic) NSArray *servicePrecedence; // @synthesize servicePrecedence=_servicePrecedence;
- (void)_handleServiceAvailabilityChanged:(id)arg1;
- (void)_handleIMHandleIDStatusChanged:(id)arg1;
- (void)_handleDeviceCapabilitiesChanged:(id)arg1;
- (void)_handleOperationalAccountsChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_handleConnectionChanged:(id)arg1;
- (unsigned long long)__preferredServiceTypeForRecipientCount:(long long)arg1 options:(unsigned long long)arg2 error:(char *)arg3;
- (unsigned long long)__preferrediMessageFallbackServiceForRecipientCount:(long long)arg1 iMessageAvailable:(_Bool)arg2 options:(unsigned long long)arg3 error:(char *)arg4;
- (unsigned long long)_optionsForRecipients:(id)arg1;
- (id)preferredServiceForConversation:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;
- (id)_preferredServiceForAddressStrings:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;
- (id)_preferredServiceForHandles:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;
- (void)preferredServiceForHandles:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(_Bool)arg3;
- (BOOL)availabilityForAddress:(id)arg1 onService:(id)arg2 checkWithServer:(_Bool)arg3;
- (id)preferredServiceForMFComposeRecipients:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;
- (id)preferredServiceForHandles:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;
- (id)preferredServiceForHandle:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;
- (id)preferredServiceForAddressString:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;
- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned long long)arg2 error:(char *)arg3;
- (id)_preferredServiceForHandles:(id)arg1 allowUnknown:(_Bool)arg2 checkWithServer:(_Bool)arg3;
- (BOOL)_availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(_Bool)arg3 actualHandle:(id *)arg4;
- (id)_preferredServiceForRecipientsCount:(long long)arg1 options:(unsigned long long)arg2 error:(char *)arg3;
- (id)preferredService;
- (void)refreshAvailabilityForConversation:(id)arg1;
- (void)refreshAvailabilityForMFComposeRecipients:(id)arg1;
- (void)refreshAvailabilityForAddressStrings:(id)arg1;
- (_Bool)_isiMessageAvailable;
- (void)prepareForResume;
- (void)notifyOfPotentialServicesChange;
- (void)notifyOfServiceAvailabilityChange;
- (void)_clearCaches;
- (_Bool)isMultiService;
- (void)_updatePotentialServices;
- (void)dealloc;
- (id)init;

@end

