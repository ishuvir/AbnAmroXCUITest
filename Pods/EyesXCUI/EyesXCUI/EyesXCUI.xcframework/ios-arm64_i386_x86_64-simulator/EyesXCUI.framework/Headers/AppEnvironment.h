// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface AppEnvironment : NSObject

@property (strong, nonatomic) NSString *inferred;
@property (strong, nonatomic) NSString *hostOS;
@property (strong, nonatomic) NSString *hostApp;
@property (strong, nonatomic) NSString *osInfo;
@property (strong, nonatomic) NSString *hostingAppInfo;
@property (strong, nonatomic) NSString *deviceInfo;
@property (assign, nonatomic) CGSize viewportSize;
@property (strong, nonatomic) NSString *ufgJobType;

/*!
 @abstract Creates a new AppEnvironment instance.
 */
- (instancetype)initWithInferred:(NSString *)inferred;

/*!
 @abstract Creates a new AppEnvironment instance.
 @param osInfo the OS hosting the application under test
 @param hostingAppInfo the application hosting the application under test
 @param deviceInfo the device where the tested application is running
 @param viewportSize the size of the application witout size of status bar
 */
- (instancetype)initWithHostOS:(NSString *)hostOS
                       hostApp:(NSString *)hostApp
                        OSInfo:(NSString *)osInfo
                hostingAppInfo:(NSString *)hostingAppInfo
                    deviceInfo:(NSString *)deviceInfo
                  viewportSize:(CGSize)viewportSize;

@end

