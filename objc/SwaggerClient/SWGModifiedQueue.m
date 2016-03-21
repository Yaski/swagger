#import "SWGModifiedQueue.h"

@implementation SWGModifiedQueue

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    self.type = @"queue";
    self.queueType = @"pull";
    self.isModified = @1;
    
  }

  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"ACL": @"aCL", @"_type": @"type", @"expires": @"expires", @"queueType": @"queueType", @"retry": @"retry", @"name": @"name", @"subscribers": @"subscribers", @"_isModified": @"isModified", @"_modifiedColumns": @"modifiedColumns", @"messages": @"messages" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"aCL", @"type", @"expires", @"queueType", @"retry", @"name", @"subscribers", @"isModified", @"modifiedColumns", @"messages"];

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
