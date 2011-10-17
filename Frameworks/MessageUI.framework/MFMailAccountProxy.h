/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSDictionary;

@interface MFMailAccountProxy : NSObject  {
    NSDictionary *_properties;
}

+ (void)reloadAccounts;
+ (id)mailAccounts;
+ (id)activeAccounts;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)defaultMailAccountForDelivery;

- (id)fromEmailAddresses;
- (id)fullUserName;
- (id)firstEmailAddress;
- (id)username;
- (id)emailAddresses;
- (id)uniqueID;
- (id)_initWithProperties:(id)arg1;
- (BOOL)_isActive;
- (BOOL)isDefaultDeliveryAccount;
- (id)_emailAddressesAndAliases;
- (BOOL)allowsEmoji;
- (BOOL)supportsEmoji;
- (BOOL)restrictsRepliesAndForwards;
- (id)mailAccount;
- (void)dealloc;
- (BOOL)_isRestricted;

@end