//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTextBalloonView.h>

#import "NSLayoutManagerDelegate.h"

@class UIImageView;

@interface CKTruncatedTextBalloonView : CKTextBalloonView <NSLayoutManagerDelegate>
{
    UIImageView *_chevron;
}

@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

