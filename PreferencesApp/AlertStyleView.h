//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AlertStyleView : UIView
{
    UIImageView *_selectionImage;
    UILabel *_alertName;
    BOOL _isSelected;
    UIImageView *_alertStyleImageContentView;
}

+ (id)selectionImageForView:(id)arg1;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *alertName; // @synthesize alertName=_alertName;
@property(retain, nonatomic) UIImageView *selectionImage; // @synthesize selectionImage=_selectionImage;
@property(retain, nonatomic) UIImageView *alertStyleImageContentView; // @synthesize alertStyleImageContentView=_alertStyleImageContentView;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end

