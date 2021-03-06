/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString;

@interface SAMPPodcastCollection : SAMPCollection {
}

@property(copy) NSString * artist;
@property(copy) NSArray * preferredPlayOrder;
@property(copy) NSString * sortArtist;
@property(copy) NSNumber * subscribed;

+ (id)podcastCollection;
+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)artist;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)preferredPlayOrder;
- (void)setArtist:(id)arg1;
- (void)setPreferredPlayOrder:(id)arg1;
- (void)setSortArtist:(id)arg1;
- (void)setSubscribed:(id)arg1;
- (id)sortArtist;
- (id)subscribed;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
