// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "Region.h"
#import <Foundation/Foundation.h>
#import "EyesImage.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Base class for handling screenshots.
 */
@interface EyesScreenshot : NSObject
{
    EyesImage *_image;
}

/**
 @return The screenshot image.
*/
@property (readonly, nonatomic) EyesImage *image;

/**
Creates new EyesScreenshot.
@param image Image to base on. An instance of UIImage or NSImage depending on OS.
*/
- (instancetype)initWithImage:(EyesImage *)image;

@end

NS_ASSUME_NONNULL_END
