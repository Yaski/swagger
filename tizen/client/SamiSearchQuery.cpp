
#include "SamiSearchQuery.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSearchQuery::SamiSearchQuery() {
    init();
}

SamiSearchQuery::~SamiSearchQuery() {
    this->cleanup();
}

void
SamiSearchQuery::init() {
    pMust_not = null;
    pShould = null;
    pMust = null;
    
}

void
SamiSearchQuery::cleanup() {
    if(pMust_not != null) {
        pMust_not->RemoveAll(true);
        delete pMust_not;
        pMust_not = null;
    }
    if(pShould != null) {
        pShould->RemoveAll(true);
        delete pShould;
        pShould = null;
    }
    if(pMust != null) {
        pMust->RemoveAll(true);
        delete pMust;
        pMust = null;
    }
    
}


SamiSearchQuery*
SamiSearchQuery::fromJson(String* json) {
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
SamiSearchQuery::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMust_notKey = new JsonString(L"must_not");
        IJsonValue* pMust_notVal = null;
        pJsonObject->GetValue(pMust_notKey, pMust_notVal);
        if(pMust_notVal != null) {
            pMust_not = new ArrayList();
            
            jsonToValue(pMust_not, pMust_notVal, L"IList", L"String");
        }
        delete pMust_notKey;
        JsonString* pShouldKey = new JsonString(L"should");
        IJsonValue* pShouldVal = null;
        pJsonObject->GetValue(pShouldKey, pShouldVal);
        if(pShouldVal != null) {
            pShould = new ArrayList();
            
            jsonToValue(pShould, pShouldVal, L"IList", L"String");
        }
        delete pShouldKey;
        JsonString* pMustKey = new JsonString(L"must");
        IJsonValue* pMustVal = null;
        pJsonObject->GetValue(pMustKey, pMustVal);
        if(pMustVal != null) {
            pMust = new ArrayList();
            
            jsonToValue(pMust, pMustVal, L"IList", L"String");
        }
        delete pMustKey;
        
    }
}

SamiSearchQuery::SamiSearchQuery(String* json) {
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
SamiSearchQuery::asJson ()
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
SamiSearchQuery::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pMust_notKey = new JsonString(L"must_not");
    pJsonObject->Add(pMust_notKey, toJson(getPMustNot(), "String", "array"));

    
    JsonString *pShouldKey = new JsonString(L"should");
    pJsonObject->Add(pShouldKey, toJson(getPShould(), "String", "array"));

    
    JsonString *pMustKey = new JsonString(L"must");
    pJsonObject->Add(pMustKey, toJson(getPMust(), "String", "array"));

    
    return pJsonObject;
}

IList*
SamiSearchQuery::getPMustNot() {
    return pMust_not;
}
void
SamiSearchQuery::setPMustNot(IList* pMust_not) {
    this->pMust_not = pMust_not;
}

IList*
SamiSearchQuery::getPShould() {
    return pShould;
}
void
SamiSearchQuery::setPShould(IList* pShould) {
    this->pShould = pShould;
}

IList*
SamiSearchQuery::getPMust() {
    return pMust;
}
void
SamiSearchQuery::setPMust(IList* pMust) {
    this->pMust = pMust;
}



} /* namespace Swagger */

