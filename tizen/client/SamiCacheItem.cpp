
#include "SamiCacheItem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCacheItem::SamiCacheItem() {
    init();
}

SamiCacheItem::~SamiCacheItem() {
    this->cleanup();
}

void
SamiCacheItem::init() {
    pKey = null;
    pValue = null;
    
}

void
SamiCacheItem::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
    
}


SamiCacheItem*
SamiCacheItem::fromJson(String* json) {
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
SamiCacheItem::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pKeyKey = new JsonString(L"key");
        IJsonValue* pKeyVal = null;
        pJsonObject->GetValue(pKeyKey, pKeyVal);
        if(pKeyVal != null) {
            
            pKey = new String();
            jsonToValue(pKey, pKeyVal, L"String", L"String");
        }
        delete pKeyKey;
        JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new String();
            jsonToValue(pValue, pValueVal, L"String", L"String");
        }
        delete pValueKey;
        
    }
}

SamiCacheItem::SamiCacheItem(String* json) {
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
SamiCacheItem::asJson ()
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
SamiCacheItem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "String", ""));

    
    return pJsonObject;
}

String*
SamiCacheItem::getPKey() {
    return pKey;
}
void
SamiCacheItem::setPKey(String* pKey) {
    this->pKey = pKey;
}

String*
SamiCacheItem::getPValue() {
    return pValue;
}
void
SamiCacheItem::setPValue(String* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

