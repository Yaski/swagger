
#include "SamiCloudQueryDistinct.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudQueryDistinct::SamiCloudQueryDistinct() {
    init();
}

SamiCloudQueryDistinct::~SamiCloudQueryDistinct() {
    this->cleanup();
}

void
SamiCloudQueryDistinct::init() {
    pKey = null;
    pSkip = null;
    pLimit = null;
    pQuery = null;
    pSort = null;
    pSelect = null;
    pOnKey = null;
    
}

void
SamiCloudQueryDistinct::cleanup() {
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
    if(pOnKey != null) {
        pOnKey->RemoveAll(true);
        delete pOnKey;
        pOnKey = null;
    }
    
}


SamiCloudQueryDistinct*
SamiCloudQueryDistinct::fromJson(String* json) {
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
SamiCloudQueryDistinct::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pOnKeyKey = new JsonString(L"onKey");
        IJsonValue* pOnKeyVal = null;
        pJsonObject->GetValue(pOnKeyKey, pOnKeyVal);
        if(pOnKeyVal != null) {
            pOnKey = new ArrayList();
            
            jsonToValue(pOnKey, pOnKeyVal, L"IList", L"String");
        }
        delete pOnKeyKey;
        
    }
}

SamiCloudQueryDistinct::SamiCloudQueryDistinct(String* json) {
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
SamiCloudQueryDistinct::asJson ()
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
SamiCloudQueryDistinct::asJsonObject() {
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
    pJsonObject->Add(pSortKey, toJson(getPSort(), "SamiObject", ""));

    
    JsonString *pSelectKey = new JsonString(L"select");
    pJsonObject->Add(pSelectKey, toJson(getPSelect(), "SamiObject", ""));

    
    JsonString *pOnKeyKey = new JsonString(L"onKey");
    pJsonObject->Add(pOnKeyKey, toJson(getPOnKey(), "String", "array"));

    
    return pJsonObject;
}

String*
SamiCloudQueryDistinct::getPKey() {
    return pKey;
}
void
SamiCloudQueryDistinct::setPKey(String* pKey) {
    this->pKey = pKey;
}

Integer*
SamiCloudQueryDistinct::getPSkip() {
    return pSkip;
}
void
SamiCloudQueryDistinct::setPSkip(Integer* pSkip) {
    this->pSkip = pSkip;
}

Integer*
SamiCloudQueryDistinct::getPLimit() {
    return pLimit;
}
void
SamiCloudQueryDistinct::setPLimit(Integer* pLimit) {
    this->pLimit = pLimit;
}

SamiQuery*
SamiCloudQueryDistinct::getPQuery() {
    return pQuery;
}
void
SamiCloudQueryDistinct::setPQuery(SamiQuery* pQuery) {
    this->pQuery = pQuery;
}

SamiObject*
SamiCloudQueryDistinct::getPSort() {
    return pSort;
}
void
SamiCloudQueryDistinct::setPSort(SamiObject* pSort) {
    this->pSort = pSort;
}

SamiObject*
SamiCloudQueryDistinct::getPSelect() {
    return pSelect;
}
void
SamiCloudQueryDistinct::setPSelect(SamiObject* pSelect) {
    this->pSelect = pSelect;
}

IList*
SamiCloudQueryDistinct::getPOnKey() {
    return pOnKey;
}
void
SamiCloudQueryDistinct::setPOnKey(IList* pOnKey) {
    this->pOnKey = pOnKey;
}



} /* namespace Swagger */

