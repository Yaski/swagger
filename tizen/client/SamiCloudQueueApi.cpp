#include "SamiCloudQueueApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCloudQueueApi::SamiCloudQueueApi() {

}

SamiCloudQueueApi::~SamiCloudQueueApi() {

}

void
addMessageProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::addMessageWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addMessageProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/message");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
addSubscriberProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiQueue* out = new SamiQueue();
    jsonToValue(out, pJson, L"SamiQueue*", L"SamiQueue");

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

SamiQueue* 
SamiCloudQueueApi::addSubscriberWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* success)(SamiQueue*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addSubscriberProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/subscriber");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
clearProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiQueue* out = new SamiQueue();
    jsonToValue(out, pJson, L"SamiQueue*", L"SamiQueue");

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

SamiQueue* 
SamiCloudQueueApi::clearWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* success)(SamiQueue*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&clearProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/clear");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createQueueProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiQueue* out = new SamiQueue();
    jsonToValue(out, pJson, L"SamiQueue*", L"SamiQueue");

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

SamiQueue* 
SamiCloudQueueApi::createQueueWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* success)(SamiQueue*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createQueueProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/create");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteMessageProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::deleteMessageWithCompletion(String* appId, String* queueName, String* messageId, SamiKeyBody* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteMessageProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/message/{message_id}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  
  String s_messageId(L"{");
  s_messageId.Append(L"message_id");
  s_messageId.Append(L"}");
  url.Replace(s_messageId, stringify(messageId, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteQueueProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiQueue* out = new SamiQueue();
    jsonToValue(out, pJson, L"SamiQueue*", L"SamiQueue");

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

SamiQueue* 
SamiCloudQueueApi::deleteQueueWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* success)(SamiQueue*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteQueueProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteSubscriberProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiQueue* out = new SamiQueue();
    jsonToValue(out, pJson, L"SamiQueue*", L"SamiQueue");

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

SamiQueue* 
SamiCloudQueueApi::deleteSubscriberWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* success)(SamiQueue*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteSubscriberProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/subscriber");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getAllMessagesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::getAllMessagesWithCompletion(String* appId, SamiKeyBody* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getAllMessagesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/messages");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getAllQueuesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueue");

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
SamiCloudQueueApi::getAllQueuesWithCompletion(String* appId, SamiKeyBody* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getAllQueuesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getMessageProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::getMessageWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getMessageProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/getMessage");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getMessageByIdProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiQueueMessage* out = new SamiQueueMessage();
    jsonToValue(out, pJson, L"SamiQueueMessage*", L"SamiQueueMessage");

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

SamiQueueMessage* 
SamiCloudQueueApi::getMessageByIdWithCompletion(String* appId, String* queueName, String* messageId, SamiKeyBody* body, void (* success)(SamiQueueMessage*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getMessageByIdProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/message/{message_id}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  
  String s_messageId(L"{");
  s_messageId.Append(L"message_id");
  s_messageId.Append(L"}");
  url.Replace(s_messageId, stringify(messageId, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getQueueProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiQueue* out = new SamiQueue();
    jsonToValue(out, pJson, L"SamiQueue*", L"SamiQueue");

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

SamiQueue* 
SamiCloudQueueApi::getQueueWithCompletion(String* appId, String* queueName, SamiKeyBody* body, void (* success)(SamiQueue*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getQueueProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
peekProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::peekWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&peekProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/peek");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
peekMessageProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::peekMessageWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&peekMessageProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/peekMessage");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
pullProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::pullWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&pullProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/pull");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
refreshMessageTimeoutProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::refreshMessageTimeoutWithCompletion(String* appId, String* queueName, String* messageId, SamiRefreshMessageTimeoutBody* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&refreshMessageTimeoutProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  
  String s_messageId(L"{");
  s_messageId.Append(L"message_id");
  s_messageId.Append(L"}");
  url.Replace(s_messageId, stringify(messageId, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateMessageProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiQueueMessage");

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
SamiCloudQueueApi::updateMessageWithCompletion(String* myAppId, String* queueName, SamiQueueBody* body, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateMessageProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{my_app_id}/{queue_name}/message");

  
  String s_myAppId(L"{");
  s_myAppId.Append(L"my_app_id");
  s_myAppId.Append(L"}");
  url.Replace(s_myAppId, stringify(myAppId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateQueueProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiModifiedQueue* out = new SamiModifiedQueue();
    jsonToValue(out, pJson, L"SamiModifiedQueue*", L"SamiModifiedQueue");

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

SamiModifiedQueue* 
SamiCloudQueueApi::updateQueueWithCompletion(String* appId, String* queueName, SamiModifiedQueueBody* body, void (* success)(SamiModifiedQueue*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateQueueProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"queue/{app_id}/{queue_name}");

  
  String s_appId(L"{");
  s_appId.Append(L"app_id");
  s_appId.Append(L"}");
  url.Replace(s_appId, stringify(appId, L"String*"));
  
  String s_queueName(L"{");
  s_queueName.Append(L"queue_name");
  s_queueName.Append(L"}");
  url.Replace(s_queueName, stringify(queueName, L"String*"));
  

  client->execute(SamiCloudQueueApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
