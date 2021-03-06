/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:24 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, BBSectionIcon, NSArray, NSData;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sectionID;
	NSString* _subsectionID;
	int _sectionType;
	int _sectionCategory;
	BOOL _showsInNotificationCenter;
	unsigned _suppressedSettings;
	unsigned _pushSettings;
	unsigned _alertType;
	unsigned _notificationCenterLimit;
	BOOL _showsInLockScreen;
	BOOL _showsOnBluetoothDevices;
	NSString* _pathToWeeAppPluginBundle;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSArray* _subsections;
	BBSectionInfo* _parentSection;
	NSString* _factorySectionID;
	NSArray* _dataProviderIDs;
	BOOL _suppressFromSettings;
	BOOL _displaysCriticalBulletins;
	BOOL _hideWeeApp;
	BOOL _showsMessagePreview;
	int _subsectionPriority;
	unsigned _version;

}

@property (nonatomic,copy) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSString * subsectionID;                          //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) int sectionType;                                //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) int sectionCategory;                            //@synthesize sectionCategory=_sectionCategory - In the implementation block
@property (assign,nonatomic) BOOL suppressFromSettings;                      //@synthesize suppressFromSettings=_suppressFromSettings - In the implementation block
@property (assign,nonatomic) BOOL showsInNotificationCenter;                 //@synthesize showsInNotificationCenter=_showsInNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL showsInLockScreen;                         //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showsOnBluetoothDevices;                   //@synthesize showsOnBluetoothDevices=_showsOnBluetoothDevices - In the implementation block
@property (assign,nonatomic) unsigned notificationCenterLimit;               //@synthesize notificationCenterLimit=_notificationCenterLimit - In the implementation block
@property (assign,nonatomic) unsigned pushSettings;                          //@synthesize pushSettings=_pushSettings - In the implementation block
@property (assign,nonatomic) unsigned alertType;                             //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;                       //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) unsigned suppressedSettings;                    //@synthesize suppressedSettings=_suppressedSettings - In the implementation block
@property (assign,nonatomic) BOOL hideWeeApp;                                //@synthesize hideWeeApp=_hideWeeApp - In the implementation block
@property (nonatomic,copy) NSString * pathToWeeAppPluginBundle;              //@synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle - In the implementation block
@property (nonatomic,copy) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) BBSectionIcon * icon;                             //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL displaysCriticalBulletins;                 //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,copy) NSArray * subsections;                            //@synthesize subsections=_subsections - In the implementation block
@property (assign,nonatomic) BBSectionInfo * parentSection;                  //@synthesize parentSection=_parentSection - In the implementation block
@property (assign,nonatomic) int subsectionPriority;                         //@synthesize subsectionPriority=_subsectionPriority - In the implementation block
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) unsigned bulletinCount; 
@property (nonatomic,readonly) NSData * iconData; 
@property (nonatomic,copy) NSString * factorySectionID;                      //@synthesize factorySectionID=_factorySectionID - In the implementation block
@property (nonatomic,copy) NSArray * dataProviderIDs;                        //@synthesize dataProviderIDs=_dataProviderIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)defaultStateForSetting:(unsigned)arg1 inSectionType:(int)arg2 ;
+(id)defaultSectionInfoForType:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)displayName;
-(BOOL)enabled;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(id)sectionID;
-(void)setSectionID:(id)arg1 ;
-(BOOL)showsMessagePreview;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(unsigned)notificationCenterLimit;
-(id)dataProviderIDs;
-(id)subsections;
-(id)subsectionID;
-(BOOL)showsInNotificationCenter;
-(unsigned)alertType;
-(BOOL)showsInLockScreen;
-(id)factorySectionID;
-(id)effectiveSectionInfoWithFactoryInfo:(id)arg1 ;
-(id)effectiveSectionInfo;
-(id)_subsectionForID:(id)arg1 ;
-(void)_replaceSubsection:(id)arg1 ;
-(id)pathToWeeAppPluginBundle;
-(BOOL)hideWeeApp;
-(void)setHideWeeApp:(BOOL)arg1 ;
-(void)setSuppressFromSettings:(BOOL)arg1 ;
-(void)setFactorySectionID:(id)arg1 ;
-(int)sectionCategory;
-(void)_configureWithDefaultsForSectionType:(int)arg1 ;
-(void)setParentSection:(id)arg1 ;
-(void)setSuppressedSettings:(unsigned)arg1 ;
-(void)setShowsInNotificationCenter:(BOOL)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setShowsOnBluetoothDevices:(BOOL)arg1 ;
-(void)setPushSettings:(unsigned)arg1 ;
-(void)setAlertType:(unsigned)arg1 ;
-(void)setBulletinCount:(unsigned)arg1 ;
-(id)parentSection;
-(id)_pushSettingsDescription;
-(unsigned)suppressedSettings;
-(void)setSubsections:(id)arg1 ;
-(void)setDataProviderIDs:(id)arg1 ;
-(void)setNotificationCenterLimit:(unsigned)arg1 ;
-(void)setSubsectionID:(id)arg1 ;
-(void)setSectionCategory:(int)arg1 ;
-(BOOL)suppressFromSettings;
-(BOOL)showsOnBluetoothDevices;
-(unsigned)pushSettings;
-(void)setPathToWeeAppPluginBundle:(id)arg1 ;
-(BOOL)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(BOOL)arg1 ;
-(void)_addSubsection:(id)arg1 ;
-(int)subsectionPriority;
-(void)setSubsectionPriority:(int)arg1 ;
-(void)_associateDataProviderSectionInfo:(id)arg1 ;
-(void)_dissociateDataProviderSectionInfo:(id)arg1 ;
-(unsigned)bulletinCount;
-(id)iconData;
-(void)setDisplayName:(id)arg1 ;
-(int)sectionType;
-(void)setSectionType:(int)arg1 ;
-(id)icon;
@end

