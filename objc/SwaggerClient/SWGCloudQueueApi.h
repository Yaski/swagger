#import <Foundation/Foundation.h>
#import "SWGQueueMessage.h"
#import "SWGQueueBody.h"
#import "SWGQueue.h"
#import "SWGKeyBody.h"
#import "SWGQueuePayloadWithCount.h"
#import "SWGRefreshMessageTimeoutBody.h"
#import "SWGModifiedQueueBody.h"
#import "SWGModifiedQueue.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGCloudQueueApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGCloudQueueApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGCloudQueueApi*) sharedAPI;
///
///
/// push message to queue
/// add message message to queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) addMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// add a subscriber to this queue
/// add a subscriber to this queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body payload
/// 
///
/// @return SWGQueue*
-(NSNumber*) addSubscriberWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler;


///
///
/// clear queue
/// clear queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return SWGQueue*
-(NSNumber*) clearWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler;


///
///
/// create a new queue
/// add message message to queue
///
/// @param appId Id of CloudApp
/// @param queueName name of queue
/// @param body client key of app
/// 
///
/// @return SWGQueue*
-(NSNumber*) createQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler;


///
///
/// delete a message in this queue
/// delete a message in this queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param messageId message id
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) deleteMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    messageId: (NSString*) messageId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// delete a queue
/// delete queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return SWGQueue*
-(NSNumber*) deleteQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler;


///
///
/// delete a subscriber to this queue
/// delete a subscriber to this queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body payload
/// 
///
/// @return SWGQueue*
-(NSNumber*) deleteSubscriberWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler;


///
///
/// push message to queue
/// add message message to queue
///
/// @param appId Id of CloudApp
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) getAllMessagesWithAppId: (NSString*) appId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// get all queues
/// get all queues
///
/// @param appId Id of CloudApp
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueue>*
-(NSNumber*) getAllQueuesWithAppId: (NSString*) appId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGQueue>* output, NSError* error)) handler;


///
///
/// get messages in queue
/// get messages in queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) getMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// get a message in this queue by its id
/// get a message in this queue by its id
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param messageId message id
/// @param body client key of app
/// 
///
/// @return SWGQueueMessage*
-(NSNumber*) getMessageByIdWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    messageId: (NSString*) messageId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(SWGQueueMessage* output, NSError* error)) handler;


///
///
/// get queue
/// get queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return SWGQueue*
-(NSNumber*) getQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler;


///
///
/// peek messages in queue without removing them
/// peek messages in queue without removing them
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) peekWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// peek messages in queue without removing them
/// peek messages in queue without removing them
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) peekMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// pull messages from queue
/// pull messages from queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) pullWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// refresh timeout of a message in this queue
/// refresh timeout of a message in this queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param messageId message id
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) refreshMessageTimeoutWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    messageId: (NSString*) messageId
    body: (SWGRefreshMessageTimeoutBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// push message to queue
/// add message message to queue
///
/// @param myAppId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return NSArray<SWGQueueMessage>*
-(NSNumber*) updateMessageWithMyAppId: (NSString*) myAppId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler;


///
///
/// update queue
/// update queue
///
/// @param appId Id of CloudApp
/// @param queueName Name of queue
/// @param body client key of app
/// 
///
/// @return SWGModifiedQueue*
-(NSNumber*) updateQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGModifiedQueueBody*) body
    completionHandler: (void (^)(SWGModifiedQueue* output, NSError* error)) handler;



@end
