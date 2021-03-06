/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUFeedPreheatManager;

@interface PUFeedPreheatUpdateRequest : NSObject {
    int _currentBatchToken;
    PUFeedPreheatManager *_preheatManager;
    int _state;
}

@property(readonly) PUFeedPreheatManager * preheatManager;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1 withFastImageFormat:(int)arg2 qualityImageFormat:(int)arg3 forBatchToken:(int)arg4;
- (void)complete;
- (id)initWithPreheatManager:(id)arg1;
- (void)performBatchUpdateForAssetsAtIndexPath:(id)arg1 elementKind:(id)arg2 usingBlock:(id)arg3;
- (id)preheatManager;

@end
