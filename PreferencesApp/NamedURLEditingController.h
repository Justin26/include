//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "URLEditingController.h"

@class WebRestrictionsController;

@interface NamedURLEditingController : URLEditingController
{
    BOOL _saved;
    WebRestrictionsController *_URLSaveController;
}

@property(retain, nonatomic) WebRestrictionsController *URLSaveController; // @synthesize URLSaveController=_URLSaveController;
@property(nonatomic) BOOL saved; // @synthesize saved=_saved;
- (id)controlledURL:(id)arg1;
- (void)setControlledURL:(id)arg1 specifier:(id)arg2;
- (id)controlledURLTitle:(id)arg1;
- (void)setControlledURLTitle:(id)arg1 specifier:(id)arg2;
- (void)saveURL;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willResignActive;
- (void)viewDidAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)dealloc;

@end

