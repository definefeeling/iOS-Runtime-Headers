/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVURLImageLoadRequest : ISURLOperation {
    id /* block */  _completionHandler;
    <TVImageDecrypter> * _decrypter;
    NSURL * _url;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) <TVImageDecrypter> *decrypter;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)decrypter;
- (id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDecrypter:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
