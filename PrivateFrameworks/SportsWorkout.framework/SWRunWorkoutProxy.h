/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSString, NSDictionary;

@interface SWRunWorkoutProxy : NSObject  {
}

@property(readonly) NSString * currentSongName;
@property(readonly) int musicSelection;
@property(readonly) BOOL shouldControlMusic;
@property(readonly) NSString * powerSongName;
@property(readonly) BOOL hasPowerSong;
@property(readonly) BOOL hasEverStarted;
@property(readonly) NSDictionary * workoutData;
@property(readonly) NSString * workoutState;
@property(readonly) NSString * sensorSearchState;
@property(readonly) float goal;
@property(readonly) NSString * presetGoal;
@property(readonly) NSString * goalType;

+ (void)initialize;
+ (id)newProxy;

- (void)playPowerSong;
- (void)pauseMusic;
- (void)playMusic;
- (void)selectNextSong;
- (void)goToNowPlaying;
- (void)selectPreviousSong;
- (void)pauseWorkout;
- (void)prepareToActivateWorkout;
- (void)activateWorkout;
- (void)endWorkout;
- (void)playOnDemandPrompt;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;

@end