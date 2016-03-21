
#include "SamiQueuePayloadWithCount.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiQueuePayloadWithCount::SamiQueuePayloadWithCount() {
    init();
}

SamiQueuePayloadWithCount::~SamiQueuePayloadWithCount() {
    this->cleanup();
}

void
SamiQueuePayloadWithCount::init() {
    pCount = null;
    pKey = null;
    
}

void
SamiQueuePayloadWithCount::cleanup() {
    if(pCount != null) {
        
        delete pCount;
        pCount = null;
    }
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    
}


SamiQueuePayloadWithCount*
SamiQueuePayloadWithCount::fromJson(String* json) {
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
SamiQueuePayloadWithCount::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountKey = new JsonString(L"count");
        IJsonValue* pCountVal = null;
        pJsonObject->GetValue(pCountKey, pCountVal);
        if(pCountVal != null) {
            
            pCount = new Long();
            jsonToValue(pCount, pCountVal, L"Long", L"Long");
        }
        delete pCountKey;
        JsonString* pKeyKey = new JsonString(L"key");
        IJsonValue* pKeyVal = null;
        pJsonObject->GetValue(pKeyKey, pKeyVal);
        if(pKeyVal != null) {
            
            pKey = new String();
            jsonToValue(pKey, pKeyVal, L"String", L"String");
        }
        delete pKeyKey;
        
    }
}

SamiQueuePayloadWithCount::SamiQueuePayloadWithCount(String* json) {
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
SamiQueuePayloadWithCount::asJson ()
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
SamiQueuePayloadWithCount::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCountKey = new JsonString(L"count");
    pJsonObject->Add(pCountKey, toJson(getPCount(), "Long", ""));

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    return pJsonObject;
}

Long*
SamiQueuePayloadWithCount::getPCount() {
    return pCount;
}
void
SamiQueuePayloadWithCount::setPCount(Long* pCount) {
    this->pCount = pCount;
}

String*
SamiQueuePayloadWithCount::getPKey() {
    return pKey;
}
void
SamiQueuePayloadWithCount::setPKey(String* pKey) {
    this->pKey = pKey;
}



} /* namespace Swagger */

