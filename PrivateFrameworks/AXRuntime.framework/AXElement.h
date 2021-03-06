/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@class AXElement, AXElementGroup, AXUIElement, NSArray, NSString;

@interface AXElement : NSObject <AXGroupable> {
    AXElementGroup *_parentGroup;
    BOOL _representsScannerGroup;
    AXUIElement *_uiElement;
}

@property(readonly) AXElement * accessibilityUIServerApplication;
@property(readonly) int applicationOrientation;
@property BOOL assistiveTechFocused;
@property(retain) AXElement * autoscrollTarget;
@property(readonly) NSString * bundleId;
@property(readonly) BOOL canPerformEscape;
@property(readonly) BOOL canPerformZoom;
@property(readonly) struct CGPoint { float x1; float x2; } centerPoint;
@property(readonly) AXElement * currentApplication;
@property(readonly) NSArray * customActions;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) struct __AXUIElement { }* elementRef;
@property(readonly) AXElement * firstElementInApplication;
@property(readonly) AXElement * firstElementInApplicationForFocus;
@property(readonly) AXElement * firstResponder;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(readonly) BOOL hasTextEntry;
@property(readonly) BOOL hasVariantKeys;
@property(readonly) BOOL hasWebContent;
@property(readonly) unsigned int hash;
@property(readonly) NSString * hint;
@property(readonly) NSString * identifier;
@property(readonly) BOOL isAccessibilityOpaqueElementProvider;
@property(readonly) BOOL isAccessibleElement;
@property(readonly) BOOL isAutoscrolling;
@property(readonly) BOOL isKeyboardKey;
@property(readonly) BOOL isMathEquation;
@property(readonly) BOOL isScannerElement;
@property(readonly) BOOL isScreenLocked;
@property(readonly) BOOL isSpringBoard;
@property(readonly) BOOL isSystemWideElement;
@property(readonly) BOOL isTouchContainer;
@property(readonly) BOOL isValid;
@property(readonly) BOOL isVisible;
@property(readonly) NSString * label;
@property(readonly) NSString * language;
@property AXElementGroup * parentGroup;
@property(getter=isPassivelyListeningForEvents) BOOL passivelyListeningForEvents;
@property(readonly) struct CGPath { }* path;
@property(readonly) BOOL representsScannerGroup;
@property(readonly) int scannerActivateBehavior;
@property(readonly) NSArray * scannerRootGroup;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedTextRange;
@property(readonly) AXElement * springBoardApplication;
@property(readonly) Class superclass;
@property(readonly) NSArray * supportedGestures;
@property(readonly) AXElement * systemApplication;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } textCursorFrame;
@property(readonly) NSArray * textOperations;
@property(readonly) AXElement * touchContainer;
@property(readonly) unsigned long long traits;
@property(readonly) NSArray * typingCandidates;
@property(retain) AXUIElement * uiElement;
@property(readonly) NSString * value;
@property(readonly) NSArray * variantKeys;
@property(readonly) NSArray * visibleElements;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleFrame;
@property(readonly) struct CGPoint { float x1; float x2; } visiblePoint;
@property(readonly) unsigned int windowContextId;

+ (id)elementAtCoordinate:(struct CGPoint { float x1; float x2; })arg1 withVisualPadding:(BOOL)arg2;
+ (id)elementWithAXUIElement:(struct __AXUIElement { }*)arg1;
+ (id)elementWithUIElement:(id)arg1;
+ (id)systemWideElement;

- (id)_axElementsForAXUIElements:(id)arg1;
- (id)accessibilityUIServerApplication;
- (int)applicationOrientation;
- (BOOL)assistiveTechFocused;
- (void)autoscrollInDirection:(int)arg1;
- (id)autoscrollTarget;
- (id)bundleId;
- (BOOL)canPerformActivate;
- (BOOL)canPerformEscape;
- (BOOL)canPerformSecondaryActivate;
- (BOOL)canPerformTrackingDetail;
- (BOOL)canPerformZoom;
- (BOOL)canScrollInAtLeastOneDirection;
- (struct CGPoint { float x1; float x2; })centerPoint;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromContextId:(unsigned int)arg2;
- (id)currentApplication;
- (id)customActions;
- (void)dealloc;
- (void)decreaseAutoscrollSpeed;
- (id)description;
- (float)distanceToElement:(id)arg1;
- (float)distanceToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)elementForAttribute:(int)arg1;
- (struct __AXUIElement { }*)elementRef;
- (id)elementsMatchingText:(id)arg1;
- (id)firstElementInApplication;
- (id)firstElementInApplicationForFocus;
- (id)firstResponder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (BOOL)hasAllTraits:(unsigned long long)arg1;
- (BOOL)hasAnyTraits:(unsigned long long)arg1;
- (BOOL)hasOnlyTraits:(unsigned long long)arg1;
- (BOOL)hasTextEntry;
- (BOOL)hasVariantKeys;
- (BOOL)hasWebContent;
- (id)highestAncestorGroup;
- (id)hint;
- (id)identifier;
- (void)increaseAutoscrollSpeed;
- (id)initWithAXUIElement:(struct __AXUIElement { }*)arg1;
- (id)initWithUIElement:(id)arg1;
- (void)insertText:(id)arg1 atPosition:(int)arg2;
- (void)insertTextAtCurrentPosition:(id)arg1;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (BOOL)isAccessibleElement;
- (BOOL)isAutoscrolling;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isKeyboardKey;
- (BOOL)isMap;
- (BOOL)isMathEquation;
- (BOOL)isPassivelyListeningForEvents;
- (BOOL)isScannerElement;
- (BOOL)isScreenLocked;
- (BOOL)isSpringBoard;
- (BOOL)isSystemWideElement;
- (BOOL)isTouchContainer;
- (BOOL)isValid;
- (BOOL)isVisible;
- (id)keyboardContainer;
- (id)label;
- (id)language;
- (BOOL)longPress;
- (id)nextElementsWithCount:(unsigned int)arg1;
- (id)opaqueElementInDirection:(int)arg1 startElement:(id)arg2 searchTraits:(unsigned long long)arg3;
- (id)opaqueParent;
- (id)parentGroup;
- (struct CGPath { }*)path;
- (void)pauseAutoscrolling;
- (BOOL)performAction:(int)arg1 withValue:(id)arg2;
- (BOOL)performAction:(int)arg1;
- (BOOL)press;
- (id)previousElementsWithCount:(unsigned int)arg1;
- (BOOL)representsScannerGroup;
- (int)scannerActivateBehavior;
- (id)scannerRootGroup;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)scrollToVisible;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedTextRange;
- (void)sendUserEventOccurred;
- (void)setAssistiveTechFocused:(BOOL)arg1;
- (void)setAutoscrollTarget:(id)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setPassivelyListeningForEvents:(BOOL)arg1;
- (void)setSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setUiElement:(id)arg1;
- (id)springBoardApplication;
- (id)supportedGestures;
- (BOOL)supportsAction:(int)arg1;
- (id)systemApplication;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textCursorFrame;
- (id)textOperations;
- (id)touchContainer;
- (unsigned long long)traits;
- (id)typingCandidates;
- (id)uiElement;
- (id)value;
- (id)variantKeys;
- (id)visibleElements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleFrame;
- (struct CGPoint { float x1; float x2; })visiblePoint;
- (unsigned int)windowContextId;
- (BOOL)zoomIn;
- (BOOL)zoomOut;

@end
