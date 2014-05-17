//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, NSString, UIButton;

@interface CKSingleRecipientTableViewCell : UITableViewCell
{
    _Bool _showMailButton;
    _Bool _showPhoneButton;
    _Bool _showFaceTimeVideoButton;
    _Bool _showInfoButton;
    NSString *_entityName;
    NSMutableArray *_visibleButtons;
    id _actionDelegate;
    UIButton *_mailButton;
    UIButton *_phoneButton;
    UIButton *_facetimeVideoButton;
    UIButton *_infoButton;
}

@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIButton *facetimeVideoButton; // @synthesize facetimeVideoButton=_facetimeVideoButton;
@property(retain, nonatomic) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) UIButton *mailButton; // @synthesize mailButton=_mailButton;
@property(nonatomic) _Bool showInfoButton; // @synthesize showInfoButton=_showInfoButton;
@property(nonatomic) _Bool showFaceTimeVideoButton; // @synthesize showFaceTimeVideoButton=_showFaceTimeVideoButton;
@property(nonatomic) _Bool showPhoneButton; // @synthesize showPhoneButton=_showPhoneButton;
@property(nonatomic) _Bool showMailButton; // @synthesize showMailButton=_showMailButton;
@property(nonatomic) id actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSMutableArray *visibleButtons; // @synthesize visibleButtons=_visibleButtons;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (void)updateCurrentlyVisibleButtons;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

