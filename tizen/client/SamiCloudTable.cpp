
#include "SamiCloudTable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudTable::SamiCloudTable() {
    init();
}

SamiCloudTable::~SamiCloudTable() {
    this->cleanup();
}

void
SamiCloudTable::init() {
    pName = null;
    pAppId = null;
    pType = null;
    pColumns = null;
    
}

void
SamiCloudTable::cleanup() {
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pAppId != null) {
        
        delete pAppId;
        pAppId = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pColumns != null) {
        pColumns->RemoveAll(true);
        delete pColumns;
        pColumns = null;
    }
    
}


SamiCloudTable*
SamiCloudTable::fromJson(String* json) {
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
SamiCloudTable::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pAppIdKey = new JsonString(L"appId");
        IJsonValue* pAppIdVal = null;
        pJsonObject->GetValue(pAppIdKey, pAppIdVal);
        if(pAppIdVal != null) {
            
            pAppId = new String();
            jsonToValue(pAppId, pAppIdVal, L"String", L"String");
        }
        delete pAppIdKey;
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pColumnsKey = new JsonString(L"columns");
        IJsonValue* pColumnsVal = null;
        pJsonObject->GetValue(pColumnsKey, pColumnsVal);
        if(pColumnsVal != null) {
            pColumns = new ArrayList();
            
            jsonToValue(pColumns, pColumnsVal, L"IList", L"SamiColumn");
        }
        delete pColumnsKey;
        
    }
}

SamiCloudTable::SamiCloudTable(String* json) {
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
SamiCloudTable::asJson ()
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
SamiCloudTable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pAppIdKey = new JsonString(L"appId");
    pJsonObject->Add(pAppIdKey, toJson(getPAppId(), "String", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pColumnsKey = new JsonString(L"columns");
    pJsonObject->Add(pColumnsKey, toJson(getPColumns(), "SamiColumn", "array"));

    
    return pJsonObject;
}

String*
SamiCloudTable::getPName() {
    return pName;
}
void
SamiCloudTable::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiCloudTable::getPAppId() {
    return pAppId;
}
void
SamiCloudTable::setPAppId(String* pAppId) {
    this->pAppId = pAppId;
}

String*
SamiCloudTable::getPType() {
    return pType;
}
void
SamiCloudTable::setPType(String* pType) {
    this->pType = pType;
}

IList*
SamiCloudTable::getPColumns() {
    return pColumns;
}
void
SamiCloudTable::setPColumns(IList* pColumns) {
    this->pColumns = pColumns;
}



} /* namespace Swagger */

