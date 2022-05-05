// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class RectangleSize;

@interface Image : NSObject

@property (readonly, copy, nonatomic) NSString *imageId;
@property (readonly, strong, nonatomic) RectangleSize *size;
@property (readonly, assign, nonatomic) BOOL hasDom;
@property (readonly, assign, nonatomic) BOOL domId;

@end

