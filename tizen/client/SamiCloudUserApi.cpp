#include "SamiCloudUserApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCloudUserApi::SamiCloudUserApi() {

}

SamiCloudUserApi::~SamiCloudUserApi() {

}

void
addToRoleProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudUser* out = new SamiCloudUser();
    jsonToValue(out, pJson, L"SamiCloudUser*", L"SamiCloudUser");

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

SamiCloudUser* 
SamiCloudUserApi::addToRoleWithCompletion(String* appId, SamiUserRoleBody* body, void (* success)(SamiCloudUser*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addToRoleProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"user/{app_id}/addToRole");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudUserApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
changePasswordProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudUser* out = new SamiCloudUser();
    jsonToValue(out, pJson, L"SamiCloudUser*", L"SamiCloudUser");

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

SamiCloudUser* 
SamiCloudUserApi::changePasswordWithCompletion(String* appId, SamiPasswordChangeBody* body, void (* success)(SamiCloudUser*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&changePasswordProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"user/{app_id}/changePassword");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudUserApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
loginProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudUser* out = new SamiCloudUser();
    jsonToValue(out, pJson, L"SamiCloudUser*", L"SamiCloudUser");

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

SamiCloudUser* 
SamiCloudUserApi::loginWithCompletion(String* appId, SamiUserBody* body, void (* success)(SamiCloudUser*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&loginProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"user/{app_id}/login");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudUserApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
logoutProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudUser* out = new SamiCloudUser();
    jsonToValue(out, pJson, L"SamiCloudUser*", L"SamiCloudUser");

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

SamiCloudUser* 
SamiCloudUserApi::logoutWithCompletion(String* appId, SamiUserBody* body, void (* success)(SamiCloudUser*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&logoutProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"user/{app_id}/logout");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudUserApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
removeFromRoleProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudUser* out = new SamiCloudUser();
    jsonToValue(out, pJson, L"SamiCloudUser*", L"SamiCloudUser");

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

SamiCloudUser* 
SamiCloudUserApi::removeFromRoleWithCompletion(String* appId, SamiUserRoleBody* body, void (* success)(SamiCloudUser*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&removeFromRoleProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"user/{app_id}/removeFromRole");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudUserApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
resetPasswordProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    String* out = new String();
    jsonToValue(out, pJson, L"String*", L"String");

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

String* 
SamiCloudUserApi::resetPasswordWithCompletion(String* appId, SamiEmailBody* body, void (* success)(String*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&resetPasswordProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"user/{app_id}/resetPassword");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudUserApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
signUpProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCloudUser* out = new SamiCloudUser();
    jsonToValue(out, pJson, L"SamiCloudUser*", L"SamiCloudUser");

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

SamiCloudUser* 
SamiCloudUserApi::signUpWithCompletion(String* appId, SamiUserBody* body, void (* success)(SamiCloudUser*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&signUpProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"user/{app_id}/signup");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudUserApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
