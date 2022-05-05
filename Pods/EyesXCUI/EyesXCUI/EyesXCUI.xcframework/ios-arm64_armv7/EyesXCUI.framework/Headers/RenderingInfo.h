// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RenderingInfo : NSObject

@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSString *resultsUrl;
@property (readonly, nonatomic) NSString *serviceUrl;
@property (readonly, nonatomic) NSString *stitchingServiceUrl;
@property (assign, readonly, nonatomic) NSInteger maxImageHeight;
@property (assign, readonly, nonatomic) NSInteger maxImageArea;

@end

NS_ASSUME_NONNULL_END
