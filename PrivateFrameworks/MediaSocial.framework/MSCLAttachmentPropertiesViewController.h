/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachmentPropertiesViewController : SKUIViewController <MSCLAttachmentPropertiesTableViewSectionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    MSCLAlbumSelectionViewController * _albumSelectionViewController;
    int  _artistNameLength;
    MSCLAttachment * _attachment;
    SKUIMediaSocialAuthor * _author;
    NSArray * _authorAlbumItems;
    MSCLLoadAuthorAlbumsOperation * _authorAlbumsOperation;
    MSCLConfiguration * _configuration;
    <MSCLAttachmentPropertiesDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    UIImagePickerController * _imagePickerController;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _keyboardFrame;
    UIPopoverPresentationController * _popoverPresentationController;
    NSMutableArray * _sections;
    UITableView * _tableView;
    int  _titleLength;
    MSCLTokenTextViewTableAssistant * _tokenTextViewAssistant;
}

@property (nonatomic, readonly, copy) MSCLAttachment *attachment;
@property (nonatomic, copy) SKUIMediaSocialAuthor *author;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLAttachmentPropertiesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (void)_keyboardChangeNotification:(id)arg1;
- (void)_layoutTableView;
- (void)_presentCoverImageEditingOptionsForIndexPath:(id)arg1;
- (void)_presentCoverImagePickerControllerForIndexPath:(id)arg1;
- (void)_pushAlbumSelectionViewController;
- (void)_pushCategorySelectionViewController;
- (void)_reloadSectionWithType:(int)arg1;
- (void)_setAuthorAlbumItems:(id)arg1;
- (void)_setCoverImage:(id)arg1;
- (void)_updateDoneButton;
- (id)attachment;
- (id)author;
- (void)dealloc;
- (id)delegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithAttachment:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewSection:(id)arg1 artistLengthChanged:(int)arg2;
- (void)tableViewSection:(id)arg1 titleLengthChanged:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
