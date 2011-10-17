/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources;

@interface EDBorders : NSObject <NSCopying> {
    EDResources *mResources;
    unsigned int mLeftBorderIndex;
    unsigned int mRightBorderIndex;
    unsigned int mTopBorderIndex;
    unsigned int mBottomBorderIndex;
    unsigned int mDiagonalBorderIndex;
    unsigned int mVerticalBorderIndex;
    unsigned int mHorizontalBorderIndex;
}

+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8;
+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6;
+ (id)bordersWithResources:(id)arg1;

- (void)setVerticalBorder:(id)arg1;
- (void)setHorizontalBorder:(id)arg1;
- (BOOL)isEqualToBorders:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setBottomBorder:(id)arg1;
- (void)setDiagonalBorder:(id)arg1;
- (id)leftBorder;
- (id)rightBorder;
- (id)verticalBorder;
- (id)topBorder;
- (id)bottomBorder;
- (id)horizontalBorder;
- (id)diagonalBorder;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end