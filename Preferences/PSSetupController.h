//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSRootController.h>

@class NSDictionary, UIViewController<PSController>;

@interface PSSetupController : PSRootController
{
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}

- (void)popControllerOnParent;
- (void)pushControllerOnParentWithSpecifier:(id)arg1;
- (void)statusBarWillChangeHeight:(id)arg1;
- (BOOL)popupStyleIsModal;
- (BOOL)usePopupStyle;
- (void)pushController:(id)arg1;
- (void)setupController;
- (void)setParentController:(id)arg1;
- (id)parentController;
- (void)handleURL:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)controller;
- (void)dismiss;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end

