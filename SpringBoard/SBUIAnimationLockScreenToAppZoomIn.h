/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBDisableAppStatusBarAlphaChangesAssertion, SBWindow, UIView;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBWindow *_transitionWindow;
    UIView *_viewToAnimate;
    UIView *_contextHostView;
    UIView *_fakeStatusBarViewContainer;
    int _launchingOrientation;
    BOOL _requiresHostView;
    BOOL _activateBeforeHosting;
    BOOL _fromAssistant;
    BOOL _finishedZooming;
    BOOL _finishedActivating;
    BOOL _finishedCrossfadingToHostView;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
}

- (void)_removeFakeStatusBarIfNecessary;
- (void)_showFakeStatusBarIfNecessary;
- (void)_setupFakeStatusBarIfNecessary;
- (void)_maybeReportAnimationFinished;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_maybeStartCrossfade;
- (void)_finishedZooming;
- (void)_applicationDependencyStateChanged;
- (BOOL)isReasonableMomentToInterrupt;
- (void)_cleanupAnimation;
- (void)_doAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (void)_setHidden:(BOOL)arg1;
- (BOOL)_shouldDismissBanner;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 fromAlert:(id)arg2;
- (id)_getTransitionWindow;

@end

