//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKEditableCollectionViewDelegate.h"

@class CKTranscriptCollectionView;

@protocol CKTranscriptCollectionViewDelegate <CKEditableCollectionViewDelegate>
- (void)collectionViewDidInset:(CKTranscriptCollectionView *)arg1;
- (void)collectionViewWillInset:(CKTranscriptCollectionView *)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)collectionViewWillProgrammaticallyScroll:(CKTranscriptCollectionView *)arg1;
- (void)collectionViewWillScroll:(CKTranscriptCollectionView *)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
@end

