
#include "SamiCloudQueryFindById.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudQueryFindById::SamiCloudQueryFindById() {
    init();
}

SamiCloudQueryFindById::~SamiCloudQueryFindById() {
    this->cleanup();
}

void
SamiCloudQueryFindById::init() {
    pKey = null;
    pSkip = null;
    pLimit = null;
    pQuery = null;
    pSort = null;
    pSelect = null;
    
}

void
SamiCloudQueryFindById::cleanup() {
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


SamiCloudQueryFindById*
SamiCloudQueryFindById::fromJson(String* json) {
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
SamiCloudQueryFindById::fromJsonObject(IJsonValue* pJson) {
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
            
            pQuery = new SamiCloudQueryId();
            jsonToValue(pQuery, pQueryVal, L"SamiCloudQueryId", L"SamiCloudQueryId");
        }
        delete pQueryKey;
        JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            
            pSort = null;
            jsonToValue(pSort, pSortVal, L"SamiObject", L"SamiObject");
        }
        delete pSortKey;
        JsonString* pSelectKey = new JsonString(L"select");
        IJsonValue* pSelectVal = null;
        pJsonObject->GetValue(pSelectKey, pSelectVal);
        if(pSelectVal != null) {
            
            pSelect = null;
            jsonToValue(pSelect, pSelectVal, L"SamiObject", L"SamiObject");
        }
        delete pSelectKey;
        
    }
}

SamiCloudQueryFindById::SamiCloudQueryFindById(String* json) {
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
SamiCloudQueryFindById::asJson ()
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
SamiCloudQueryFindById::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pSkipKey = new JsonString(L"skip");
    pJsonObject->Add(pSkipKey, toJson(getPSkip(), "Integer", ""));

    
    JsonString *pLimitKey = new JsonString(L"limit");
    pJsonObject->Add(pLimitKey, toJson(getPLimit(), "Integer", ""));

    
    JsonString *pQueryKey = new JsonString(L"query");
    pJsonObject->Add(pQueryKey, toJson(getPQuery(), "SamiCloudQueryId", ""));

    
    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "SamiObject", ""));

    
    JsonString *pSelectKey = new JsonString(L"select");
    pJsonObject->Add(pSelectKey, toJson(getPSelect(), "SamiObject", ""));

    
    return pJsonObject;
}

String*
SamiCloudQueryFindById::getPKey() {
    return pKey;
}
void
SamiCloudQueryFindById::setPKey(String* pKey) {
    this->pKey = pKey;
}

Integer*
SamiCloudQueryFindById::getPSkip() {
    return pSkip;
}
void
SamiCloudQueryFindById::setPSkip(Integer* pSkip) {
    this->pSkip = pSkip;
}

Integer*
SamiCloudQueryFindById::getPLimit() {
    return pLimit;
}
void
SamiCloudQueryFindById::setPLimit(Integer* pLimit) {
    this->pLimit = pLimit;
}

SamiCloudQueryId*
SamiCloudQueryFindById::getPQuery() {
    return pQuery;
}
void
SamiCloudQueryFindById::setPQuery(SamiCloudQueryId* pQuery) {
    this->pQuery = pQuery;
}

SamiObject*
SamiCloudQueryFindById::getPSort() {
    return pSort;
}
void
SamiCloudQueryFindById::setPSort(SamiObject* pSort) {
    this->pSort = pSort;
}

SamiObject*
SamiCloudQueryFindById::getPSelect() {
    return pSelect;
}
void
SamiCloudQueryFindById::setPSelect(SamiObject* pSelect) {
    this->pSelect = pSelect;
}



} /* namespace Swagger */

