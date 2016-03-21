
#include "SamiCloudSearch.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudSearch::SamiCloudSearch() {
    init();
}

SamiCloudSearch::~SamiCloudSearch() {
    this->cleanup();
}

void
SamiCloudSearch::init() {
    pQuery = null;
    pSort = null;
    pCollectionName = null;
    pKey = null;
    pSkip = null;
    pLimit = null;
    
}

void
SamiCloudSearch::cleanup() {
    if(pQuery != null) {
        
        delete pQuery;
        pQuery = null;
    }
    if(pSort != null) {
        pSort->RemoveAll(true);
        delete pSort;
        pSort = null;
    }
    if(pCollectionName != null) {
        
        delete pCollectionName;
        pCollectionName = null;
    }
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
    
}


SamiCloudSearch*
SamiCloudSearch::fromJson(String* json) {
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
SamiCloudSearch::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pQueryKey = new JsonString(L"query");
        IJsonValue* pQueryVal = null;
        pJsonObject->GetValue(pQueryKey, pQueryVal);
        if(pQueryVal != null) {
            
            pQuery = new SamiFilterBody();
            jsonToValue(pQuery, pQueryVal, L"SamiFilterBody", L"SamiFilterBody");
        }
        delete pQueryKey;
        JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            pSort = new ArrayList();
            
            jsonToValue(pSort, pSortVal, L"IList", L"String");
        }
        delete pSortKey;
        JsonString* pCollectionNameKey = new JsonString(L"collectionName");
        IJsonValue* pCollectionNameVal = null;
        pJsonObject->GetValue(pCollectionNameKey, pCollectionNameVal);
        if(pCollectionNameVal != null) {
            
            pCollectionName = new String();
            jsonToValue(pCollectionName, pCollectionNameVal, L"String", L"String");
        }
        delete pCollectionNameKey;
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
        
    }
}

SamiCloudSearch::SamiCloudSearch(String* json) {
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
SamiCloudSearch::asJson ()
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
SamiCloudSearch::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pQueryKey = new JsonString(L"query");
    pJsonObject->Add(pQueryKey, toJson(getPQuery(), "SamiFilterBody", ""));

    
    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "String", "array"));

    
    JsonString *pCollectionNameKey = new JsonString(L"collectionName");
    pJsonObject->Add(pCollectionNameKey, toJson(getPCollectionName(), "String", ""));

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pSkipKey = new JsonString(L"skip");
    pJsonObject->Add(pSkipKey, toJson(getPSkip(), "Integer", ""));

    
    JsonString *pLimitKey = new JsonString(L"limit");
    pJsonObject->Add(pLimitKey, toJson(getPLimit(), "Integer", ""));

    
    return pJsonObject;
}

SamiFilterBody*
SamiCloudSearch::getPQuery() {
    return pQuery;
}
void
SamiCloudSearch::setPQuery(SamiFilterBody* pQuery) {
    this->pQuery = pQuery;
}

IList*
SamiCloudSearch::getPSort() {
    return pSort;
}
void
SamiCloudSearch::setPSort(IList* pSort) {
    this->pSort = pSort;
}

String*
SamiCloudSearch::getPCollectionName() {
    return pCollectionName;
}
void
SamiCloudSearch::setPCollectionName(String* pCollectionName) {
    this->pCollectionName = pCollectionName;
}

String*
SamiCloudSearch::getPKey() {
    return pKey;
}
void
SamiCloudSearch::setPKey(String* pKey) {
    this->pKey = pKey;
}

Integer*
SamiCloudSearch::getPSkip() {
    return pSkip;
}
void
SamiCloudSearch::setPSkip(Integer* pSkip) {
    this->pSkip = pSkip;
}

Integer*
SamiCloudSearch::getPLimit() {
    return pLimit;
}
void
SamiCloudSearch::setPLimit(Integer* pLimit) {
    this->pLimit = pLimit;
}



} /* namespace Swagger */

