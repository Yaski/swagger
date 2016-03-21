#include "SamiCloudTableApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCloudTableApi::SamiCloudTableApi() {

}

SamiCloudTableApi::~SamiCloudTableApi() {

}

void
deleteTableProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudTable* out = new SamiCloudTable();
    jsonToValue(out, pJson, L"SamiCloudTable*", L"SamiCloudTable");

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

SamiCloudTable* 
SamiCloudTableApi::deleteTableWithCompletion(String* tableName, String* appId, SamiCloudTableSave* body, void (* success)(SamiCloudTable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteTableProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"app/{app_id}/{table_name}");

  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudTableApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudTable* out = new SamiCloudTable();
    jsonToValue(out, pJson, L"SamiCloudTable*", L"SamiCloudTable");

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

SamiCloudTable* 
SamiCloudTableApi::getWithCompletion(String* tableName, String* appId, SamiKeyBody* body, void (* success)(SamiCloudTable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"app/{app_id}/{table_name}");

  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudTableApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getAllProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiCloudTableApi::getAllWithCompletion(String* appId, SamiKeyBody* body, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&getAllProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/app/{app_id}/_getAll");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudTableApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
saveProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudTable* out = new SamiCloudTable();
    jsonToValue(out, pJson, L"SamiCloudTable*", L"SamiCloudTable");

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

SamiCloudTable* 
SamiCloudTableApi::saveWithCompletion(String* tableName, String* appId, SamiCloudTableSave* body, void (* success)(SamiCloudTable*, SamiError*)) {
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
  
  

  String url(L"app/{app_id}/{table_name}");

  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudTableApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
