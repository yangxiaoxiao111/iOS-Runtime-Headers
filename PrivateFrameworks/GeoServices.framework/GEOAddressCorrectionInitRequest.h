/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int supportsMultipleAddresses : 1; 
    } _has;
    NSString *_personID;
    BOOL _supportsMultipleAddresses;
    NSString *_token;
}

@property (nonatomic, readonly) BOOL hasPersonID;
@property (nonatomic) BOOL hasSupportsMultipleAddresses;
@property (nonatomic, readonly) BOOL hasToken;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic) BOOL supportsMultipleAddresses;
@property (nonatomic, retain) NSString *token;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPersonID;
- (BOOL)hasSupportsMultipleAddresses;
- (BOOL)hasToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personID;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasSupportsMultipleAddresses:(BOOL)arg1;
- (void)setPersonID:(id)arg1;
- (void)setSupportsMultipleAddresses:(BOOL)arg1;
- (void)setToken:(id)arg1;
- (BOOL)supportsMultipleAddresses;
- (id)token;
- (void)writeTo:(id)arg1;

@end