#import "SWGColumn.h"

@implementation SWGColumn

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    self.name = @"table_name";
    self.dataType = @"Text";
    self.type = @"column";
    self.required = @0;
    self.unique = @0;
    self.relatedTo = @"null";
    self.relationType = @"null";
    self.isDeletable = @1;
    self.isEditable = @1;
    self.isRenamable = @0;
    
  }

  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name", @"dataType": @"dataType", @"_type": @"type", @"required": @"required", @"unique": @"unique", @"relatedTo": @"relatedTo", @"relationType": @"relationType", @"isDeletable": @"isDeletable", @"isEditable": @"isEditable", @"isRenamable": @"isRenamable" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"name", @"dataType", @"type", @"required", @"unique", @"relatedTo", @"relationType", @"isDeletable", @"isEditable", @"isRenamable"];

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
