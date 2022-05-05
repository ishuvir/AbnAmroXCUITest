//
//  DebugScreenshotsProvider.h
//  Applitools
//
//  Created by Anton Chuev on 2/25/19.
//  Copyright © 2019 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EyesImage.h"

NS_ASSUME_NONNULL_BEGIN

@interface DebugScreenshotsProvider : NSObject

@property (strong, nonatomic) NSString *prefix;
@property (strong, nonatomic) NSString *path;

/**
Saves image with specific suffix.
@param image Image for saving. An instance of UIImage or NSImage depending on OS.
*/
- (void)save:(EyesImage *)image suffix:(NSString *)suffix;

@end

NS_ASSUME_NONNULL_END
