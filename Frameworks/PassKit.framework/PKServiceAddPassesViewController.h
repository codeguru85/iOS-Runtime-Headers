/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, NSMutableArray, NSMutableData, NSURLConnection, PKGroupsController, PKPassGroupStackView, UINavigationBar, UIProgressView;

@interface PKServiceAddPassesViewController : UIViewController <PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKGroupsControllerDelegate, UIScrollViewDelegate, PKServiceAddPassesViewControllerProtocol> {
    BOOL _allowsPassIngestion;
    BOOL _alreadyAdding;
    PKPassGroupStackView *_cardStackView;
    NSMutableData *_downloadPassData;
    long long _downloadPassExpectedBytes;
    NSURLConnection *_downloadPassURLConnection;
    PKGroupsController *_groupsController;
    BOOL _haveStartedCardAnimation;
    NSArray *_localPassDatas;
    NSMutableArray *_localPasses;
    NSMutableArray *_minimumCardHeightFromHereToTop;
    UINavigationBar *_navigationBar;
    int _presentationState;
    UIProgressView *_progressView;
    BOOL _viewAppeared;
}

@property(retain) PKPassGroupStackView * cardStackView;
@property(retain) PKGroupsController * groupsController;
@property BOOL haveStartedCardAnimation;
@property(retain) NSArray * localPassDatas;
@property(retain) NSMutableArray * localPasses;
@property(retain) NSMutableArray * minimumCardHeightFromHereToTop;
@property(retain) UINavigationBar * navigationBar;
@property int presentationState;
@property(retain) UIProgressView * progressView;
@property BOOL viewAppeared;

+ (id)_exportedInterface;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)_remoteViewControllerInterface;

- (void)acceptCard:(id)arg1;
- (void)animateInCardIfNeeded;
- (void)cancelCard:(id)arg1;
- (id)cardStackView;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)genericTitleWithCount:(unsigned int)arg1;
- (id)groupAtIndex:(unsigned int)arg1;
- (float)groupHeightAtIndex:(unsigned int)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didAnimateToState:(int)arg2;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (id)groupsController;
- (BOOL)haveStartedCardAnimation;
- (unsigned int)indexOfGroup:(id)arg1;
- (void)ingestCardAtURL:(id)arg1;
- (void)ingestPasses:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadGroups;
- (void)loadView;
- (id)localPassDatas;
- (id)localPasses;
- (id)minimumCardHeightFromHereToTop;
- (id)navigationBar;
- (unsigned int)numberOfGroups;
- (BOOL)passesGrowWhenFlipped;
- (int)presentationState;
- (id)progressView;
- (void)setAllowsPassIngestion:(BOOL)arg1;
- (void)setCardStackView:(id)arg1;
- (void)setGroupsController:(id)arg1;
- (void)setHaveStartedCardAnimation:(BOOL)arg1;
- (void)setLocalPassDatas:(id)arg1;
- (void)setLocalPasses:(id)arg1;
- (void)setMinimumCardHeightFromHereToTop:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setPresentationState:(int)arg1;
- (void)setProgressView:(id)arg1;
- (void)setViewAppeared:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showDownloadingPassUI;
- (id)styleTitleUsingPass:(id)arg1 count:(unsigned int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (int)suppressedContent;
- (void)tearDown;
- (void)tearDownDownloadConnection;
- (void)updateAddButton;
- (void)updateAddButtonAndSettings;
- (void)updateCancelButton;
- (void)updateNavTitle;
- (BOOL)viewAppeared;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end
