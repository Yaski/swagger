#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SWGCloudQuery.h"
#import "SWGQuery.h"


@protocol SWGCloudQueryDistinct
@end

@interface SWGCloudQueryDistinct : SWGCloudQuery


@property(nonatomic) NSString* key;

@property(nonatomic) NSNumber* skip;

@property(nonatomic) NSNumber* limit;

@property(nonatomic) SWGQuery* query;

@property(nonatomic) NSObject* sort;

@property(nonatomic) NSObject* select;

@property(nonatomic) NSArray* /* NSString */ onKey;

@end
