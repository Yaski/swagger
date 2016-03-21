#include "SamiCloudQueryApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCloudQueryApi::SamiCloudQueryApi() {

}

SamiCloudQueryApi::~SamiCloudQueryApi() {

}

void
countProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    Integer* out = null;
    jsonToValue(out, pJson, L"Integer*", L"Integer");

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

Integer* 
SamiCloudQueryApi::countWithCompletion(String* appId, String* tableName, SamiCloudQueryCount* body, void (* success)(Integer*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&countProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"data/{app_id}/{table_name}/count");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  

  client->execute(SamiCloudQueryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
distinctProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCloudObject");

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

IList* 
SamiCloudQueryApi::distinctWithCompletion(String* appId, String* tableName, SamiCloudQueryDistinct* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&distinctProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"data/{app_id}/{table_name}/distinct");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  

  client->execute(SamiCloudQueryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
findProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCloudObject");

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

IList* 
SamiCloudQueryApi::findWithCompletion(String* appId, String* tableName, SamiCloudQuery* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&findProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"data/{app_id}/{table_name}/find");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  

  client->execute(SamiCloudQueryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
findByIdProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiCloudQueryApi::findByIdWithCompletion(String* cloudAppId, String* tableName, SamiCloudQueryFindById* body, void (* success)(SamiCloudObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&findByIdProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"data/{cloud_app_id}/{table_name}/find");

  
  String s_cloudAppId(L"{");
  s_cloudAppId.Append(L"cloud_app_id");
  s_cloudAppId.Append(L"}");
  url.Replace(s_cloudAppId, stringify(cloudAppId, L"String*"));
  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  

  client->execute(SamiCloudQueryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
findOneProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiCloudQueryApi::findOneWithCompletion(String* appId, String* tableName, SamiCloudQueryFindOne* body, void (* success)(SamiCloudObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&findOneProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"data/{app_id}/{table_name}/findOne");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_tableName(L"{");
  s_tableName.Append(L"table_name");
  s_tableName.Append(L"}");
  url.Replace(s_tableName, stringify(tableName, L"String*"));
  

  client->execute(SamiCloudQueryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
