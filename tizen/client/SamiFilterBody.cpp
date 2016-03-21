
#include "SamiFilterBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFilterBody::SamiFilterBody() {
    init();
}

SamiFilterBody::~SamiFilterBody() {
    this->cleanup();
}

void
SamiFilterBody::init() {
    pFiltered = null;
    
}

void
SamiFilterBody::cleanup() {
    if(pFiltered != null) {
        
        delete pFiltered;
        pFiltered = null;
    }
    
}


SamiFilterBody*
SamiFilterBody::fromJson(String* json) {
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
SamiFilterBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pFilteredKey = new JsonString(L"filtered");
        IJsonValue* pFilteredVal = null;
        pJsonObject->GetValue(pFilteredKey, pFilteredVal);
        if(pFilteredVal != null) {
            
            pFiltered = new SamiFiltered();
            jsonToValue(pFiltered, pFilteredVal, L"SamiFiltered", L"SamiFiltered");
        }
        delete pFilteredKey;
        
    }
}

SamiFilterBody::SamiFilterBody(String* json) {
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
SamiFilterBody::asJson ()
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
SamiFilterBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pFilteredKey = new JsonString(L"filtered");
    pJsonObject->Add(pFilteredKey, toJson(getPFiltered(), "SamiFiltered", ""));

    
    return pJsonObject;
}

SamiFiltered*
SamiFilterBody::getPFiltered() {
    return pFiltered;
}
void
SamiFilterBody::setPFiltered(SamiFiltered* pFiltered) {
    this->pFiltered = pFiltered;
}



} /* namespace Swagger */

