//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDate, NSString, UIDateLabel, UIImageView, UILabel;

@interface CKConversationListCell : UITableViewCell
{
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    UIImageView *_unreadIndicatorImageView;
    UIImageView *_chevronImageView;
    UILabel *_fromLabel;
    UIImageView *_groupImageView;
    _Bool _isPlaceholder;
    UIImageView *_recipientPhotoView;
    NSString *_searchSummaryText;
    NSString *_searchMessageGUID;
    NSDate *_searchMessageDate;
}

+ (double)cellHeight;
+ (id)identifier;
@property(copy, nonatomic) NSString *searchSummaryText; // @synthesize searchSummaryText=_searchSummaryText;
@property(retain, nonatomic) NSDate *searchMessageDate; // @synthesize searchMessageDate=_searchMessageDate;
@property(copy, nonatomic) NSString *searchMessageGUID; // @synthesize searchMessageGUID=_searchMessageGUID;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_calculateLayoutFrames;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (_Bool)showingEditControl;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

