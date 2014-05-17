//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject
{
    PKPass *_pass;
    UIImage *_icon;
}

+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (_Bool)isPreviewable;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (int)mediaType;
- (id)passView;
- (_Bool)shouldShowDisclosure;
- (_Bool)shouldBeQuickLooked;
- (_Bool)shouldShowViewer;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1;
- (id)generateThumbnail;
- (id)subtitle;
- (id)title;
- (void)dealloc;

@end

