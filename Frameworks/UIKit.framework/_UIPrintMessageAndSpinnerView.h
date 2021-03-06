/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPrintMessageAndSpinnerView : UIView {
    NSArray * _currentHorizontalConstraints;
    UILabel * _label;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) NSArray *currentHorizontalConstraints;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL spinnerHidden;

- (void).cxx_destruct;
- (id)currentHorizontalConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (id)messageText;
- (void)setCurrentHorizontalConstraints:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)setSpinSpinner:(BOOL)arg1;
- (void)setSpinner:(id)arg1;
- (void)setSpinnerHidden:(BOOL)arg1;
- (BOOL)spinSpinner;
- (id)spinner;
- (BOOL)spinnerHidden;
- (void)updateConstraints;

@end
