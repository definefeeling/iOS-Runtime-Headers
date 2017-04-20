/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAssociatedMessageChatItem : CKChatItem {
    NSString * _timestampString;
}

@property (nonatomic, readonly) NSString *associatedChatItemGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } associatedMessageRange;
@property (nonatomic, readonly) BOOL failed;
@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor { unsigned int x1; unsigned int x2; float x3; float x4; float x5; float x6; float x7; } geometryDescriptor;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) BOOL isFromMe;
@property (nonatomic, readonly) BOOL parentMessageIsFromMe;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, copy) NSString *timestampString;

- (void).cxx_destruct;
- (id)IMAssociatedMessageChatItem;
- (id)associatedChatItemGUID;
- (struct _NSRange { unsigned int x1; unsigned int x2; })associatedMessageRange;
- (BOOL)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned int x1; unsigned int x2; float x3; float x4; float x5; float x6; float x7; })geometryDescriptor;
- (id)guid;
- (BOOL)isFromMe;
- (id)loadTimestampString;
- (id)loadTranscriptDrawerText;
- (BOOL)parentMessageIsFromMe;
- (id)sender;
- (void)setTimestampString:(id)arg1;
- (id)time;
- (id)timestampString;
- (BOOL)transcriptOrientation;
- (BOOL)wantsDrawerLayout;

@end