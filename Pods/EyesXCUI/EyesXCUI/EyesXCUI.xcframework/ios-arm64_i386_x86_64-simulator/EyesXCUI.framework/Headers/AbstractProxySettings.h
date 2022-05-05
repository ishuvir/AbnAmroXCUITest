// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Encapsulates settings for sending Eyes communication via proxy.
 */
@interface AbstractProxySettings : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *uri;
@property (readonly, copy, nonatomic, nullable) NSString *username;
@property (readonly, copy, nonatomic, nullable) NSString *password;
@property (readonly, assign, nonatomic) NSInteger port;
/**
 Creates an instance of AbstractProxySettings class, that incapsulates proxy settings.
 @param uri Host name associated with the proxy. Should not contain any URL scheme. E.g. "127.0.0.1".
 @param port Port number associated with the proxy.
 @param username Username to be used with the proxy.
 @param password Password to be used with the proxy.
 */
- (instancetype)initWithUri:(NSString *)uri port:(NSInteger)port username:(NSString *_Nullable)username password:(NSString *_Nullable)password;
/**
 Creates an instance of AbstractProxySettings class, that incapsulates proxy settings.
 @param uri Host name associated with the proxy. Should not contain any URL scheme. E.g. "127.0.0.1".
 @param username Username to be used with the proxy.
 @param password Password to be used with the proxy.
 */
- (instancetype)initWithUri:(NSString *)uri username:(NSString *_Nullable)username password:(NSString *_Nullable)password;
/**
 Creates an instance of AbstractProxySettings class, that incapsulates proxy settings.
 @param uri Host name associated with the proxy. Should not contain any URL scheme. E.g. "127.0.0.1".
 @param port Port number associated with the proxy.
 */
- (instancetype)initWithUri:(NSString *)uri port:(NSInteger)port;

@end

NS_ASSUME_NONNULL_END
