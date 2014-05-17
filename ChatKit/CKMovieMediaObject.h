//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKAVMediaObject.h>

@interface CKMovieMediaObject : CKAVMediaObject
{
    _Bool _hasVideoTrack;
    _Bool _checkedVideoInfo;
    struct CGSize _pxSize;
}

+ (_Bool)isPreviewable;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
@property(nonatomic) _Bool checkedVideoInfo; // @synthesize checkedVideoInfo=_checkedVideoInfo;
@property(nonatomic) struct CGSize pxSize; // @synthesize pxSize=_pxSize;
@property(nonatomic) _Bool hasVideoTrack; // @synthesize hasVideoTrack=_hasVideoTrack;
- (void)updateVideoInfo;
- (struct CGSize)bbSize;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1;
- (id)generateThumbnail;
- (id)previewForOrientation:(BOOL)arg1;
- (int)mediaType;

@end

