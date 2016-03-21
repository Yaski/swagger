#import "SWGCloudSearch.h"

@implementation SWGCloudSearch

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    self.collectionName = @"table_name_here";
    
  }

  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"query": @"query", @"sort": @"sort", @"collectionName": @"collectionName", @"key": @"key", @"skip": @"skip", @"limit": @"limit" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"query", @"sort", @"collectionName", @"key", @"skip", @"limit"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

/**
 * Gets the string presentation of the object.
 * This method will be called when logging model object using `NSLog`.
 */
- (NSString *)description {
    return [[self toDictionary] description];
}

@end
