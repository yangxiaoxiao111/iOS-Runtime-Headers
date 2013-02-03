/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSURLRequestProperties;

@interface SSURLConnectionRequest : SSRequest {
    SSURLRequestProperties *_requestProperties;
}

@property(readonly) NSURLRequest *URLRequest;
@property <SSURLConnectionRequestDelegate> *delegate;
@property(readonly) SSURLRequestProperties *requestProperties;

- (id)URLRequest;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (id)requestProperties;

@end