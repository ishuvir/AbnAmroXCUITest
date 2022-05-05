// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class Image, DefaultMatchSettings;

@interface ActualAppOutput : NSObject

@property (readonly, strong, nonatomic) Image *image;
@property (readonly, strong, nonatomic) Image *thumbprint;
@property (readonly, strong, nonatomic) DefaultMatchSettings *imageMatchSettings;
@property (readonly, assign, nonatomic) BOOL ignoreExpectedOutputSettings;
@property (readonly, assign, nonatomic) BOOL isMatching;
@property (readonly, assign, nonatomic) BOOL areImagesMatching;
@property (readonly, copy, nonatomic) NSString *occurredAt;
@property (readonly, copy, nonatomic) NSString *windowTitle;
@property (readonly, copy, nonatomic) NSString *tag;
@property (readonly, assign, nonatomic) BOOL isPrimary;

@end
