//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class CKMessageEntryContentView, NSArray;

@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>
- (_Bool)messageEntryContentView:(CKMessageEntryContentView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryContentViewDidBeginEditing:(CKMessageEntryContentView *)arg1;
- (_Bool)messageEntryContentViewShouldBeginEditing:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidChange:(CKMessageEntryContentView *)arg1;
@end

