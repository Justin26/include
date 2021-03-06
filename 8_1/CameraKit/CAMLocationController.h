//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSMutableArray, NSString;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate>
{
    BOOL _enabled;
    BOOL _headingEnabled;
    BOOL __monitoringLocation;
    CLLocation *_currentLocation;
    CLLocationManager *__locationManager;
    NSMutableArray *__assetsWaitingForLocation;
}

+ (void)setUsesEffectiveBundleIdentifier:(BOOL)arg1;
+ (BOOL)usesEffectiveBundleIdentifier;
+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;
+ (id)sharedInstance;
@property(nonatomic, getter=isHeadingEnabled) BOOL headingEnabled; // @synthesize headingEnabled=_headingEnabled;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_applicationStateChanged:(id)arg1;
@property(readonly, nonatomic) CLLocationManager *_locationManager; // @synthesize _locationManager=__locationManager;
- (void)addLocationToAssetWhenAvailable:(id)arg1;
- (BOOL)addLocationToMetadata:(id)arg1 withOrientation:(int)arg2 device:(int)arg3;
- (void)_updateAssetsWaitingOnLocation;
- (id)_currentLocationMetadataWithDeviceOrientation:(int)arg1 forDevice:(int)arg2;
- (BOOL)_updateLocationMetadataForAsset:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *_assetsWaitingForLocation; // @synthesize _assetsWaitingForLocation=__assetsWaitingForLocation;
- (void)_startMonitoringLocationUpdates;
- (void)_authorizeOrStartLocationManager;
@property(readonly, nonatomic, getter=_isMonitoringLocation) BOOL _monitoringLocation; // @synthesize _monitoringLocation=__monitoringLocation;
- (void)_updateLocationMonitoring;
- (void)_stopMonitoringLocationUpdates;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

