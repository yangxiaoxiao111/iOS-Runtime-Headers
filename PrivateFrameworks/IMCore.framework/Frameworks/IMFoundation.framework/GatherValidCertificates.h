/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSArray;

@interface GatherValidCertificates : IMThreadedWorkUnit  {
    NSString *_screenName;
    unsigned int _usage;
    BOOL _forMe;
    NSArray *_certs;
}

@property(readonly) NSArray * certificates;
@property(readonly) NSString * screenName;

+ (id)gatherCertsForScreenName:(id)arg1 usage:(unsigned int)arg2 forMyUse:(BOOL)arg3;

- (void)dealloc;
- (id)initWithScreenName:(id)arg1 usage:(unsigned int)arg2 forMyUse:(BOOL)arg3;
- (void)_workerThreadFinished;
- (void)_workerThread;
- (id)certificates;
- (id)screenName;

@end