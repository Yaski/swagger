#import "SWGCloudQueryApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGCloudQueryCount.h"
#import "SWGCloudObject.h"
#import "SWGCloudQueryDistinct.h"
#import "SWGCloudQuery.h"
#import "SWGCloudQueryFindById.h"
#import "SWGCloudQueryFindOne.h"


@interface SWGCloudQueryApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGCloudQueryApi

static SWGCloudQueryApi* singletonAPI = nil;

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

+(SWGCloudQueryApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudQueryApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(SWGCloudQueryApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudQueryApi alloc] init];
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
/// count items in a table that match this query criteria
/// count items in a table that match this query criteria
///  @param appId CloudApp id 
///
///  @param tableName cloud table name 
///
///  @param body query body 
///
///  @returns NSNumber*
///
-(NSNumber*) countWithAppId: (NSString*) appId
    tableName: (NSString*) tableName
    body: (SWGCloudQueryCount*) body
    completionHandler: (void (^)(NSNumber* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `count`"];
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `tableName` when calling `count`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `count`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"data/{app_id}/{table_name}/count"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (tableName != nil) {
        pathParams[@"table_name"] = tableName;
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
/// distinct query criteria
/// 
///  @param appId CloudApp id 
///
///  @param tableName cloud table name 
///
///  @param body query body 
///
///  @returns NSArray<SWGCloudObject>*
///
-(NSNumber*) distinctWithAppId: (NSString*) appId
    tableName: (NSString*) tableName
    body: (SWGCloudQueryDistinct*) body
    completionHandler: (void (^)(NSArray<SWGCloudObject>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `distinct`"];
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `tableName` when calling `distinct`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `distinct`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"data/{app_id}/{table_name}/distinct"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (tableName != nil) {
        pathParams[@"table_name"] = tableName;
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
                              responseType: @"NSArray<SWGCloudObject>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGCloudObject>*)data, error);
                           }
          ];
}

///
/// find CloudObject meeting this query criteria
/// 
///  @param appId CloudApp id 
///
///  @param tableName cloud table name 
///
///  @param body query object 
///
///  @returns NSArray<SWGCloudObject>*
///
-(NSNumber*) findWithAppId: (NSString*) appId
    tableName: (NSString*) tableName
    body: (SWGCloudQuery*) body
    completionHandler: (void (^)(NSArray<SWGCloudObject>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `find`"];
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `tableName` when calling `find`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `find`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"data/{app_id}/{table_name}/find"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (tableName != nil) {
        pathParams[@"table_name"] = tableName;
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
                              responseType: @"NSArray<SWGCloudObject>*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((NSArray<SWGCloudObject>*)data, error);
                           }
          ];
}

///
/// find CloudObject with specific _id
/// 
///  @param cloudAppId CloudApp id 
///
///  @param tableName cloud table name 
///
///  @param body query body 
///
///  @returns SWGCloudObject*
///
-(NSNumber*) findByIdWithCloudAppId: (NSString*) cloudAppId
    tableName: (NSString*) tableName
    body: (SWGCloudQueryFindById*) body
    completionHandler: (void (^)(SWGCloudObject* output, NSError* error)) handler {

    
    // verify the required parameter 'cloudAppId' is set
    if (cloudAppId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cloudAppId` when calling `findById`"];
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `tableName` when calling `findById`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `findById`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"data/{cloud_app_id}/{table_name}/find"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (cloudAppId != nil) {
        pathParams[@"cloud_app_id"] = cloudAppId;
    }
    if (tableName != nil) {
        pathParams[@"table_name"] = tableName;
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
                              responseType: @"SWGCloudObject*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGCloudObject*)data, error);
                           }
          ];
}

///
/// find a single CloudObject
/// 
///  @param appId CloudApp id 
///
///  @param tableName cloud table name 
///
///  @param body query body 
///
///  @returns SWGCloudObject*
///
-(NSNumber*) findOneWithAppId: (NSString*) appId
    tableName: (NSString*) tableName
    body: (SWGCloudQueryFindOne*) body
    completionHandler: (void (^)(SWGCloudObject* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `findOne`"];
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `tableName` when calling `findOne`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `findOne`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"data/{app_id}/{table_name}/findOne"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (tableName != nil) {
        pathParams[@"table_name"] = tableName;
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
                              responseType: @"SWGCloudObject*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((SWGCloudObject*)data, error);
                           }
          ];
}



@end
