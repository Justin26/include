//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKTranscriptCollectionViewController, NSIndexPath;

@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>
- (void)transcriptCollectionViewControllerWantsRefreshStatusBar:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerDidInset:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerWillInset:(CKTranscriptCollectionViewController *)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 moreButtonTappedForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end

