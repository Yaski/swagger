
#include "SamiCloudQueryId.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudQueryId::SamiCloudQueryId() {
    init();
}

SamiCloudQueryId::~SamiCloudQueryId() {
    this->cleanup();
}

void
SamiCloudQueryId::init() {
    pIncludeList = null;
    pInclude = null;
    p_id = null;
    
}

void
SamiCloudQueryId::cleanup() {
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
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    
}


SamiCloudQueryId*
SamiCloudQueryId::fromJson(String* json) {
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
SamiCloudQueryId::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        
    }
}

SamiCloudQueryId::SamiCloudQueryId(String* json) {
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
SamiCloudQueryId::asJson ()
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
SamiCloudQueryId::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIncludeListKey = new JsonString(L"$includeList");
    pJsonObject->Add(pIncludeListKey, toJson(getPIncludeList(), "String", "array"));

    
    JsonString *pIncludeKey = new JsonString(L"$include");
    pJsonObject->Add(pIncludeKey, toJson(getPInclude(), "String", "array"));

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    return pJsonObject;
}

IList*
SamiCloudQueryId::getPIncludeList() {
    return pIncludeList;
}
void
SamiCloudQueryId::setPIncludeList(IList* pIncludeList) {
    this->pIncludeList = pIncludeList;
}

IList*
SamiCloudQueryId::getPInclude() {
    return pInclude;
}
void
SamiCloudQueryId::setPInclude(IList* pInclude) {
    this->pInclude = pInclude;
}

String*
SamiCloudQueryId::getPId() {
    return p_id;
}
void
SamiCloudQueryId::setPId(String* p_id) {
    this->p_id = p_id;
}



} /* namespace Swagger */

