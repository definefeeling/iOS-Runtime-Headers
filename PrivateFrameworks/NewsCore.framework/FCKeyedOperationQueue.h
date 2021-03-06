/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCKeyedOperationQueue : NSObject {
    NSMutableDictionary * _cancelHandlersByKey;
    <FCKeyedOperationQueueDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSMutableSet * _keysForExecutingOperations;
    int  _maxConcurrentOperationCount;
    NSMutableOrderedSet * _mutableKeyQueue;
    NSObject<OS_dispatch_group> * _operationExecutionGroup;
    BOOL  _suspended;
}

@property (nonatomic, retain) NSMutableDictionary *cancelHandlersByKey;
@property (nonatomic) <FCKeyedOperationQueueDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, copy) NSOrderedSet *keyQueue;
@property (nonatomic, retain) NSMutableSet *keysForExecutingOperations;
@property (nonatomic) int maxConcurrentOperationCount;
@property (nonatomic, retain) NSMutableOrderedSet *mutableKeyQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *operationExecutionGroup;
@property (getter=isSuspended, nonatomic) BOOL suspended;

- (void).cxx_destruct;
- (void)_cancelOperationsIfNeeded;
- (void)_enqueueOperationIfNeeded;
- (id)cancelHandlersByKey;
- (id)delegate;
- (id)executionQueue;
- (id)init;
- (id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(int)arg2;
- (BOOL)isSuspended;
- (id)keyQueue;
- (id)keysForExecutingOperations;
- (int)maxConcurrentOperationCount;
- (id)mutableKeyQueue;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(id /* block */)arg1;
- (id)operationExecutionGroup;
- (void)setCancelHandlersByKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)setKeyQueue:(id)arg1;
- (void)setKeysForExecutingOperations:(id)arg1;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (void)setMutableKeyQueue:(id)arg1;
- (void)setOperationExecutionGroup:(id)arg1;
- (void)setSuspended:(BOOL)arg1;

@end
