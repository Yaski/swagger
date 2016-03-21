
#include "SamiModifiedQueue.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiModifiedQueue::SamiModifiedQueue() {
    init();
}

SamiModifiedQueue::~SamiModifiedQueue() {
    this->cleanup();
}

void
SamiModifiedQueue::init() {
    pACL = null;
    p_type = null;
    pExpires = null;
    pQueueType = null;
    pRetry = null;
    pName = null;
    pSubscribers = null;
    p_isModified = null;
    p_modifiedColumns = null;
    pMessages = null;
    
}

void
SamiModifiedQueue::cleanup() {
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
    if(p_isModified != null) {
        
        delete p_isModified;
        p_isModified = null;
    }
    if(p_modifiedColumns != null) {
        p_modifiedColumns->RemoveAll(true);
        delete p_modifiedColumns;
        p_modifiedColumns = null;
    }
    if(pMessages != null) {
        pMessages->RemoveAll(true);
        delete pMessages;
        pMessages = null;
    }
    
}


SamiModifiedQueue*
SamiModifiedQueue::fromJson(String* json) {
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
SamiModifiedQueue::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
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
        JsonString* p_isModifiedKey = new JsonString(L"_isModified");
        IJsonValue* p_isModifiedVal = null;
        pJsonObject->GetValue(p_isModifiedKey, p_isModifiedVal);
        if(p_isModifiedVal != null) {
            
            p_isModified = new Boolean(false);
            jsonToValue(p_isModified, p_isModifiedVal, L"Boolean", L"Boolean");
        }
        delete p_isModifiedKey;
        JsonString* p_modifiedColumnsKey = new JsonString(L"_modifiedColumns");
        IJsonValue* p_modifiedColumnsVal = null;
        pJsonObject->GetValue(p_modifiedColumnsKey, p_modifiedColumnsVal);
        if(p_modifiedColumnsVal != null) {
            p_modifiedColumns = new ArrayList();
            
            jsonToValue(p_modifiedColumns, p_modifiedColumnsVal, L"IList", L"String");
        }
        delete p_modifiedColumnsKey;
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

SamiModifiedQueue::SamiModifiedQueue(String* json) {
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
SamiModifiedQueue::asJson ()
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
SamiModifiedQueue::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
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

    
    JsonString *p_isModifiedKey = new JsonString(L"_isModified");
    pJsonObject->Add(p_isModifiedKey, toJson(getPIsModified(), "Boolean", ""));

    
    JsonString *p_modifiedColumnsKey = new JsonString(L"_modifiedColumns");
    pJsonObject->Add(p_modifiedColumnsKey, toJson(getPModifiedColumns(), "String", "array"));

    
    JsonString *pMessagesKey = new JsonString(L"messages");
    pJsonObject->Add(pMessagesKey, toJson(getPMessages(), "SamiQueueMessage", "array"));

    
    return pJsonObject;
}

SamiACL*
SamiModifiedQueue::getPACL() {
    return pACL;
}
void
SamiModifiedQueue::setPACL(SamiACL* pACL) {
    this->pACL = pACL;
}

String*
SamiModifiedQueue::getPType() {
    return p_type;
}
void
SamiModifiedQueue::setPType(String* p_type) {
    this->p_type = p_type;
}

DateTime*
SamiModifiedQueue::getPExpires() {
    return pExpires;
}
void
SamiModifiedQueue::setPExpires(DateTime* pExpires) {
    this->pExpires = pExpires;
}

String*
SamiModifiedQueue::getPQueueType() {
    return pQueueType;
}
void
SamiModifiedQueue::setPQueueType(String* pQueueType) {
    this->pQueueType = pQueueType;
}

String*
SamiModifiedQueue::getPRetry() {
    return pRetry;
}
void
SamiModifiedQueue::setPRetry(String* pRetry) {
    this->pRetry = pRetry;
}

String*
SamiModifiedQueue::getPName() {
    return pName;
}
void
SamiModifiedQueue::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiModifiedQueue::getPSubscribers() {
    return pSubscribers;
}
void
SamiModifiedQueue::setPSubscribers(IList* pSubscribers) {
    this->pSubscribers = pSubscribers;
}

Boolean*
SamiModifiedQueue::getPIsModified() {
    return p_isModified;
}
void
SamiModifiedQueue::setPIsModified(Boolean* p_isModified) {
    this->p_isModified = p_isModified;
}

IList*
SamiModifiedQueue::getPModifiedColumns() {
    return p_modifiedColumns;
}
void
SamiModifiedQueue::setPModifiedColumns(IList* p_modifiedColumns) {
    this->p_modifiedColumns = p_modifiedColumns;
}

IList*
SamiModifiedQueue::getPMessages() {
    return pMessages;
}
void
SamiModifiedQueue::setPMessages(IList* pMessages) {
    this->pMessages = pMessages;
}



} /* namespace Swagger */

