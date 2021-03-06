//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSArray, NSIndexPath, PSSpecifier, UIPopoverController;

@interface BulletinBoardDNDController : PSListController
{
    UIPopoverController *_setDateRangePopoverController;
    NSIndexPath *_setDateRangeIndexPath;
    BOOL _dateRangePopoverShouldBePresent;
    NSArray *_dndSpecs;
    PSSpecifier *_dndRangeSpec;
    NSArray *_dndRangeSpecs;
    NSArray *_dndModeSpecs;
}

@property(retain, nonatomic) PSSpecifier *dndRangeSpec; // @synthesize dndRangeSpec=_dndRangeSpec;
@property(retain, nonatomic) NSArray *dndModeSpecs; // @synthesize dndModeSpecs=_dndModeSpecs;
@property(retain, nonatomic) NSArray *dndSpecs; // @synthesize dndSpecs=_dndSpecs;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)reloadParentSpecifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)repeatedCallsEnabled;
- (void)setRepeatedCallsEnabled:(id)arg1;
- (id)scheduledModeEnabled:(id)arg1;
- (void)setScheduledModeEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)setDoNotDisturb:(id)arg1 specifier:(id)arg2;
- (id)doNotDisturb:(id)arg1;
- (id)allowedDisruptionsGroup:(id)arg1;
- (id)allowedDisruptionsGroupID;
- (void)dealloc;

@end

