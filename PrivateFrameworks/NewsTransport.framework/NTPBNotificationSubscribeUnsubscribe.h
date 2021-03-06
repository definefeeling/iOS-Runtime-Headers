/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNotificationSubscribeUnsubscribe : PBCodable <NSCopying> {
    NSString * _campaignId;
    NSString * _campaignType;
    NSString * _channelId;
    NSString * _creativeId;
    struct { 
        unsigned int notificationSubscribeUnsubscribeLocation : 1; 
        unsigned int userAction : 1; 
        unsigned int isPaidUserOfChannel : 1; 
    }  _has;
    BOOL  _isPaidUserOfChannel;
    int  _notificationSubscribeUnsubscribeLocation;
    int  _userAction;
}

@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic, readonly) BOOL hasCampaignType;
@property (nonatomic, readonly) BOOL hasChannelId;
@property (nonatomic, readonly) BOOL hasCreativeId;
@property (nonatomic) BOOL hasIsPaidUserOfChannel;
@property (nonatomic) BOOL hasNotificationSubscribeUnsubscribeLocation;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL isPaidUserOfChannel;
@property (nonatomic) int notificationSubscribeUnsubscribeLocation;
@property (nonatomic) int userAction;

- (void).cxx_destruct;
- (id)campaignId;
- (id)campaignType;
- (id)channelId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasChannelId;
- (BOOL)hasCreativeId;
- (BOOL)hasIsPaidUserOfChannel;
- (BOOL)hasNotificationSubscribeUnsubscribeLocation;
- (BOOL)hasUserAction;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaidUserOfChannel;
- (void)mergeFrom:(id)arg1;
- (int)notificationSubscribeUnsubscribeLocation;
- (BOOL)readFrom:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setHasIsPaidUserOfChannel:(BOOL)arg1;
- (void)setHasNotificationSubscribeUnsubscribeLocation:(BOOL)arg1;
- (void)setHasUserAction:(BOOL)arg1;
- (void)setIsPaidUserOfChannel:(BOOL)arg1;
- (void)setNotificationSubscribeUnsubscribeLocation:(int)arg1;
- (void)setUserAction:(int)arg1;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
