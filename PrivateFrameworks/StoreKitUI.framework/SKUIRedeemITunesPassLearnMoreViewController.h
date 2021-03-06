/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSURL, SKUIPassbookLoader, SKUIRedeemITunesPassLearnMoreView;

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate> {
    BOOL _didTapAddPassbookButton;
    SKUIRedeemITunesPassLearnMoreView *_learnMoreView;
    SKUIPassbookLoader *_passbookLoader;
    NSURL *_passbookURL;
}

- (void).cxx_destruct;
- (void)_didLoadPassbookURLString:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (id)_existingPass;
- (void)_loadPassbookPass;
- (void)_loadPassbookURL;
- (void)_passButtonAction:(id)arg1;
- (void)_showErrorDialog;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
