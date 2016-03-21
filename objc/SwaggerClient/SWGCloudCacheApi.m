#import "SWGCloudCacheApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGCacheRequest.h"
#import "SWGKeyBody.h"
#import "SWGCache.h"
#import "SWGCacheItem.h"


@interface SWGCloudCacheApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGCloudCacheApi

static SWGCloudCacheApi* singletonAPI = nil;

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

+(SWGCloudCacheApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudCacheApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(SWGCloudCacheApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudCacheApi alloc] init];
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
/// clear all items from a cloud cache
/// clear all items from a cloud cache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param body master key of app 
///
///  @returns NSArray<SWGCacheRequest>*
///
-(NSNumber*) clearCacheWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGCacheRequest>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `clearCache`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `clearCache`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `clearCache`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}/clear"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
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
                              responseType: @"NSArray<SWGCacheRequest>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGCacheRequest>*)data, error);
                           }
          ];
}

///
/// create a cloud cache
/// create a cloud cache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param body master key of app 
///
///  @returns SWGCache*
///
-(NSNumber*) createCacheWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(SWGCache* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `createCache`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `createCache`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `createCache`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}/create"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
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
                              responseType: @"SWGCache*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGCache*)data, error);
                           }
          ];
}

///
/// delete all CloudCaches
/// delete all CloudCaches
///  @param appId Id of CloudApp 
///
///  @param body master key of app 
///
///  @returns NSArray<SWGCacheRequest>*
///
-(NSNumber*) deleteAllCacheWithAppId: (NSString*) appId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGCacheRequest>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `deleteAllCache`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `deleteAllCache`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}"];

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
                              responseType: @"NSArray<SWGCacheRequest>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGCacheRequest>*)data, error);
                           }
          ];
}

///
/// delete a CloudCache
/// delete a CloudCache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param body master key of app 
///
///  @returns SWGCacheRequest*
///
-(NSNumber*) deleteCacheWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(SWGCacheRequest* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `deleteCache`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `deleteCache`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `deleteCache`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
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
                              responseType: @"SWGCacheRequest*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGCacheRequest*)data, error);
                           }
          ];
}

///
/// delete item from a cloud cache
/// delete item from a cloud cache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param dataKey key under which data to delete is cached 
///
///  @param body master key of app 
///
///  @returns NSString*
///
-(NSNumber*) deleteItemWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    dataKey: (NSString*) dataKey
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSString* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `deleteItem`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `deleteItem`"];
    }
    
    // verify the required parameter 'dataKey' is set
    if (dataKey == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `dataKey` when calling `deleteItem`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `deleteItem`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}/item/{data_key}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
    }
    if (dataKey != nil) {
        pathParams[@"data_key"] = dataKey;
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
                              responseType: @"NSString*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSString*)data, error);
                           }
          ];
}

///
/// get all CloudCaches
/// get all CloudCaches
///  @param appId Id of CloudApp 
///
///  @param body master key of app 
///
///  @returns NSArray<SWGCache>*
///
-(NSNumber*) getAllCacheWithAppId: (NSString*) appId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGCache>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getAllCache`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getAllCache`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}"];

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
                              responseType: @"NSArray<SWGCache>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGCache>*)data, error);
                           }
          ];
}

///
/// get all items from a cloud cache
/// get all items from a cloud cache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param body master key of app 
///
///  @returns NSArray<SWGCacheItem>*
///
-(NSNumber*) getAllItemsWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSArray<SWGCacheItem>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getAllItems`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `getAllItems`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getAllItems`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}/items"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
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
                              responseType: @"NSArray<SWGCacheItem>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGCacheItem>*)data, error);
                           }
          ];
}

///
/// get info about a CloudCache
/// get info about a CloudCache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param body master key of app 
///
///  @returns SWGCache*
///
-(NSNumber*) getCacheInfoWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(SWGCache* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getCacheInfo`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `getCacheInfo`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getCacheInfo`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
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
                              responseType: @"SWGCache*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGCache*)data, error);
                           }
          ];
}

///
/// get item from a cloud cache
/// get item from a cloud cache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param dataKey key under which data should be got in cache 
///
///  @param body master key of app 
///
///  @returns NSString*
///
-(NSNumber*) getItemWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    dataKey: (NSString*) dataKey
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSString* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getItem`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `getItem`"];
    }
    
    // verify the required parameter 'dataKey' is set
    if (dataKey == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `dataKey` when calling `getItem`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getItem`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}/{data_key}/item"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
    }
    if (dataKey != nil) {
        pathParams[@"data_key"] = dataKey;
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
                              responseType: @"NSString*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSString*)data, error);
                           }
          ];
}

///
/// count items in a cloud cache
/// count items in a cloud cache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param body master key of app 
///
///  @returns NSNumber*
///
-(NSNumber*) getItemsCountWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSNumber* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `getItemsCount`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `getItemsCount`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `getItemsCount`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}/items/count"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
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
                              responseType: @"NSNumber*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSNumber*)data, error);
                           }
          ];
}

///
/// add item to a cloud cache
/// add item to a cloud cache
///  @param appId Id of CloudApp 
///
///  @param cacheName Name of cache 
///
///  @param dataKey key under which data should be store in cache 
///
///  @param body cache data and master key included got from this object 
///
///  @returns NSString*
///
-(NSNumber*) setWithAppId: (NSString*) appId
    cacheName: (NSString*) cacheName
    dataKey: (NSString*) dataKey
    body: (SWGCacheRequest*) body
    completionHandler: (void (^)(NSString* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `set`"];
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cacheName` when calling `set`"];
    }
    
    // verify the required parameter 'dataKey' is set
    if (dataKey == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `dataKey` when calling `set`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `set`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"cache/{app_id}/{cache_name}/{data_key}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (cacheName != nil) {
        pathParams[@"cache_name"] = cacheName;
    }
    if (dataKey != nil) {
        pathParams[@"data_key"] = dataKey;
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
                              responseType: @"NSString*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSString*)data, error);
                           }
          ];
}



@end
