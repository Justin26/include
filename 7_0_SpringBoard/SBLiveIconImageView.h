//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconImageView.h"

#import "SBControlCenterObserver.h"

@interface SBLiveIconImageView : SBIconImageView <SBControlCenterObserver>
{
    unsigned long long _pauseCauses;
}

+ (void)_displayDidDeactivate:(id)arg1;
+ (void)_displayWillActivate:(id)arg1;
+ (void)initialize;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)_activeDisplayChanged:(id)arg1;
- (void)didMoveToWindow;
- (id)snapshot;
- (void)prepareForReuse;
- (void)updateImageAnimated:(_Bool)arg1;
- (void)updateAnimatingState;
- (void)setPaused:(_Bool)arg1;
- (_Bool)isAnimationAllowed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

