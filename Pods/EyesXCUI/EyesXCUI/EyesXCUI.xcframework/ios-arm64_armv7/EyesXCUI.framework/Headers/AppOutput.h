// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

/*
 An application output (title, image, etc).
 */

@interface AppOutput : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSData *screenshotData;
@property (strong, nonatomic) NSString *screenshotUrl;

/*!
 @param title The title of the window.
 @param screenshotData Screenshot converted to binary data using UIImagePNGRepresentation() method.
 */
- (instancetype)initWithTitle:(NSString *)title screenshotData:(NSData *)screenshotData;

@end
