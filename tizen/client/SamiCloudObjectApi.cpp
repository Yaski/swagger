#include "SamiCloudObjectApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCloudObjectApi::SamiCloudObjectApi() {

}

SamiCloudObjectApi::~SamiCloudObjectApi() {

}

void
deleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudObject* out = new SamiCloudObject();
    jsonToValue(out, pJson, L"SamiCloudObject*", L"SamiCloudObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiCloudObject* 
SamiCloudObjectApi::deleteWithCompletion(String* appId, String* tableName, SamiCloudObjectSaveRequest* body, void (* success)(SamiCloudObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"data/{app_id}/{table_name}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  

  client->execute(SamiCloudObjectApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
saveProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudObject* out = new SamiCloudObject();
    jsonToValue(out, pJson, L"SamiCloudObject*", L"SamiCloudObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiCloudObject* 
SamiCloudObjectApi::saveWithCompletion(String* appId, String* tableName, SamiCloudObjectSaveRequest* body, void (* success)(SamiCloudObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&saveProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"data/{app_id}/{table_name}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  

  client->execute(SamiCloudObjectApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
