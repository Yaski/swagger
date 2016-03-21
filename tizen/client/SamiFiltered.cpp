
#include "SamiFiltered.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFiltered::SamiFiltered() {
    init();
}

SamiFiltered::~SamiFiltered() {
    this->cleanup();
}

void
SamiFiltered::init() {
    pQuery = null;
    pFilter = null;
    
}

void
SamiFiltered::cleanup() {
    if(pQuery != null) {
        
        delete pQuery;
        pQuery = null;
    }
    if(pFilter != null) {
        
        delete pFilter;
        pFilter = null;
    }
    
}


SamiFiltered*
SamiFiltered::fromJson(String* json) {
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
SamiFiltered::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pQueryKey = new JsonString(L"query");
        IJsonValue* pQueryVal = null;
        pJsonObject->GetValue(pQueryKey, pQueryVal);
        if(pQueryVal != null) {
            
            pQuery = new SamiBoolQuery();
            jsonToValue(pQuery, pQueryVal, L"SamiBoolQuery", L"SamiBoolQuery");
        }
        delete pQueryKey;
        JsonString* pFilterKey = new JsonString(L"filter");
        IJsonValue* pFilterVal = null;
        pJsonObject->GetValue(pFilterKey, pFilterVal);
        if(pFilterVal != null) {
            
            pFilter = new SamiBoolFilter();
            jsonToValue(pFilter, pFilterVal, L"SamiBoolFilter", L"SamiBoolFilter");
        }
        delete pFilterKey;
        
    }
}

SamiFiltered::SamiFiltered(String* json) {
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
SamiFiltered::asJson ()
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
SamiFiltered::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pQueryKey = new JsonString(L"query");
    pJsonObject->Add(pQueryKey, toJson(getPQuery(), "SamiBoolQuery", ""));

    
    JsonString *pFilterKey = new JsonString(L"filter");
    pJsonObject->Add(pFilterKey, toJson(getPFilter(), "SamiBoolFilter", ""));

    
    return pJsonObject;
}

SamiBoolQuery*
SamiFiltered::getPQuery() {
    return pQuery;
}
void
SamiFiltered::setPQuery(SamiBoolQuery* pQuery) {
    this->pQuery = pQuery;
}

SamiBoolFilter*
SamiFiltered::getPFilter() {
    return pFilter;
}
void
SamiFiltered::setPFilter(SamiBoolFilter* pFilter) {
    this->pFilter = pFilter;
}



} /* namespace Swagger */

