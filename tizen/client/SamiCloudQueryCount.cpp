
#include "SamiCloudQueryCount.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudQueryCount::SamiCloudQueryCount() {
    init();
}

SamiCloudQueryCount::~SamiCloudQueryCount() {
    this->cleanup();
}

void
SamiCloudQueryCount::init() {
    pKey = null;
    pSkip = null;
    pLimit = null;
    pQuery = null;
    pSort = null;
    pSelect = null;
    
}

void
SamiCloudQueryCount::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    if(pSkip != null) {
        
        delete pSkip;
        pSkip = null;
    }
    if(pLimit != null) {
        
        delete pLimit;
        pLimit = null;
    }
    if(pQuery != null) {
        
        delete pQuery;
        pQuery = null;
    }
    if(pSort != null) {
        
        delete pSort;
        pSort = null;
    }
    if(pSelect != null) {
        
        delete pSelect;
        pSelect = null;
    }
    
}


SamiCloudQueryCount*
SamiCloudQueryCount::fromJson(String* json) {
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
SamiCloudQueryCount::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pSkipKey = new JsonString(L"skip");
        IJsonValue* pSkipVal = null;
        pJsonObject->GetValue(pSkipKey, pSkipVal);
        if(pSkipVal != null) {
            
            pSkip = null;
            jsonToValue(pSkip, pSkipVal, L"Integer", L"Integer");
        }
        delete pSkipKey;
        JsonString* pLimitKey = new JsonString(L"limit");
        IJsonValue* pLimitVal = null;
        pJsonObject->GetValue(pLimitKey, pLimitVal);
        if(pLimitVal != null) {
            
            pLimit = null;
            jsonToValue(pLimit, pLimitVal, L"Integer", L"Integer");
        }
        delete pLimitKey;
        JsonString* pQueryKey = new JsonString(L"query");
        IJsonValue* pQueryVal = null;
        pJsonObject->GetValue(pQueryKey, pQueryVal);
        if(pQueryVal != null) {
            
            pQuery = new SamiQuery();
            jsonToValue(pQuery, pQueryVal, L"SamiQuery", L"SamiQuery");
        }
        delete pQueryKey;
        JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            
            pSort = new String();
            jsonToValue(pSort, pSortVal, L"String", L"String");
        }
        delete pSortKey;
        JsonString* pSelectKey = new JsonString(L"select");
        IJsonValue* pSelectVal = null;
        pJsonObject->GetValue(pSelectKey, pSelectVal);
        if(pSelectVal != null) {
            
            pSelect = new String();
            jsonToValue(pSelect, pSelectVal, L"String", L"String");
        }
        delete pSelectKey;
        
    }
}

SamiCloudQueryCount::SamiCloudQueryCount(String* json) {
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
SamiCloudQueryCount::asJson ()
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
SamiCloudQueryCount::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pSkipKey = new JsonString(L"skip");
    pJsonObject->Add(pSkipKey, toJson(getPSkip(), "Integer", ""));

    
    JsonString *pLimitKey = new JsonString(L"limit");
    pJsonObject->Add(pLimitKey, toJson(getPLimit(), "Integer", ""));

    
    JsonString *pQueryKey = new JsonString(L"query");
    pJsonObject->Add(pQueryKey, toJson(getPQuery(), "SamiQuery", ""));

    
    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "String", ""));

    
    JsonString *pSelectKey = new JsonString(L"select");
    pJsonObject->Add(pSelectKey, toJson(getPSelect(), "String", ""));

    
    return pJsonObject;
}

String*
SamiCloudQueryCount::getPKey() {
    return pKey;
}
void
SamiCloudQueryCount::setPKey(String* pKey) {
    this->pKey = pKey;
}

Integer*
SamiCloudQueryCount::getPSkip() {
    return pSkip;
}
void
SamiCloudQueryCount::setPSkip(Integer* pSkip) {
    this->pSkip = pSkip;
}

Integer*
SamiCloudQueryCount::getPLimit() {
    return pLimit;
}
void
SamiCloudQueryCount::setPLimit(Integer* pLimit) {
    this->pLimit = pLimit;
}

SamiQuery*
SamiCloudQueryCount::getPQuery() {
    return pQuery;
}
void
SamiCloudQueryCount::setPQuery(SamiQuery* pQuery) {
    this->pQuery = pQuery;
}

String*
SamiCloudQueryCount::getPSort() {
    return pSort;
}
void
SamiCloudQueryCount::setPSort(String* pSort) {
    this->pSort = pSort;
}

String*
SamiCloudQueryCount::getPSelect() {
    return pSelect;
}
void
SamiCloudQueryCount::setPSelect(String* pSelect) {
    this->pSelect = pSelect;
}



} /* namespace Swagger */

