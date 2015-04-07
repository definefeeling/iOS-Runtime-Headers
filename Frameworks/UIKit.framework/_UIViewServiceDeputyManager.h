/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, _UIAsyncInvocation;

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {
    BOOL __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    id _delegate;
    NSMutableSet *_deputies;
    _UIAsyncInvocation *_invalidationInvocation;
    NSObject<OS_dispatch_queue> *_queue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

}

@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;

- (int)__automatic_invalidation_logic;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(id)arg2;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(/* Warning: Unrecognized filer type: 'R' using 'void*' */ void*)arg2 replyHandler:(id)arg3;
     /* Encoded args for previous method: v20@0:4#8R@12@?16 */

- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)checkDeputyForRotation:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setDelegate:(id)arg1;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;

@end