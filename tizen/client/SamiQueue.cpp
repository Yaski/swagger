
#include "SamiQueue.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiQueue::SamiQueue() {
    init();
}

SamiQueue::~SamiQueue() {
    this->cleanup();
}

void
SamiQueue::init() {
    p_id = null;
    p_tableName = null;
    pCreatedAt = null;
    pUpdatedAt = null;
    pACL = null;
    p_type = null;
    pExpires = null;
    pQueueType = null;
    pRetry = null;
    pName = null;
    pSubscribers = null;
    pMessages = null;
    
}

void
SamiQueue::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(p_tableName != null) {
        
        delete p_tableName;
        p_tableName = null;
    }
    if(pCreatedAt != null) {
        
        delete pCreatedAt;
        pCreatedAt = null;
    }
    if(pUpdatedAt != null) {
        
        delete pUpdatedAt;
        pUpdatedAt = null;
    }
    if(pACL != null) {
        
        delete pACL;
        pACL = null;
    }
    if(p_type != null) {
        
        delete p_type;
        p_type = null;
    }
    if(pExpires != null) {
        
        delete pExpires;
        pExpires = null;
    }
    if(pQueueType != null) {
        
        delete pQueueType;
        pQueueType = null;
    }
    if(pRetry != null) {
        
        delete pRetry;
        pRetry = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pSubscribers != null) {
        pSubscribers->RemoveAll(true);
        delete pSubscribers;
        pSubscribers = null;
    }
    if(pMessages != null) {
        pMessages->RemoveAll(true);
        delete pMessages;
        pMessages = null;
    }
    
}


SamiQueue*
SamiQueue::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiQueue::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* p_tableNameKey = new JsonString(L"_tableName");
        IJsonValue* p_tableNameVal = null;
        pJsonObject->GetValue(p_tableNameKey, p_tableNameVal);
        if(p_tableNameVal != null) {
            
            p_tableName = new String();
            jsonToValue(p_tableName, p_tableNameVal, L"String", L"String");
        }
        delete p_tableNameKey;
        JsonString* pCreatedAtKey = new JsonString(L"createdAt");
        IJsonValue* pCreatedAtVal = null;
        pJsonObject->GetValue(pCreatedAtKey, pCreatedAtVal);
        if(pCreatedAtVal != null) {
            
            pCreatedAt = new DateTime();
            jsonToValue(pCreatedAt, pCreatedAtVal, L"DateTime", L"DateTime");
        }
        delete pCreatedAtKey;
        JsonString* pUpdatedAtKey = new JsonString(L"updatedAt");
        IJsonValue* pUpdatedAtVal = null;
        pJsonObject->GetValue(pUpdatedAtKey, pUpdatedAtVal);
        if(pUpdatedAtVal != null) {
            
            pUpdatedAt = new DateTime();
            jsonToValue(pUpdatedAt, pUpdatedAtVal, L"DateTime", L"DateTime");
        }
        delete pUpdatedAtKey;
        JsonString* pACLKey = new JsonString(L"ACL");
        IJsonValue* pACLVal = null;
        pJsonObject->GetValue(pACLKey, pACLVal);
        if(pACLVal != null) {
            
            pACL = new SamiACL();
            jsonToValue(pACL, pACLVal, L"SamiACL", L"SamiACL");
        }
        delete pACLKey;
        JsonString* p_typeKey = new JsonString(L"_type");
        IJsonValue* p_typeVal = null;
        pJsonObject->GetValue(p_typeKey, p_typeVal);
        if(p_typeVal != null) {
            
            p_type = new String();
            jsonToValue(p_type, p_typeVal, L"String", L"String");
        }
        delete p_typeKey;
        JsonString* pExpiresKey = new JsonString(L"expires");
        IJsonValue* pExpiresVal = null;
        pJsonObject->GetValue(pExpiresKey, pExpiresVal);
        if(pExpiresVal != null) {
            
            pExpires = new DateTime();
            jsonToValue(pExpires, pExpiresVal, L"DateTime", L"DateTime");
        }
        delete pExpiresKey;
        JsonString* pQueueTypeKey = new JsonString(L"queueType");
        IJsonValue* pQueueTypeVal = null;
        pJsonObject->GetValue(pQueueTypeKey, pQueueTypeVal);
        if(pQueueTypeVal != null) {
            
            pQueueType = new String();
            jsonToValue(pQueueType, pQueueTypeVal, L"String", L"String");
        }
        delete pQueueTypeKey;
        JsonString* pRetryKey = new JsonString(L"retry");
        IJsonValue* pRetryVal = null;
        pJsonObject->GetValue(pRetryKey, pRetryVal);
        if(pRetryVal != null) {
            
            pRetry = new String();
            jsonToValue(pRetry, pRetryVal, L"String", L"String");
        }
        delete pRetryKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pSubscribersKey = new JsonString(L"subscribers");
        IJsonValue* pSubscribersVal = null;
        pJsonObject->GetValue(pSubscribersKey, pSubscribersVal);
        if(pSubscribersVal != null) {
            pSubscribers = new ArrayList();
            
            jsonToValue(pSubscribers, pSubscribersVal, L"IList", L"String");
        }
        delete pSubscribersKey;
        JsonString* pMessagesKey = new JsonString(L"messages");
        IJsonValue* pMessagesVal = null;
        pJsonObject->GetValue(pMessagesKey, pMessagesVal);
        if(pMessagesVal != null) {
            pMessages = new ArrayList();
            
            jsonToValue(pMessages, pMessagesVal, L"IList", L"SamiQueueMessage");
        }
        delete pMessagesKey;
        
    }
}

