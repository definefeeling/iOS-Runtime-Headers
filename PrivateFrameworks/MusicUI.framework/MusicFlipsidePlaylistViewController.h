/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class <MPURatingControlDelegate>, NSIndexPath, NSString;

@interface MusicFlipsidePlaylistViewController : MusicPlaylistSongsViewController <MPURatingControlDelegate, MusicFlipsideRating> {
    float _maximumDurationWidth;
    <MPURatingControlDelegate> *_ratingDelegate;
    NSIndexPath *_ratingItemIndexPath;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) float maximumDurationWidth;
@property <MPURatingControlDelegate> * ratingDelegate;
@property BOOL showingRating;
@property(readonly) Class superclass;

+ (BOOL)_shouldDisplayActions;
+ (BOOL)_shouldShowActions;
+ (BOOL)shouldPushNowPlayingOnSelection;

- (void).cxx_destruct;
- (id)_createTableViewBackgroundView;
- (void)_flipsidePlaylist_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (float)maximumDurationWidth;
- (id)ratingDelegate;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (void)reloadData;
- (void)setRatingDelegate:(id)arg1;
- (void)setShowingRating:(BOOL)arg1;
- (void)setShowingRating:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (BOOL)showingRating;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;

@end