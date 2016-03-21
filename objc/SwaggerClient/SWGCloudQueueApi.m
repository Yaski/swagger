#import "SWGCloudQueueApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGQueueMessage.h"
#import "SWGQueueBody.h"
#import "SWGQueue.h"
#import "SWGKeyBody.h"
#import "SWGQueuePayloadWithCount.h"
#import "SWGRefreshMessageTimeoutBody.h"
#import "SWGModifiedQueueBody.h"
#import "SWGModifiedQueue.h"


@interface SWGCloudQueueApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGCloudQueueApi

static SWGCloudQueueApi* singletonAPI = nil;

#pragma mark - Initialize methods

- (id) init {
    self = [super init];
    if (self) {
        SWGConfiguration *config = [SWGConfiguration sharedConfig];
        if (config.apiClient == nil) {
            config.apiClient = [[SWGApiClient alloc] init];
        }
        self.apiClient = config.apiClient;
        self.defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

- (id) initWithApiClient:(SWGApiClient *)apiClient {
    self = [super init];
    if (self) {
        self.apiClient = apiClient;
        self.defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

+(SWGCloudQueueApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudQueueApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(SWGCloudQueueApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudQueueApi alloc] init];
    }
    return singletonAPI;
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(void) setHeaderValue:(NSString*) value
           forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(unsigned long) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}

#pragma mark - Api Methods

///
/// push message to queue
/// add message message to queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) addMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `addMessage`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `addMessage`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `addMessage`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/message"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"PUT"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// add a subscriber to this queue
/// add a subscriber to this queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body payload 
///
///  @returns SWGQueue*
///
-(NSNumber*) addSubscriberWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `addSubscriber`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `addSubscriber`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `addSubscriber`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/subscriber"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGQueue*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGQueue*)data, error);
                           }
          ];
}

///
/// clear queue
/// clear queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns SWGQueue*
///
-(NSNumber*) clearWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `clear`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `clear`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `clear`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/clear"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGQueue*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGQueue*)data, error);
                           }
          ];
}

///
/// create a new queue
/// add message message to queue
///  @param appId Id of CloudApp 
///
///  @param queueName name of queue 
///
///  @param body client key of app 
///
///  @returns SWGQueue*
///
-(NSNumber*) createQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `createQueue`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `createQueue`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `createQueue`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/create"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGQueue*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGQueue*)data, error);
                           }
          ];
}

///
/// delete a message in this queue
/// delete a message in this queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param messageId message id 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) deleteMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    messageId: (NSString*) messageId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `deleteMessage`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `deleteMessage`"];
    }
    
    // verify the required parameter 'messageId' is set
    if (messageId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `messageId` when calling `deleteMessage`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `deleteMessage`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/message/{message_id}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    if (messageId != nil) {
        pathParams[@"message_id"] = messageId;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// delete a queue
/// delete queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns SWGQueue*
///
-(NSNumber*) deleteQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `deleteQueue`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `deleteQueue`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `deleteQueue`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGQueue*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGQueue*)data, error);
                           }
          ];
}

///
/// delete a subscriber to this queue
/// delete a subscriber to this queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body payload 
///
///  @returns SWGQueue*
///
-(NSNumber*) deleteSubscriberWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `deleteSubscriber`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `deleteSubscriber`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `deleteSubscriber`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/subscriber"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGQueue*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGQueue*)data, error);
                           }
          ];
}

///
/// push message to queue
/// add message message to queue
///  @param appId Id of CloudApp 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) getAllMessagesWithAppId: (NSString*) appId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getAllMessages`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getAllMessages`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/messages"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// get all queues
/// get all queues
///  @param appId Id of CloudApp 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueue>*
///
-(NSNumber*) getAllQueuesWithAppId: (NSString*) appId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGQueue>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getAllQueues`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getAllQueues`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json", @"text/plain;charset=utf-8"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueue>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueue>*)data, error);
                           }
          ];
}

///
/// get messages in queue
/// get messages in queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) getMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getMessage`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `getMessage`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getMessage`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/getMessage"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// get a message in this queue by its id
/// get a message in this queue by its id
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param messageId message id 
///
///  @param body client key of app 
///
///  @returns SWGQueueMessage*
///
-(NSNumber*) getMessageByIdWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    messageId: (NSString*) messageId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(SWGQueueMessage* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getMessageById`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `getMessageById`"];
    }
    
    // verify the required parameter 'messageId' is set
    if (messageId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `messageId` when calling `getMessageById`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getMessageById`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/message/{message_id}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    if (messageId != nil) {
        pathParams[@"message_id"] = messageId;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGQueueMessage*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGQueueMessage*)data, error);
                           }
          ];
}

///
/// get queue
/// get queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns SWGQueue*
///
-(NSNumber*) getQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(SWGQueue* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getQueue`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `getQueue`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getQueue`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGQueue*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGQueue*)data, error);
                           }
          ];
}

///
/// peek messages in queue without removing them
/// peek messages in queue without removing them
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) peekWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `peek`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `peek`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `peek`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/peek"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// peek messages in queue without removing them
/// peek messages in queue without removing them
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) peekMessageWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `peekMessage`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `peekMessage`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `peekMessage`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/peekMessage"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// pull messages from queue
/// pull messages from queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) pullWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGQueuePayloadWithCount*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `pull`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `pull`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `pull`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/pull"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// refresh timeout of a message in this queue
/// refresh timeout of a message in this queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param messageId message id 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) refreshMessageTimeoutWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    messageId: (NSString*) messageId
    body: (SWGRefreshMessageTimeoutBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `refreshMessageTimeout`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `refreshMessageTimeout`"];
    }
    
    // verify the required parameter 'messageId' is set
    if (messageId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `messageId` when calling `refreshMessageTimeout`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `refreshMessageTimeout`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    if (messageId != nil) {
        pathParams[@"message_id"] = messageId;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"PUT"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// push message to queue
/// add message message to queue
///  @param myAppId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns NSArray<SWGQueueMessage>*
///
-(NSNumber*) updateMessageWithMyAppId: (NSString*) myAppId
    queueName: (NSString*) queueName
    body: (SWGQueueBody*) body
    completionHandler: (void (^)(NSArray<SWGQueueMessage>* output, NSError* error)) handler {

    
    // verify the required parameter 'myAppId' is set
    if (myAppId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `myAppId` when calling `updateMessage`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `updateMessage`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `updateMessage`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{my_app_id}/{queue_name}/message"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (myAppId != nil) {
        pathParams[@"my_app_id"] = myAppId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"PUT"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<SWGQueueMessage>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGQueueMessage>*)data, error);
                           }
          ];
}

///
/// update queue
/// update queue
///  @param appId Id of CloudApp 
///
///  @param queueName Name of queue 
///
///  @param body client key of app 
///
///  @returns SWGModifiedQueue*
///
-(NSNumber*) updateQueueWithAppId: (NSString*) appId
    queueName: (NSString*) queueName
    body: (SWGModifiedQueueBody*) body
    completionHandler: (void (^)(SWGModifiedQueue* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `updateQueue`"];
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `queueName` when calling `updateQueue`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `updateQueue`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"queue/{app_id}/{queue_name}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (queueName != nil) {
        pathParams[@"queue_name"] = queueName;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = body;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"PUT"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGModifiedQueue*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGModifiedQueue*)data, error);
                           }
          ];
}



@end
