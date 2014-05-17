//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocationServicesListController.h"

@class RTRoutineManager;

@interface LocationSystemServicesListController : LocationServicesListController
{
    RTRoutineManager *_routineManager;
}

@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (id)specifiers;
- (id)coreRoutineEnabledStatus:(id)arg1;
- (void)updateSpecifiersForImposedSettings;
- (void)setStatusEnabled:(id)arg1 specifier:(id)arg2;
- (id)isStatusEnabled:(id)arg1;
- (void)stopLocationStatusUpdates;
- (void)startLocationStatusUpdates;
- (void)dealloc;
- (id)init;

@end

