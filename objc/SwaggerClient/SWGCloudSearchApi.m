#import "SWGCloudSearchApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGCloudObject.h"
#import "SWGCloudSearch.h"


@interface SWGCloudSearchApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGCloudSearchApi

static SWGCloudSearchApi* singletonAPI = nil;

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

+(SWGCloudSearchApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudSearchApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(SWGCloudSearchApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGCloudSearchApi alloc] init];
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
/// search for cloudobjects following the criteria defined herein
/// 
///  @param appId CloudApp id 
///
///  @param tableName cloud table name 
///
///  @param body query body 
///
///  @returns NSArray<SWGCloudObject>*
///
-(NSNumber*) searchWithAppId: (NSString*) appId
    tableName: (NSString*) tableName
    body: (SWGCloudSearch*) body
    completionHandler: (void (^)(NSArray<SWGCloudObject>* output, NSError* error)) handler {

    
    // verify the required parameter 'appId' is set
    if (appId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `appId` when calling `search`"];
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `tableName` when calling `search`"];
    }
    
    // verify the required parameter 'body' is set
    if (body == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `body` when calling `search`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"data/{app_id}/{table_name}/search"];

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



@end
