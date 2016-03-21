
#include "SamiWrite.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiWrite::SamiWrite() {
    init();
}

SamiWrite::~SamiWrite() {
    this->cleanup();
}

void
SamiWrite::init() {
    pAllow = null;
    pDeny = null;
    
}

void
SamiWrite::cleanup() {
    if(pAllow != null) {
        
        delete pAllow;
        pAllow = null;
    }
    if(pDeny != null) {
        
        delete pDeny;
        pDeny = null;
    }
    
}


SamiWrite*
SamiWrite::fromJson(String* json) {
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
SamiWrite::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAllowKey = new JsonString(L"allow");
        IJsonValue* pAllowVal = null;
        pJsonObject->GetValue(pAllowKey, pAllowVal);
        if(pAllowVal != null) {
            
            pAllow = new SamiAllow();
            jsonToValue(pAllow, pAllowVal, L"SamiAllow", L"SamiAllow");
        }
        delete pAllowKey;
        JsonString* pDenyKey = new JsonString(L"deny");
        IJsonValue* pDenyVal = null;
        pJsonObject->GetValue(pDenyKey, pDenyVal);
        if(pDenyVal != null) {
            
            pDeny = new SamiDeny();
            jsonToValue(pDeny, pDenyVal, L"SamiDeny", L"SamiDeny");
        }
        delete pDenyKey;
        
    }
}

SamiWrite::SamiWrite(String* json) {
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
SamiWrite::asJson ()
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
SamiWrite::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pAllowKey = new JsonString(L"allow");
    pJsonObject->Add(pAllowKey, toJson(getPAllow(), "SamiAllow", ""));

    
    JsonString *pDenyKey = new JsonString(L"deny");
    pJsonObject->Add(pDenyKey, toJson(getPDeny(), "SamiDeny", ""));

    
    return pJsonObject;
}

SamiAllow*
SamiWrite::getPAllow() {
    return pAllow;
}
void
SamiWrite::setPAllow(SamiAllow* pAllow) {
    this->pAllow = pAllow;
}

SamiDeny*
SamiWrite::getPDeny() {
    return pDeny;
}
void
SamiWrite::setPDeny(SamiDeny* pDeny) {
    this->pDeny = pDeny;
}



} /* namespace Swagger */

