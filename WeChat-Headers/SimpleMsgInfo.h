//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleImgInfo.h"

@class CMessageWrap, NSString;

@interface SimpleMsgInfo : SimpleImgInfo
{
    unsigned int m_uiMsgLocalID;
    unsigned int m_uiMsgType;
    NSString *_m_nsChatName;
    CMessageWrap *_m_msg;
}

@property(retain, nonatomic) CMessageWrap *m_msg; // @synthesize m_msg=_m_msg;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(nonatomic) unsigned int m_uiMsgType; // @synthesize m_uiMsgType;
@property(readonly, nonatomic) unsigned int m_uiMsgLocalID; // @synthesize m_uiMsgLocalID;
- (void).cxx_destruct;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (_Bool)isAppFileMsg;
- (_Bool)isAppVideoMsg;
- (_Bool)isAppMusicMsg;
- (_Bool)isAppUrlMsg;
- (id)getThumbOfAppMessage:(id)arg1;
- (id)getIconName;
- (id)getDefaultImg;
- (id)getTitle;
- (unsigned int)getVideoTime;
- (id)getImgPath;
- (id)getMsg;
- (id)getSquareImgDir;
- (void)setM_strMsgLocalID:(id)arg1;
- (id)init;

@end
