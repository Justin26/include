//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBStarkFakeIconOperationController, SBStarkIconListModel;

@protocol SBStarkLauncher <NSObject>
+ (double)desiredHeightForBounds:(struct CGRect)arg1;
@property(nonatomic) id <SBStarkAutoHideControlBarDelegate> autoHideDelegate;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController;
@property(readonly, nonatomic) _Bool obscuresControlBar;
@property(readonly, nonatomic) _Bool hidesAutomatically;
@property(readonly, nonatomic) SBStarkIconListModel *iconList;
@property(nonatomic) double height;
@end

