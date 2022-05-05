// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#if __has_include(<UIKit/UIImage.h>)
#import <UIKit/UIImage.h>
#define EyesImage UIImage
#elif __has_include(<AppKit/NSImage.h>)
#import <AppKit/NSImage.h>
#define EyesImage NSImage
#endif

