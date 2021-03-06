/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableIndexSet;

@interface PUImageManager : NSObject {

	NSMutableDictionary* _preheatSourcesByFormat;
	NSMutableDictionary* _preheatItemsByAssetByFormat;
	NSMutableIndexSet* _suspendedFormats;

}
-(id)init;
-(void)invalidateCachedImagesForAssets:(id)arg1 ;
-(void)fetchImageForAsset:(id)arg1 fastFormat:(int)arg2 qualityFormat:(int)arg3 options:(unsigned)arg4 handler:(/*^block*/ id)arg5 ;
-(void)startPrefetchingImagesForAssets:(id)arg1 format:(int)arg2 options:(unsigned)arg3 ;
-(void)stopFetchingImagesForAssets:(id)arg1 format:(int)arg2 ;
-(id)_preheatItemForAsset:(id)arg1 format:(int)arg2 options:(unsigned)arg3 createIfNeeded:(BOOL)arg4 ;
-(BOOL)_isSuspendingFetchesForFormat:(int)arg1 ;
-(id)_preheatItemsByAssetForFormat:(int)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_preheatSourceForFormat:(int)arg1 ;
-(id)_keyForFormat:(int)arg1 ;
-(void)cancelAllFetches;
-(void)suspendFetchesForFormat:(int)arg1 ;
-(void)resumeFetchesForFormat:(int)arg1 ;
-(void).cxx_destruct;
@end

