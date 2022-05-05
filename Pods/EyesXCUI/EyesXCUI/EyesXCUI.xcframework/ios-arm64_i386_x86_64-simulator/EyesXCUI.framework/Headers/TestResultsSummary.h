// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class TestResultContainer;

NS_ASSUME_NONNULL_BEGIN

@interface TestResultsSummary : NSObject

- (instancetype)initWithAllResults:(NSArray<TestResultContainer *> *)allResults;
- (NSArray<TestResultContainer *> *)getAllResults;
- (NSUInteger)size;

@end

NS_ASSUME_NONNULL_END
