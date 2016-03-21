
#include "SamiBoolFilter.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBoolFilter::SamiBoolFilter() {
    init();
}

SamiBoolFilter::~SamiBoolFilter() {
    this->cleanup();
}

void
SamiBoolFilter::init() {
    pBool = null;
    
}

void
SamiBoolFilter::cleanup() {
    if(pBool != null) {
        
        delete pBool;
        pBool = null;
    }
    
}


SamiBoolFilter*
SamiBoolFilter::fromJson(String* json) {
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
SamiBoolFilter::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBoolKey = new JsonString(L"bool");
        IJsonValue* pBoolVal = null;
        pJsonObject->GetValue(pBoolKey, pBoolVal);
        if(pBoolVal != null) {
            
            pBool = new SamiSearchFilter();
            jsonToValue(pBool, pBoolVal, L"SamiSearchFilter", L"SamiSearchFilter");
        }
        delete pBoolKey;
        
    }
}

SamiBoolFilter::SamiBoolFilter(String* json) {
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
SamiBoolFilter::asJson ()
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
SamiBoolFilter::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pBoolKey = new JsonString(L"bool");
    pJsonObject->Add(pBoolKey, toJson(getPBool(), "SamiSearchFilter", ""));

    
    return pJsonObject;
}

SamiSearchFilter*
SamiBoolFilter::getPBool() {
    return pBool;
}
void
SamiBoolFilter::setPBool(SamiSearchFilter* pBool) {
    this->pBool = pBool;
}



} /* namespace Swagger */

