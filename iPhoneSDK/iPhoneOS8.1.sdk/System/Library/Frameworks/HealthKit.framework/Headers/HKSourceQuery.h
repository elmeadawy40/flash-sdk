//
//  HKSourceQuery.h
//  HealthKit
//
//  Copyright (c) 2014 Apple Inc. All rights reserved.
//

#import <HealthKit/HKQuery.h>

/*!
 @class         HKSourceQuery
 @abstract      A query that returns a set of sources that have saved objects matching certain criteria.
 */
HK_CLASS_AVAILABLE_IOS(8_0)
@interface HKSourceQuery : HKQuery

/*!
 @method        initWithSampleType:samplePredicate:completionHandler:
 @abstract      Returns a query that will retrieve HKSources that have saved samples of the given type matching the 
                given predicate.
 
 @param         sampleType          The type of sample.
 @param         samplePredicate     The predicate which samples must match.
 @param         completionHandler   The block to be called when the query has finished executing.
 */
- (instancetype)initWithSampleType:(HKSampleType *)sampleType
                   samplePredicate:(NSPredicate *)objectPredicate
                 completionHandler:(void(^)(HKSourceQuery *query, NSSet *sources, NSError *error))completionHandler;

@end
