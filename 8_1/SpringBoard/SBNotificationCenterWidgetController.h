//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "_NCWidgetController_Host_IPC.h"

@class NSString, NSXPCListener;

@interface SBNotificationCenterWidgetController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)defaultWidgetController;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)arg1;
+ (id)containingBundleIdentifierForWidgetWithBundleIdentifer:(id)arg1;
- (void)__setHasContent:(BOOL)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
