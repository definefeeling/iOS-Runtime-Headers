/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSPDatabaseInputStream : NSObject <SFUInputStream, TSUStreamReadChannel> {
    struct sqlite3_blob { } *_blob;
    int _length;
    int _offset;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithBlob:(struct sqlite3_blob { }*)arg1;
- (long long)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;
- (void)seekToOffset:(long long)arg1;

@end