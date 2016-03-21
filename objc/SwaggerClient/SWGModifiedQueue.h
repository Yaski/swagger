#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SWGACL.h"
#import "SWGQueueMessage.h"


@protocol SWGModifiedQueue
@end

@interface SWGModifiedQueue : SWGObject


@property(nonatomic) SWGACL* aCL;

@property(nonatomic) NSString* type;

@property(nonatomic) NSDate* expires;

@property(nonatomic) NSString* queueType;

@property(nonatomic) NSString* retry;

@property(nonatomic) NSString* name;

@property(nonatomic) NSArray* /* NSString */ subscribers;

@property(nonatomic) NSNumber* isModified;

@property(nonatomic) NSArray* /* NSString */ modifiedColumns;

@property(nonatomic) NSArray<SWGQueueMessage>* messages;

@end
