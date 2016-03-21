#import "SWGCloudFile.h"

@implementation SWGCloudFile

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    self.type = @"file";
    self.contentType = @"application/octet-stream";
    
  }

  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"_type": @"type", @"ACL": @"aCL", @"name": @"name", @"size": @"size", @"url": @"url", @"expires": @"expires", @"contentType": @"contentType" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"type", @"aCL", @"name", @"size", @"url", @"expires", @"contentType"];

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
