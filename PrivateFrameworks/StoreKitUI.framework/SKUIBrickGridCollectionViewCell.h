/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIEditorialCellLayout, UIImage, UIImageView, UIView;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {
    NSString *_accessibilityLabel;
    UIImageView *_brickImageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
}

@property(copy) NSString * accessibilityLabel;
@property(retain) UIImage * brickImage;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)applyEditorialLayout:(id)arg1 orientation:(int)arg2;
- (id)brickImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBrickImage:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end