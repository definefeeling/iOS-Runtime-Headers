/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKCalloutBar : UIView {
    float  _arrowX;
    _UIBackdropView * _backgroundView;
    UIImageView * _blurMaskView;
    NSArray * _controls;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _highlightRect;
    _UIBackdropView * _separatorBackgroundView;
    UIImageView * _separatorMaskView;
    UIImageView * _tintMaskView;
    BOOL  _up;
}

@property (nonatomic) float arrowX;
@property (nonatomic, retain) NSArray *controls;
@property (nonatomic) BOOL up;

- (void).cxx_destruct;
- (float)arrowX;
- (id)controls;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })dividerLineRectForControl:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newMaskView:(int)arg1;
- (void)setArrowX:(float)arg1;
- (void)setBlurDisabled:(BOOL)arg1;
- (void)setControls:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 forControl:(id)arg2;
- (void)setUp:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFitsControls:(id)arg1;
- (BOOL)up;

@end