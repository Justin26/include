//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class UIActionSheet;

@interface CKActionSheetManager : NSObject <UIActionSheetDelegate>
{
    UIActionSheet *_actionSheet;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _presenter;
    _Bool _performBeforeAnimation;
    _Bool _dismissingActionSheetForRotation;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool performBeforeAnimation; // @synthesize performBeforeAnimation=_performBeforeAnimation;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(copy, nonatomic) CDUnknownBlockType presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissActionSheet:(id)arg1 withButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didFinishRotating;
- (void)willStartRotating;
- (void)dismissCurrentActionSheet;
- (void)showActionSheet:(id)arg1 withPresenter:(CDUnknownBlockType)arg2 performBeforeAnimation:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)showActionSheet:(id)arg1 withPresenter:(CDUnknownBlockType)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

