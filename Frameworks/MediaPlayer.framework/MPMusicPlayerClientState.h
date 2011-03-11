/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery;

@interface MPMusicPlayerClientState : NSObject  {
    MPMediaQuery *_query;
    MPMediaItem *_firstItem;
    int _shuffleMode;
    int _repeatMode;
    BOOL _useApplicationSpecificQueue;
    BOOL _allowsRemoteUIAccess;
    BOOL _videoPlaybackEnabled;
    BOOL _seeking;
    int _backgroundPlaybackAccess;
}

@property BOOL seeking;
@property BOOL videoPlaybackEnabled;
@property int backgroundPlaybackAccess;
@property(retain) MPMediaItem * firstItem;
@property BOOL allowsRemoteUIAccess;
@property BOOL useApplicationSpecificQueue;
@property int shuffleMode;
@property int repeatMode;
@property(retain) MPMediaQuery * query;


- (id)query;
- (void)dealloc;
- (BOOL)seeking;
- (void)setSeeking:(BOOL)arg1;
- (BOOL)videoPlaybackEnabled;
- (void)setVideoPlaybackEnabled:(BOOL)arg1;
- (int)backgroundPlaybackAccess;
- (void)setBackgroundPlaybackAccess:(int)arg1;
- (id)firstItem;
- (void)setFirstItem:(id)arg1;
- (BOOL)allowsRemoteUIAccess;
- (BOOL)useApplicationSpecificQueue;
- (void)setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)setQuery:(id)arg1;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (void)setRepeatMode:(int)arg1;
- (int)shuffleMode;
- (int)repeatMode;
- (void)setShuffleMode:(int)arg1;

@end