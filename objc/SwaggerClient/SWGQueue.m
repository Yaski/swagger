#import "SWGQueue.h"

@implementation SWGQueue

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    self.tableName = @"_Queue";
    self.type = @"queue";
    self.queueType = @"pull";
    
  }

  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"_tableName": @"tableName", @"createdAt": @"createdAt", @"updatedAt": @"updatedAt", @"ACL": @"aCL", @"_type": @"type", @"expires": @"expires", @"queueType": @"queueType", @"retry": @"retry", @"name": @"name", @"subscribers": @"subscribers", @"messages": @"messages" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"tableName", @"createdAt", @"updatedAt", @"aCL", @"type", @"expires", @"queueType", @"retry", @"name", @"subscribers", @"messages"];

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
