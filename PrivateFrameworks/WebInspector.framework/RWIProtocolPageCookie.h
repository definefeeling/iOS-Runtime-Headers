/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *domain;
@property (nonatomic) double expires;
@property (nonatomic) BOOL httpOnly;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) BOOL secure;
@property (nonatomic) BOOL session;
@property (nonatomic) int size;
@property (nonatomic, copy) NSString *value;

- (id)domain;
- (double)expires;
- (BOOL)httpOnly;
- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 size:(int)arg6 httpOnly:(BOOL)arg7 secure:(BOOL)arg8 session:(BOOL)arg9;
- (id)name;
- (id)path;
- (BOOL)secure;
- (BOOL)session;
- (void)setDomain:(id)arg1;
- (void)setExpires:(double)arg1;
- (void)setHttpOnly:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSession:(BOOL)arg1;
- (void)setSize:(int)arg1;
- (void)setValue:(id)arg1;
- (int)size;
- (id)value;

@end
