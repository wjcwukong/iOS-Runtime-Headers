/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnob, TSDRep;

@interface TSDKnobTracker : NSObject <TSDLayoutManipulatingTracker> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    TSDAutoscroll *mAutoscroll;
    } mCurrentPosition;
    BOOL mDidBegin;
    BOOL mDidDrag;
    BOOL mDragEnding;
    BOOL mEndedOperationDueToESC;
    BOOL mIsInspectorDrivenTracking;
    TSDKnob *mKnob;
    } mKnobOffset;
    TSDRep *mRep;
}

@property(retain) TSDAutoscroll * autoscroll;
@property struct CGPoint { float x1; float x2; } currentPosition;
@property(readonly) double delay;
@property(readonly) BOOL didBegin;
@property BOOL didDrag;
@property BOOL dragEnding;
@property(readonly) BOOL endedOperationDueToESC;
@property(readonly) TSDInteractiveCanvasController * icc;
@property BOOL isInspectorDrivenTracking;
@property(retain) TSDKnob * knob;
@property(readonly) struct CGPoint { float x1; float x2; } knobOffset;
@property(retain) TSDRep * rep;

- (BOOL)allowHUDToDisplay;
- (int)allowedAutoscrollDirections;
- (id)autoscroll;
- (void)autoscrollWillNotStart;
- (void)beginMovingKnob;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (void)commitChangesForReps:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertKnobPositionFromUnscaledCanvas:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertKnobPositionToUnscaledCanvas:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentBoundsForStandardKnobs;
- (struct CGPoint { float x1; float x2; })currentPosition;
- (void)dealloc;
- (double)delay;
- (BOOL)didBegin;
- (BOOL)didDrag;
- (BOOL)dragEnding;
- (unsigned long long)enabledKnobMask;
- (void)endMovingKnob;
- (BOOL)endedOperationDueToESC;
- (void)i_resetCurrentPositionToKnobPositionIfAppropriate;
- (void)i_setKnobOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)icc;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (BOOL)isInspectorDrivenTracking;
- (id)knob;
- (struct CGPoint { float x1; float x2; })knobOffset;
- (void)moveKnobToCanvasPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)moveKnobToRepPosition:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)operationShouldBeDynamic;
- (id)rep;
- (void)setAutoscroll:(id)arg1;
- (void)setCurrentPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDidDrag:(BOOL)arg1;
- (void)setDragEnding:(BOOL)arg1;
- (void)setIsInspectorDrivenTracking:(BOOL)arg1;
- (void)setKnob:(id)arg1;
- (void)setRep:(id)arg1;
- (BOOL)shouldEndMovingKnobOnESC;
- (BOOL)shouldHideOtherKnobs;
- (BOOL)shouldHideSelectionHighlight;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (BOOL)shouldUseKnobOffset;
- (BOOL)supportsAlignmentGuides;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformInRootForStandardKnobs;
- (float)unscaledStartAutoscrollThreshold;
- (void)updateAfterAutoscroll:(id)arg1;
- (BOOL)wantsAutoscroll;
- (void)willEndMovingKnobDueToESC;

@end
