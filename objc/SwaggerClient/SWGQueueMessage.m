#import "SWGQueueMessage.h"

@implementation SWGQueueMessage

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    self.type = @"queue-message";
    self.timeout = @1800;
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
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"ACL": @"aCL", @"_type": @"type", @"expires": @"expires", @"_id": @"_id", @"delay": @"delay", @"timeout": @"timeout", @"_modifiedColumns": @"modifiedColumns", @"_isModified": @"isModified", @"message": @"message" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"aCL", @"type", @"expires", @"_id", @"delay", @"timeout", @"modifiedColumns", @"isModified", @"message"];

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
