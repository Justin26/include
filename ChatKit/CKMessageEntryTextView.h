//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSAttributedString, NSString, UIFont, UILabel;

@interface CKMessageEntryTextView : UITextView
{
    _Bool _showingDictationPlaceholder;
    UIFont *_font;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic, getter=isShowingDictationPlaceholder) _Bool showingDictationPlaceholder; // @synthesize showingDictationPlaceholder=_showingDictationPlaceholder;
- (void)textViewDidChange:(id)arg1;
- (void)updateTextView;
@property(readonly, nonatomic, getter=isSingleLine) _Bool singleLine;
@property(copy, nonatomic) NSString *placeholderText;
@property(copy, nonatomic) NSAttributedString *compositionText;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (id)typingAttributes;
- (void)setAttributedText:(id)arg1;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

