/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPeoplePickerNavigationController, NSMutableArray;

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject {
    ABPeoplePickerNavigationController *_ppnc;
    NSMutableArray *_prompts;
}

- (BOOL)_shouldShowPromptForOrientation:(int)arg1;
- (void)dealloc;
- (unsigned int)indexForViewControllerType:(int)arg1;
- (id)initWithNavigationController:(id)arg1;
- (id)promptForViewControllerType:(int)arg1 orientation:(int)arg2;
- (void)setPrompt:(id)arg1 forViewControllerType:(int)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
