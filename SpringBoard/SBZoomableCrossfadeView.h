/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIKit.h>

@interface SBZoomableCrossfadeView : UIView
{
    UIView *_startView;
    UIView *_endView;
    BOOL _translucent;
    BOOL _crossfaded;
}

+ (id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)crossfadeWithCompletion:(id)completionBlock;
- (id)animationFactory;
- (void)layoutSubviews;
- (void)dealloc;
- (id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3;

@end

