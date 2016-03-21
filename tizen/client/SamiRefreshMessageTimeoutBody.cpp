
#include "SamiRefreshMessageTimeoutBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRefreshMessageTimeoutBody::SamiRefreshMessageTimeoutBody() {
    init();
}

SamiRefreshMessageTimeoutBody::~SamiRefreshMessageTimeoutBody() {
    this->cleanup();
}

void
SamiRefreshMessageTimeoutBody::init() {
    pTimeout = null;
    pKey = null;
    
}

void
SamiRefreshMessageTimeoutBody::cleanup() {
    if(pTimeout != null) {
        
        delete pTimeout;
        pTimeout = null;
    }
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    
}


SamiRefreshMessageTimeoutBody*
SamiRefreshMessageTimeoutBody::fromJson(String* json) {
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
SamiRefreshMessageTimeoutBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTimeoutKey = new JsonString(L"timeout");
        IJsonValue* pTimeoutVal = null;
        pJsonObject->GetValue(pTimeoutKey, pTimeoutVal);
        if(pTimeoutVal != null) {
            
            pTimeout = new Long();
            jsonToValue(pTimeout, pTimeoutVal, L"Long", L"Long");
        }
        delete pTimeoutKey;
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

SamiRefreshMessageTimeoutBody::SamiRefreshMessageTimeoutBody(String* json) {
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
SamiRefreshMessageTimeoutBody::asJson ()
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
SamiRefreshMessageTimeoutBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pTimeoutKey = new JsonString(L"timeout");
    pJsonObject->Add(pTimeoutKey, toJson(getPTimeout(), "Long", ""));

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    return pJsonObject;
}

Long*
SamiRefreshMessageTimeoutBody::getPTimeout() {
    return pTimeout;
}
void
SamiRefreshMessageTimeoutBody::setPTimeout(Long* pTimeout) {
    this->pTimeout = pTimeout;
}

String*
SamiRefreshMessageTimeoutBody::getPKey() {
    return pKey;
}
void
SamiRefreshMessageTimeoutBody::setPKey(String* pKey) {
    this->pKey = pKey;
}



} /* namespace Swagger */

