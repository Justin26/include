//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class SBCCButtonModule;

@interface SBCCButtonModuleUnavailableAlertItem : SBAlertItem
{
    SBCCButtonModule *_module;
}

+ (BOOL)presentAlertItemForButtonModule:(id)arg1;
@property(retain, nonatomic) SBCCButtonModule *module; // @synthesize module=_module;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;

@end

