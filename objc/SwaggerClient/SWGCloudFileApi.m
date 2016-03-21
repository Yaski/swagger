#import "SWGCloudFileApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGKeyBody.h"
#import "SWGFileBody.h"


@interface SWGCloudFileApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGCloudFileApi

static SWGCloudFileApi* singletonAPI = nil;

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

+(SWGCloudFileApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudFileApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(SWGCloudFileApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudFileApi alloc] init];
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
/// deletes file
/// 
///  @param appId ID of app 
///
///  @param fileId file id 
///
///  @param body request body (optional)
///
///  @returns NSString*
///
-(NSNumber*) deleteFileWithAppId: (NSString*) appId
    fileId: (NSString*) fileId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSString* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `deleteFile`"];
    }
    
    // verify the required parameter 'fileId' is set
    if (fileId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `fileId` when calling `deleteFile`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"file/{app_id}/{file_id}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (fileId != nil) {
        pathParams[@"file_id"] = fileId;
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
/// fetch file content
/// 
///  @param appId ID of app 
///
///  @param fileId file id 
///
///  @param body request body (optional)
///
///  @returns NSString*
///
-(NSNumber*) fetchFileContentWithAppId: (NSString*) appId
    fileId: (NSString*) fileId
    body: (SWGKeyBody*) body
    completionHandler: (void (^)(NSString* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `fetchFileContent`"];
    }
    
    // verify the required parameter 'fileId' is set
    if (fileId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `fileId` when calling `fetchFileContent`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"file/{app_id}/{file_id}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (appId != nil) {
        pathParams[@"app_id"] = appId;
    }
    if (fileId != nil) {
        pathParams[@"file_id"] = fileId;
    }
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json", @"application/octet-stream"]];
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
/// uploads a file
/// 
///  @param appId ID of app 
///
///  @param fileObj file extra data 
///
///  @param key app key (optional)
///
///  @param fileToUpload file to upload (optional)
///
///  @returns NSString*
///
-(NSNumber*) saveFileWithAppId: (NSString*) appId
    fileObj: (NSString*) fileObj
    key: (NSString*) key
    fileToUpload: (NSURL*) fileToUpload
    completionHandler: (void (^)(NSString* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `saveFile`"];
    }
    
    // verify the required parameter 'fileObj' is set
    if (fileObj == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `fileObj` when calling `saveFile`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"file/{app_id}"];

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
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"multipart/form-data"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    
    
    if (key) {
        formParams[@"key"] = key;
    }
    
    
    
    if (fileObj) {
        formParams[@"fileObj"] = fileObj;
    }
    
    
    
    localVarFiles[@"fileToUpload"] = fileToUpload;
    
    
    

    
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
/// uploads a file with data
/// 
///  @param myAppId ID of app 
///
///  @param fileObj file extra data 
///
///  @returns NSString*
///
-(NSNumber*) saveFileDataWithMyAppId: (NSString*) myAppId
    fileObj: (SWGFileBody*) fileObj
    completionHandler: (void (^)(NSString* output, NSError* error)) handler {

    
    // verify the required parameter 'myAppId' is set
    if (myAppId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `myAppId` when calling `saveFileData`"];
    }
    
    // verify the required parameter 'fileObj' is set
    if (fileObj == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `fileObj` when calling `saveFileData`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"file/{my_app_id}"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (myAppId != nil) {
        pathParams[@"my_app_id"] = myAppId;
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
    
    bodyParam = fileObj;
    

    
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



@end
