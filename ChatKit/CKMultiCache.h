//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKMultiDict.h>

@interface CKMultiCache : CKMultiDict
{
    unsigned long long _limit;
}

@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end

