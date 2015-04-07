/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPUCompletionQueryDataSource, NSOperationQueue, NSString;

@interface MusicAlbumsDetailViewController : MusicTableViewController <MPUCompletionFooterViewDelegate, MPUCompletionQueryDataSourceDelegate, MusicViewControllerKeepLocalContainer> {
    NSOperationQueue *_downloadabilityOperationQueue;
    int _downloadableSongCount;
    BOOL _hasEverReceivedWillAppear;
    BOOL _isDownloading;
    BOOL _isTransitioning;
    float _maximumDurationWidth;
    BOOL _useDownloadAllArtistCellConfig;
}

@property(readonly) MPUCompletionQueryDataSource * completionDataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) int downloadableSongCount;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isDownloading;
@property(readonly) float maximumDurationWidth;
@property(readonly) Class superclass;

+ (Class)_albumsDetailTableHeaderViewClass;
+ (id)actionCellConfigurationClasses;
+ (BOOL)shouldPushNowPlayingOnSelection;
+ (BOOL)shouldShowCMC;

- (void).cxx_destruct;
- (void)_MusicAlbumsDetailViewController_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)_MusicAlbumsDetailViewController_defaultsDidChangeNotification:(id)arg1;
- (void)_applyCloudDownloadStateForHeaderView:(id)arg1 withAlbum:(id)arg2;
- (int)_collectionGroupingForProperty:(id)arg1;
- (void)_configureFooterView:(id)arg1 forSection:(int)arg2 offer:(id)arg3;
- (id)_createTableView;
- (void)_downloadAllButtonAction:(id)arg1;
- (int)_footerStyleForSection:(int)arg1;
- (BOOL)_getCollectionPersistentID:(long long*)arg1 groupingType:(int*)arg2;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateTitle;
- (void)_updateVisibleHeadersCloudDownloadStates;
- (void)_updateVisibleHeadersCloudRightInset;
- (id)completionDataSource;
- (void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2;
- (void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2;
- (void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(int)arg3;
- (void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(int)arg2;
- (void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(int)arg3;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (int)downloadableSongCount;
- (id)initWithDataSource:(id)arg1;
- (BOOL)isCollectionKeptLocalForMediaItem:(id)arg1 inSection:(int)arg2;
- (BOOL)isDownloading;
- (float)maximumDurationWidth;
- (BOOL)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end