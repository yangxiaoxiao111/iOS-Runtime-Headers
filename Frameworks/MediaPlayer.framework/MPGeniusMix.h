/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPlaylist, NSArray, MPMediaQuery, NSMutableArray;

@interface MPGeniusMix : NSObject <NSCoding> {
    MPMediaPlaylist *_playlist;
    NSArray *_representativeArtists;
    NSMutableArray *_representativeImageItems;
    MPMediaQuery *_seedTracksQuery;
}

@property(readonly) NSString *name;
@property(readonly) MPMediaPlaylist *playlist;
@property(readonly) NSArray *representativeArtists;
@property(readonly) MPMediaQuery *seedTracksQuery;

+ (id)artworkCacheDirectoryPath;
+ (id)artworkImageForMediaItem:(id)arg1;

- (id)_cacheDirectoryPath;
- (id)_cachedRepresentativeImagePath;
- (struct CGImage { }*)_newCGImageForArtworkData:(id)arg1 artworkInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg2;
- (NSUInteger)countOfRepresentativeImagesWithMaxCount:(NSUInteger)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMPMediaPlaylist:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)playlist;
- (id)representativeArtists;
- (struct CGImage { }*)representativeImageWithSize:(struct CGSize { float x1; float x2; })arg1 count:(NSUInteger)arg2 cacheOnly:(BOOL)arg3;
- (struct CGImage { }*)representativeImageWithSize:(struct CGSize { float x1; float x2; })arg1 count:(NSUInteger)arg2;
- (id)seedTracksQuery;

@end