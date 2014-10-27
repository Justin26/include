//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMExpandableMenuButton.h>

@class UIImageView;

@interface CAMTimerButton : CAMExpandableMenuButton
{
    BOOL _hideOffWhenCollapsed;
    id <CAMTimerButtonDelegate> _delegate;
    UIImageView *__glyphView;
}

- (int)numberOfMenuItems;
@property(nonatomic) BOOL hideOffWhenCollapsed; // @synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed;
- (id)hiddenIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(int)arg1;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
- (void)setDuration:(int)arg1 animated:(BOOL)arg2;
- (void)_commonCAMTimerButtonInitialization;
- (id)initWithExpansionOrientation:(int)arg1;
- (void).cxx_destruct;
- (id)headerView;
@property(nonatomic) int duration;
@property(nonatomic) __weak id <CAMTimerButtonDelegate> delegate; // @synthesize delegate=_delegate;

@end
