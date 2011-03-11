/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKAnimatingLabelView : UIView  {
    NSArray *_labels;
}

@property(readonly) NSArray * labels;

+ (void)SetLabelCount:(unsigned int)arg1;
+ (void)SetPauseDuration:(double)arg1;
+ (void)SetTransitionDuration:(double)arg1;
+ (void)animateToNextLabel;
+ (void)animationDidStop;
+ (void)SetShouldAnimate:(BOOL)arg1;
+ (BOOL)AnimationIsRunning;
+ (void)ResetAndStartAnimation;

- (void)recreateLabels;
- (void)layoutLabelIndex:(unsigned int)arg1;
- (void)transitionFromLabelIndex:(unsigned int)arg1 toLabelIndex:(unsigned int)arg2;
- (void)cleanUpLabelIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;
- (id)labels;

@end