
#include "SamiQueueMessage.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiQueueMessage::SamiQueueMessage() {
    init();
}

SamiQueueMessage::~SamiQueueMessage() {
    this->cleanup();
}

void
SamiQueueMessage::init() {
    pACL = null;
    p_type = null;
    pExpires = null;
    p_id = null;
    pDelay = null;
    pTimeout = null;
    p_modifiedColumns = null;
    p_isModified = null;
    pMessage = null;
    
}

void
SamiQueueMessage::cleanup() {
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
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pDelay != null) {
        
        delete pDelay;
        pDelay = null;
    }
    if(pTimeout != null) {
        
        delete pTimeout;
        pTimeout = null;
    }
    if(p_modifiedColumns != null) {
        p_modifiedColumns->RemoveAll(true);
        delete p_modifiedColumns;
        p_modifiedColumns = null;
    }
    if(p_isModified != null) {
        
        delete p_isModified;
        p_isModified = null;
    }
    if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
    
}


SamiQueueMessage*
SamiQueueMessage::fromJson(String* json) {
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
SamiQueueMessage::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* pDelayKey = new JsonString(L"delay");
        IJsonValue* pDelayVal = null;
        pJsonObject->GetValue(pDelayKey, pDelayVal);
        if(pDelayVal != null) {
            
            pDelay = new DateTime();
            jsonToValue(pDelay, pDelayVal, L"DateTime", L"DateTime");
        }
        delete pDelayKey;
        JsonString* pTimeoutKey = new JsonString(L"timeout");
        IJsonValue* pTimeoutVal = null;
        pJsonObject->GetValue(pTimeoutKey, pTimeoutVal);
        if(pTimeoutVal != null) {
            
            pTimeout = new Long();
            jsonToValue(pTimeout, pTimeoutVal, L"Long", L"Long");
        }
        delete pTimeoutKey;
        JsonString* p_modifiedColumnsKey = new JsonString(L"_modifiedColumns");
        IJsonValue* p_modifiedColumnsVal = null;
        pJsonObject->GetValue(p_modifiedColumnsKey, p_modifiedColumnsVal);
        if(p_modifiedColumnsVal != null) {
            p_modifiedColumns = new ArrayList();
            
            jsonToValue(p_modifiedColumns, p_modifiedColumnsVal, L"IList", L"String");
        }
        delete p_modifiedColumnsKey;
        JsonString* p_isModifiedKey = new JsonString(L"_isModified");
        IJsonValue* p_isModifiedVal = null;
        pJsonObject->GetValue(p_isModifiedKey, p_isModifiedVal);
        if(p_isModifiedVal != null) {
            
            p_isModified = new Boolean(false);
            jsonToValue(p_isModified, p_isModifiedVal, L"Boolean", L"Boolean");
        }
        delete p_isModifiedKey;
        JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
        
    }
}

SamiQueueMessage::SamiQueueMessage(String* json) {
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
SamiQueueMessage::asJson ()
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
SamiQueueMessage::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pACLKey = new JsonString(L"ACL");
    pJsonObject->Add(pACLKey, toJson(getPACL(), "SamiACL", ""));

    
    JsonString *p_typeKey = new JsonString(L"_type");
    pJsonObject->Add(p_typeKey, toJson(getPType(), "String", ""));

    
    JsonString *pExpiresKey = new JsonString(L"expires");
    pJsonObject->Add(pExpiresKey, toJson(getPExpires(), "DateTime", ""));

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pDelayKey = new JsonString(L"delay");
    pJsonObject->Add(pDelayKey, toJson(getPDelay(), "DateTime", ""));

    
    JsonString *pTimeoutKey = new JsonString(L"timeout");
    pJsonObject->Add(pTimeoutKey, toJson(getPTimeout(), "Long", ""));

    
    JsonString *p_modifiedColumnsKey = new JsonString(L"_modifiedColumns");
    pJsonObject->Add(p_modifiedColumnsKey, toJson(getPModifiedColumns(), "String", "array"));

    
    JsonString *p_isModifiedKey = new JsonString(L"_isModified");
    pJsonObject->Add(p_isModifiedKey, toJson(getPIsModified(), "Boolean", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    
    return pJsonObject;
}

SamiACL*
SamiQueueMessage::getPACL() {
    return pACL;
}
void
SamiQueueMessage::setPACL(SamiACL* pACL) {
    this->pACL = pACL;
}

String*
SamiQueueMessage::getPType() {
    return p_type;
}
void
SamiQueueMessage::setPType(String* p_type) {
    this->p_type = p_type;
}

DateTime*
SamiQueueMessage::getPExpires() {
    return pExpires;
}
void
SamiQueueMessage::setPExpires(DateTime* pExpires) {
    this->pExpires = pExpires;
}

String*
SamiQueueMessage::getPId() {
    return p_id;
}
void
SamiQueueMessage::setPId(String* p_id) {
    this->p_id = p_id;
}

DateTime*
SamiQueueMessage::getPDelay() {
    return pDelay;
}
void
SamiQueueMessage::setPDelay(DateTime* pDelay) {
    this->pDelay = pDelay;
}

Long*
SamiQueueMessage::getPTimeout() {
    return pTimeout;
}
void
SamiQueueMessage::setPTimeout(Long* pTimeout) {
    this->pTimeout = pTimeout;
}

IList*
SamiQueueMessage::getPModifiedColumns() {
    return p_modifiedColumns;
}
void
SamiQueueMessage::setPModifiedColumns(IList* p_modifiedColumns) {
    this->p_modifiedColumns = p_modifiedColumns;
}

Boolean*
SamiQueueMessage::getPIsModified() {
    return p_isModified;
}
void
SamiQueueMessage::setPIsModified(Boolean* p_isModified) {
    this->p_isModified = p_isModified;
}

String*
SamiQueueMessage::getPMessage() {
    return pMessage;
}
void
SamiQueueMessage::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}



} /* namespace Swagger */

