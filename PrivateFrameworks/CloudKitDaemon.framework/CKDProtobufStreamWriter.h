/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <CKDProtobufMessageSigningDelegate>, NSData, NSFileHandle, NSInputStream, NSMutableArray, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {
    NSMutableArray *_allObjects;
    NSFileHandle *_binaryLogFileHandle;
    unsigned int _bufferSize;
    NSData *_curData;
    unsigned int _curDataPos;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _haveFinishedCompression;
    BOOL _haveFinishedStreaming;
    BOOL _haveFlushedZlib;
    NSFileHandle *_humanLogFileHandle;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    BOOL _shouldCompress;
    <CKDProtobufMessageSigningDelegate> *_signingDelegate;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } _zlibStream;
}

@property(retain) NSFileHandle * binaryLogFileHandle;
@property unsigned int bufferSize;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL haveFinishedCompression;
@property BOOL haveFinishedStreaming;
@property(retain) NSFileHandle * humanLogFileHandle;
@property(readonly) NSInputStream * inputStream;
@property BOOL shouldCompress;
@property <CKDProtobufMessageSigningDelegate> * signingDelegate;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_compressBodyData:(id)arg1 shouldFlush:(BOOL)arg2;
- (id)_dataForMessage:(id)arg1;
- (BOOL)_finishStreaming:(id)arg1;
- (id)_prepareMescalSignature:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1 shouldSign:(BOOL)arg2;
- (int)_streamNextObject:(id)arg1;
- (void)_tearDownOutputStream;
- (int)_writeDataToStream:(id)arg1;
- (id)binaryLogFileHandle;
- (unsigned int)bufferSize;
- (void)dealloc;
- (BOOL)haveFinishedCompression;
- (BOOL)haveFinishedStreaming;
- (id)humanLogFileHandle;
- (id)initWithCompression:(BOOL)arg1;
- (id)inputStream;
- (void)open;
- (void)setBinaryLogFileHandle:(id)arg1;
- (void)setBufferSize:(unsigned int)arg1;
- (void)setHaveFinishedCompression:(BOOL)arg1;
- (void)setHaveFinishedStreaming:(BOOL)arg1;
- (void)setHumanLogFileHandle:(id)arg1;
- (void)setShouldCompress:(BOOL)arg1;
- (void)setSigningDelegate:(id)arg1;
- (void)setStreamedObjects:(id)arg1;
- (BOOL)shouldCompress;
- (id)signingDelegate;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;

@end