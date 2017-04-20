/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext> {
    unsigned int  _bytesWritten;
    NSData * _data;
    id  _userInfo;
    NSData * mEncodedData;
}

@property (nonatomic) unsigned int bytesWritten;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasBytesRemaining;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (id)bufferedDataWithError:(id*)arg1;
- (unsigned int)bytesWritten;
- (id)data;
- (BOOL)hasBytesRemaining;
- (id)initWithData:(id)arg1 userInfo:(id)arg2;
- (void)setBytesWritten:(unsigned int)arg1;
- (id)userInfo;

@end