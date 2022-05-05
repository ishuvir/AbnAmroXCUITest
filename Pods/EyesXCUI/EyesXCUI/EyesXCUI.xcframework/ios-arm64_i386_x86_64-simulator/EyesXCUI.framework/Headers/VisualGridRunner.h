// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "EyesRunner.h"
#import <Foundation/Foundation.h>

@class OpenData, CheckData, CloseAbortData, RunnerOptions;

NS_ASSUME_NONNULL_BEGIN

@interface VisualGridRunner : EyesRunner

- (instancetype)initWithOptions:(RunnerOptions *)options;
- (void)openWithData:(OpenData *)openData;
- (void)checkWithData:(CheckData *)checkData;
- (void)closeWithData:(CloseAbortData *)closeData;
- (void)abortWithData:(CloseAbortData *)abortData;

@end

NS_ASSUME_NONNULL_END
