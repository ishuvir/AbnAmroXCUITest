// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class ImageMatchSettings;

@interface Options : NSObject

@property (assign, readonly, nonatomic) BOOL ignoreMismatch;
@property (assign, readonly, nonatomic) BOOL ignoreMatch;
@property (assign, readonly, nonatomic) BOOL forceMismatch;
@property (assign, readonly, nonatomic) BOOL forceMatch;
@property (assign, readonly, nonatomic) BOOL replaceLast;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ImageMatchSettings *imageMatchSettings;
@property (readonly, nonatomic) NSString *source;

- (instancetype)initWithName:(NSString *)name
              ignoreMismatch:(BOOL)ignoreMismatch
                 ignoreMatch:(BOOL)ignoreMatch
               forceMismatch:(BOOL)forceMismatch
                  forceMatch:(BOOL)forceMatch
                 replaceLast:(BOOL)replaceLast
          imageMatchSettings:(ImageMatchSettings *)imageMatchSettings
                      source:(NSString *)source;

@end
