/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:24 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletin.h>

@class NSString, NSSet, BBContent, NSDate, NSTimeZone, BBSound, BBAction, NSArray;

@interface BBBulletinRequest : BBBulletin {

	unsigned _expirationEvents;

}

@property (nonatomic,@dynamic,copy) NSString * bulletinID; 
@property (nonatomic,@dynamic,copy) NSString * sectionID; 
@property (nonatomic,@dynamic,copy) NSSet * subsectionIDs; 
@property (nonatomic,@dynamic,copy) NSString * recordID; 
@property (nonatomic,@dynamic,copy) NSString * publisherBulletinID; 
@property (nonatomic,@dynamic,copy) NSString * dismissalID; 
@property (assign,nonatomic,@dynamic) int addressBookRecordID; 
@property (assign,nonatomic,@dynamic) int sectionSubtype; 
@property (nonatomic,@dynamic,copy) NSString * title; 
@property (nonatomic,@dynamic,copy) NSString * subtitle; 
@property (nonatomic,@dynamic,copy) NSString * message; 
@property (nonatomic,@dynamic,retain) BBContent * modalAlertContent; 
@property (nonatomic,@dynamic,retain) BBContent * starkBannerContent; 
@property (assign,nonatomic,@dynamic) BOOL hasEventDate; 
@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (nonatomic,@dynamic,retain) NSDate * endDate; 
@property (nonatomic,@dynamic,retain) NSDate * recencyDate; 
@property (assign,nonatomic,@dynamic) int dateFormatStyle; 
@property (assign,nonatomic,@dynamic) BOOL dateIsAllDay; 
@property (nonatomic,@dynamic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic,@dynamic) unsigned accessoryStyle; 
@property (assign,nonatomic,@dynamic) BOOL clearable; 
@property (nonatomic,@dynamic,retain) BBSound * sound; 
@property (assign,nonatomic,@dynamic) int primaryAttachmentType; 
@property (assign,nonatomic,@dynamic) BOOL wantsFullscreenPresentation; 
@property (nonatomic,@dynamic,copy) NSSet * alertSuppressionContexts; 
@property (nonatomic,@dynamic,copy) BBAction * defaultAction; 
@property (nonatomic,@dynamic,copy) BBAction * alternateAction; 
@property (nonatomic,@dynamic,copy) BBAction * acknowledgeAction; 
@property (nonatomic,@dynamic,copy) BBAction * snoozeAction; 
@property (nonatomic,@dynamic,copy) NSArray * buttons; 
@property (nonatomic,@dynamic,retain) NSDate * expirationDate; 
@property (assign,nonatomic) unsigned expirationEvents;                              //@synthesize expirationEvents=_expirationEvents - In the implementation block
@property (nonatomic,@dynamic,copy) BBAction * expireAction; 
@property (assign,nonatomic,@dynamic) BOOL usesExternalSync; 
@property (assign,nonatomic,@dynamic) BOOL expiresOnPublisherDeath; 
@property (nonatomic,@dynamic,copy) NSString * section; 
@property (assign,nonatomic) unsigned realertCount; 
@property (assign,nonatomic) BOOL showsUnreadIndicator; 
@property (assign,nonatomic) BOOL tentative; 
-(BOOL)tentative;
-(void)setTentative:(BOOL)arg1 ;
-(void)publish;
-(unsigned)expirationEvents;
-(void)setExpirationEvents:(unsigned)arg1 ;
-(void)addAttachmentOfType:(int)arg1 ;
-(void)publish:(BOOL)arg1 ;
-(void)setContextValue:(id)arg1 forKey:(id)arg2 ;
-(void)setPrimaryAttachmentType:(int)arg1 ;
-(void)addButton:(id)arg1 ;
-(void)withdraw;
-(void)setUnlockActionLabel:(id)arg1 ;
-(unsigned)realertCount;
-(void)setRealertCount:(unsigned)arg1 ;
-(void)addAlertSuppressionAppID:(id)arg1 ;
-(void)generateBulletinID;
-(BOOL)hasContentModificationsRelativeTo:(id)arg1 ;
-(id)publisherMatchID;
-(void)generateNewBulletinID;
-(void)setShowsUnreadIndicator:(BOOL)arg1 ;
-(BOOL)showsUnreadIndicator;
@end

