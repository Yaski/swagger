#import <Foundation/Foundation.h>
#import "SWGCloudObject.h"
#import "SWGCloudObjectSaveRequest.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGCloudObjectApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGCloudObjectApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGCloudObjectApi*) sharedAPI;
///
///
/// deletes a cloud object from cloudapp
/// deletes a cloud object from cloudapp
///
/// @param appId CloudApp id
/// @param tableName cloud table name
/// @param body CloudObject that needs to be added to the cloudboost
/// 
///
/// @return SWGCloudObject*
-(NSNumber*) deleteWithAppId: (NSString*) appId
    tableName: (NSString*) tableName
    body: (SWGCloudObjectSaveRequest*) body
    completionHandler: (void (^)(SWGCloudObject* output, NSError* error)) handler;


///
///
/// saves a cloud object to cloudboost
/// 
///
/// @param appId CloudApp id
/// @param tableName cloud table name
/// @param body CloudObject that needs to be added to cloudboost
/// 
///
/// @return SWGCloudObject*
-(NSNumber*) saveWithAppId: (NSString*) appId
    tableName: (NSString*) tableName
    body: (SWGCloudObjectSaveRequest*) body
    completionHandler: (void (^)(SWGCloudObject* output, NSError* error)) handler;



@end
