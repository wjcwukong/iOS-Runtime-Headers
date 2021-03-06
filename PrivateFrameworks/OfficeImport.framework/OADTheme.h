/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject {
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mTextDefaults;
}

@property(retain) OADBaseStyles * baseStyles;
@property(retain) OADDefaultProperties * lineDefaults;
@property(retain) OADDefaultProperties * shapeDefaults;
@property(retain) OADDefaultProperties * textDefaults;

- (void)addDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (id)addTextDefaults;
- (id)baseStyles;
- (void)dealloc;
- (id)init;
- (id)lineDefaults;
- (void)setBaseStyles:(id)arg1;
- (void)setLineDefaults:(id)arg1;
- (void)setShapeDefaults:(id)arg1;
- (void)setTextDefaults:(id)arg1;
- (id)shapeDefaults;
- (id)textDefaults;

@end
