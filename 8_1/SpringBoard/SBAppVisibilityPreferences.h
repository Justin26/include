//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBAppVisibilityPreferences : NSObject
{
    BOOL _defaultVisible;
    BOOL _currentlyVisible;
}

@property BOOL currentlyVisible; // @synthesize currentlyVisible=_currentlyVisible;
@property(readonly) BOOL defaultVisible; // @synthesize defaultVisible=_defaultVisible;
- (id)initWithDefaultVisible:(BOOL)arg1;

@end
