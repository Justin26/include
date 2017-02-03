//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate.h"

@class NSString, SBFloatyFolderView, SBFolderIconView, SBFolderZoomSettings;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    SBFloatyFolderView *_folderView;
    SBFolderIconView *_folderIconView;
    struct CGAffineTransform _folderIconViewScaleTransform;
}

- (void)_calculateZoomedOffset:(struct CGPoint *)arg1 scale:(struct CGPoint *)arg2 forIcon:(id)arg3 withView:(id)arg4;
- (void)_applyFolderFadeForZoomFraction:(float)arg1;
- (void)_applyIconTransformForZoomFraction:(float)arg1;
- (void)_applyIconCrossfadeForZoomFraction:(float)arg1;
- (void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(float)arg1;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) SBFolderZoomSettings *settings;
@property(readonly) Class superclass;

@end
