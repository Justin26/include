//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListItemsController.h"

@interface ListRestrictionsController : PSListItemsController
{
}

- (void)reloadAndColor;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setRowToSelect;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)colorCells;
- (id)specifiers;
- (id)allowKey;
- (id)disallowKey;
- (id)mediaKey;
- (id)headerKey;
- (void)dealloc;
- (id)init;
- (id)restrictionsController;

@end

