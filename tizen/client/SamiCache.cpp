
#include "SamiCache.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCache::SamiCache() {
    init();
}

SamiCache::~SamiCache() {
    this->cleanup();
}

void
SamiCache::init() {
    p_type = null;
    pName = null;
    pSize = null;
    
}

void
SamiCache::cleanup() {
    if(p_type != null) {
        
        delete p_type;
        p_type = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pSize != null) {
        
        delete pSize;
        pSize = null;
    }
    
}


SamiCache*
SamiCache::fromJson(String* json) {
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
SamiCache::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_typeKey = new JsonString(L"_type");
        IJsonValue* p_typeVal = null;
        pJsonObject->GetValue(p_typeKey, p_typeVal);
        if(p_typeVal != null) {
            
            p_type = new String();
            jsonToValue(p_type, p_typeVal, L"String", L"String");
        }
        delete p_typeKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pSizeKey = new JsonString(L"size");
        IJsonValue* pSizeVal = null;
        pJsonObject->GetValue(pSizeKey, pSizeVal);
        if(pSizeVal != null) {
            
            pSize = new String();
            jsonToValue(pSize, pSizeVal, L"String", L"String");
        }
        delete pSizeKey;
        
    }
}

SamiCache::SamiCache(String* json) {
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
SamiCache::asJson ()
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
SamiCache::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_typeKey = new JsonString(L"_type");
    pJsonObject->Add(p_typeKey, toJson(getPType(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pSizeKey = new JsonString(L"size");
    pJsonObject->Add(pSizeKey, toJson(getPSize(), "String", ""));

    
    return pJsonObject;
}

String*
SamiCache::getPType() {
    return p_type;
}
void
SamiCache::setPType(String* p_type) {
    this->p_type = p_type;
}

String*
SamiCache::getPName() {
    return pName;
}
void
SamiCache::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiCache::getPSize() {
    return pSize;
}
void
SamiCache::setPSize(String* pSize) {
    this->pSize = pSize;
}



} /* namespace Swagger */

