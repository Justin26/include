/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLPTPdAssetManager.h>

@class NSObject<PhotoLibraryPTPDelegate>;

@interface PLPTPdAssetManager (PictureTransferProtocol)
- (_Bool)libraryIsAvailable;
- (_Bool)ptpCanDeleteFiles;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)ptpInformationForPhotoWithObjectID:(id)arg1;
@property(nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;
- (void)setPtpDelegate:(id)arg1;
- (_Bool)ptpDeletePhotoWithKey:(struct NSObject *)arg1 andExtension:(id)arg2;
- (id)ptpThumbnailForPhotoWithKey:(struct NSObject *)arg1;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
@end

