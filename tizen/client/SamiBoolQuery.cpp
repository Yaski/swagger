
#include "SamiBoolQuery.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBoolQuery::SamiBoolQuery() {
    init();
}

SamiBoolQuery::~SamiBoolQuery() {
    this->cleanup();
}

void
SamiBoolQuery::init() {
    pBool = null;
    
}

void
SamiBoolQuery::cleanup() {
    if(pBool != null) {
        
        delete pBool;
        pBool = null;
    }
    
}


SamiBoolQuery*
SamiBoolQuery::fromJson(String* json) {
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
SamiBoolQuery::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBoolKey = new JsonString(L"bool");
        IJsonValue* pBoolVal = null;
        pJsonObject->GetValue(pBoolKey, pBoolVal);
        if(pBoolVal != null) {
            
            pBool = new SamiSearchQuery();
            jsonToValue(pBool, pBoolVal, L"SamiSearchQuery", L"SamiSearchQuery");
        }
        delete pBoolKey;
        
    }
}

SamiBoolQuery::SamiBoolQuery(String* json) {
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
SamiBoolQuery::asJson ()
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
SamiBoolQuery::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pBoolKey = new JsonString(L"bool");
    pJsonObject->Add(pBoolKey, toJson(getPBool(), "SamiSearchQuery", ""));

    
    return pJsonObject;
}

SamiSearchQuery*
SamiBoolQuery::getPBool() {
    return pBool;
}
void
SamiBoolQuery::setPBool(SamiSearchQuery* pBool) {
    this->pBool = pBool;
}



} /* namespace Swagger */