SamiQueue::SamiQueue(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiQueue::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiQueue::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *p_tableNameKey = new JsonString(L"_tableName");
    pJsonObject->Add(p_tableNameKey, toJson(getPTableName(), "String", ""));

    
    JsonString *pCreatedAtKey = new JsonString(L"createdAt");
    pJsonObject->Add(pCreatedAtKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdatedAtKey = new JsonString(L"updatedAt");
    pJsonObject->Add(pUpdatedAtKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    JsonString *pACLKey = new JsonString(L"ACL");
    pJsonObject->Add(pACLKey, toJson(getPACL(), "SamiACL", ""));

    
    JsonString *p_typeKey = new JsonString(L"_type");
    pJsonObject->Add(p_typeKey, toJson(getPType(), "String", ""));

    
    JsonString *pExpiresKey = new JsonString(L"expires");
    pJsonObject->Add(pExpiresKey, toJson(getPExpires(), "DateTime", ""));

    
    JsonString *pQueueTypeKey = new JsonString(L"queueType");
    pJsonObject->Add(pQueueTypeKey, toJson(getPQueueType(), "String", ""));

    
    JsonString *pRetryKey = new JsonString(L"retry");
    pJsonObject->Add(pRetryKey, toJson(getPRetry(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pSubscribersKey = new JsonString(L"subscribers");
    pJsonObject->Add(pSubscribersKey, toJson(getPSubscribers(), "String", "array"));

    
    JsonString *pMessagesKey = new JsonString(L"messages");
    pJsonObject->Add(pMessagesKey, toJson(getPMessages(), "SamiQueueMessage", "array"));

    
    return pJsonObject;
}

String*
SamiQueue::getPId() {
    return p_id;
}
void
SamiQueue::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiQueue::getPTableName() {
    return p_tableName;
}
void
SamiQueue::setPTableName(String* p_tableName) {
    this->p_tableName = p_tableName;
}

DateTime*
SamiQueue::getPCreatedAt() {
    return pCreatedAt;
}
void
SamiQueue::setPCreatedAt(DateTime* pCreatedAt) {
    this->pCreatedAt = pCreatedAt;
}

DateTime*
SamiQueue::getPUpdatedAt() {
    return pUpdatedAt;
}
void
SamiQueue::setPUpdatedAt(DateTime* pUpdatedAt) {
    this->pUpdatedAt = pUpdatedAt;
}

SamiACL*
SamiQueue::getPACL() {
    return pACL;
}
void
SamiQueue::setPACL(SamiACL* pACL) {
    this->pACL = pACL;
}

String*
SamiQueue::getPType() {
    return p_type;
}
void
SamiQueue::setPType(String* p_type) {
    this->p_type = p_type;
}

DateTime*
SamiQueue::getPExpires() {
    return pExpires;
}
void
SamiQueue::setPExpires(DateTime* pExpires) {
    this->pExpires = pExpires;
}

String*
SamiQueue::getPQueueType() {
    return pQueueType;
}
void
SamiQueue::setPQueueType(String* pQueueType) {
    this->pQueueType = pQueueType;
}

String*
SamiQueue::getPRetry() {
    return pRetry;
}
void
SamiQueue::setPRetry(String* pRetry) {
    this->pRetry = pRetry;
}

String*
SamiQueue::getPName() {
    return pName;
}
void
SamiQueue::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiQueue::getPSubscribers() {
    return pSubscribers;
}
void
SamiQueue::setPSubscribers(IList* pSubscribers) {
    this->pSubscribers = pSubscribers;
}

IList*
SamiQueue::getPMessages() {
    return pMessages;
}
void
SamiQueue::setPMessages(IList* pMessages) {
    this->pMessages = pMessages;
}



} /* namespace Swagger */

