//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, UIViewController;

@interface CKPopoverManager : NSObject <UIPopoverControllerDelegate>
{
    UIPopoverController *_popoverController;
    CDUnknownBlockType _presenter;
    CDUnknownBlockType _handler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) CDUnknownBlockType presenter; // @synthesize presenter=_presenter;
- (void)replaceCurrentControllerWithController:(id)arg1;
- (_Bool)isShowingPopover;
- (void)representCurrentPopover;
@property(readonly, nonatomic) UIViewController *currentContentController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)didFinishRotating;
- (void)dismissCurrentPopoverAnimated:(_Bool)arg1;
- (void)showPopoverWithContentViewController:(id)arg1 withPresenter:(CDUnknownBlockType)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

