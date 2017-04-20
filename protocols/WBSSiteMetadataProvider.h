/* Generated by RuntimeBrowser.
 */

@protocol WBSSiteMetadataProvider <NSObject>

@required

- (BOOL)canHandleRequest:(WBSSiteMetadataRequest *)arg1;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(BOOL)arg2;
- (<WBSSiteMetadataProviderDelegate> *)providerDelegate;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(BOOL*)arg2;
- (void)setProviderDelegate:(id <WBSSiteMetadataProviderDelegate>)arg1;

@optional

- (void)emptyCaches;
- (BOOL)isCachingDisabled;
- (NSOperation *)operationForRequest:(WBSSiteMetadataRequest *)arg1;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)setCachingDisabled:(BOOL)arg1;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;

@end