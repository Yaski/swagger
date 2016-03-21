
#include "SamiQuery.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiQuery::SamiQuery() {
    init();
}

SamiQuery::~SamiQuery() {
    this->cleanup();
}

void
SamiQuery::init() {
    pIncludeList = null;
    pInclude = null;
    
}

void
SamiQuery::cleanup() {
    if(pIncludeList != null) {
        pIncludeList->RemoveAll(true);
        delete pIncludeList;
        pIncludeList = null;
    }
    if(pInclude != null) {
        pInclude->RemoveAll(true);
        delete pInclude;
        pInclude = null;
    }
    
}


SamiQuery*
SamiQuery::fromJson(String* json) {
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
SamiQuery::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIncludeListKey = new JsonString(L"$includeList");
        IJsonValue* pIncludeListVal = null;
        pJsonObject->GetValue(pIncludeListKey, pIncludeListVal);
        if(pIncludeListVal != null) {
            pIncludeList = new ArrayList();
            
            jsonToValue(pIncludeList, pIncludeListVal, L"IList", L"String");
        }
        delete pIncludeListKey;
        JsonString* pIncludeKey = new JsonString(L"$include");
        IJsonValue* pIncludeVal = null;
        pJsonObject->GetValue(pIncludeKey, pIncludeVal);
        if(pIncludeVal != null) {
            pInclude = new ArrayList();
            
            jsonToValue(pInclude, pIncludeVal, L"IList", L"String");
        }
        delete pIncludeKey;
        
    }
}

SamiQuery::SamiQuery(String* json) {
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
SamiQuery::asJson ()
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
SamiQuery::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIncludeListKey = new JsonString(L"$includeList");
    pJsonObject->Add(pIncludeListKey, toJson(getPIncludeList(), "String", "array"));

    
    JsonString *pIncludeKey = new JsonString(L"$include");
    pJsonObject->Add(pIncludeKey, toJson(getPInclude(), "String", "array"));

    
    return pJsonObject;
}

IList*
SamiQuery::getPIncludeList() {
    return pIncludeList;
}
void
SamiQuery::setPIncludeList(IList* pIncludeList) {
    this->pIncludeList = pIncludeList;
}

IList*
SamiQuery::getPInclude() {
    return pInclude;
}
void
SamiQuery::setPInclude(IList* pInclude) {
    this->pInclude = pInclude;
}



} /* namespace Swagger */

