//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIBackdropView.h"

@interface _SBSearchBackdropView : _UIBackdropView
{
    float _transitionProgress;
    float _finalScale;
    float _scale;
    float _factor;
}

@property float factor; // @synthesize factor=_factor;
@property float scale; // @synthesize scale=_scale;
- (void)transitionComplete;
- (void)applySettings:(id)arg1;
- (void)transitionIncrementallyToPrivateStyle:(int)arg1 weighting:(float)arg2;

@end

