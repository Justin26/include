//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "EAAccessoryDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "UIApplicationDelegate.h"

@class EAAccessory, NSMutableSet, PSSplitViewController, PrefsRootController, UIWindow;

@interface PreferencesAppController : UIApplication <UIApplicationDelegate, EAAccessoryDelegate, MCProfileConnectionObserver>
{
    PSSplitViewController *_splitViewController;
    PrefsRootController *_controller;
    UIWindow *_window;
    BOOL _isLocked;
    NSMutableSet *_busyControllers;
    BOOL _dontSelectGeneralOnLaunch;
    BOOL _loadingExternalURL;
    unsigned int _backgroundTaskHandle;
    double _timeoutLimit;
    BOOL _settingsWasResigned;
    unsigned int _rootDomainConnect;
    unsigned int _pmNotifier;
    struct IONotificationPort *_systemPowerPortRef;
    struct __CFRunLoopSource *_pmSource;
    EAAccessory *_speakerAccessory;
}

@property unsigned int rootDomainConnect; // @synthesize rootDomainConnect=_rootDomainConnect;
@property BOOL dontSelectGeneralOnLaunch; // @synthesize dontSelectGeneralOnLaunch=_dontSelectGeneralOnLaunch;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidConnect:(id)arg1;
- (void)_deregisterForPowerNotifications;
- (void)_registerForPowerNotifications;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (void)resetLocale;
- (void)significantTimeChange;
- (void)systemDidWake:(id)arg1;
- (void)_resetSnapshotImage;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_handleExternalApplicationChange;
- (void)_suspendControllers;
- (void)_handleBusyControllers;
- (void)controllerFinished:(id)arg1;
- (void)endAndInvalidateBackgroundTask;
- (void)addBusyControllersFromRootController:(id)arg1;
- (id)oneTimeJumpURL;
- (void)generateURL;
- (void)processURL:(id)arg1;
- (void)applicationOpenURL:(id)arg1;
- (id)keyValueDictionaryForURL:(id)arg1;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)updateSoftwareUpdateBadgeOnSpecifier:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)clearControllersForSuspendedState;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)appWindow;
- (void)stopPlayback;
- (id)rootController;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

