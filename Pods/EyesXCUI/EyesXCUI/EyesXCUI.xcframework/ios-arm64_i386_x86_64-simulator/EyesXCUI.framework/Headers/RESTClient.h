// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk


#import <Foundation/Foundation.h>

@class AbstractProxySettings;

NS_ASSUME_NONNULL_BEGIN

@interface RESTClient : NSObject

- (instancetype)initWithProxy:(AbstractProxySettings * _Nullable)proxy;

@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSString *agentId;

- (void)dataTaskWithRequest:(NSMutableURLRequest *)request completionHandler:(void (^)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)uploadTaskWithRequest:(NSMutableURLRequest *)request data:(NSData *)data completionHandler:(void (^)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))completionHandler;

@end

NS_ASSUME_NONNULL_END
