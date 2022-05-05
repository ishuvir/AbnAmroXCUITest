// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class Annotations, Image;

@interface ExpectedAppOutput : NSObject

@property (readonly, copy, nonatomic) NSString *tag;
@property (readonly, copy, nonatomic) Image *image;
@property (readonly, copy, nonatomic) Image *thumbprint;
@property (readonly, copy, nonatomic) NSString *occurredAt;
@property (readonly, strong, nonatomic) Annotations *annotations;

@end

