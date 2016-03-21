#import "SWGCloudTable.h"

@implementation SWGCloudTable

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    self.name = @"table_name";
    self.appId = @"app_id";
    self.type = @"custom";
    
  }

  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name", @"appId": @"appId", @"type": @"type", @"columns": @"columns" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"name", @"appId", @"type", @"columns"];

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
