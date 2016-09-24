/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
 */

@interface BRAsset : NSObject {
    BOOL  _isNull;
    NSDictionary * _parameters;
    int  _type;
}

@property (nonatomic, readonly) BOOL isNull;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) int type;

+ (id)nullAsset;
+ (id)withType:(int)arg1 andParameters:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithType:(int)arg1 andParameters:(id)arg2 null:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNull;
- (id)parameters;
- (id)propertyList;
- (int)type;

@end