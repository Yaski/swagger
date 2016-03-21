
#include "SamiFileBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFileBody::SamiFileBody() {
    init();
}

SamiFileBody::~SamiFileBody() {
    this->cleanup();
}

void
SamiFileBody::init() {
    pKey = null;
    pData = null;
    pFileObj = null;
    
}

void
SamiFileBody::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    if(pData != null) {
        
        delete pData;
        pData = null;
    }
    if(pFileObj != null) {
        
        delete pFileObj;
        pFileObj = null;
    }
    
}


SamiFileBody*
SamiFileBody::fromJson(String* json) {
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
SamiFileBody::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pDataKey = new JsonString(L"data");
        IJsonValue* pDataVal = null;
        pJsonObject->GetValue(pDataKey, pDataVal);
        if(pDataVal != null) {
            
            pData = new String();
            jsonToValue(pData, pDataVal, L"String", L"String");
        }
        delete pDataKey;
        JsonString* pFileObjKey = new JsonString(L"fileObj");
        IJsonValue* pFileObjVal = null;
        pJsonObject->GetValue(pFileObjKey, pFileObjVal);
        if(pFileObjVal != null) {
            
            pFileObj = new SamiCloudFile();
            jsonToValue(pFileObj, pFileObjVal, L"SamiCloudFile", L"SamiCloudFile");
        }
        delete pFileObjKey;
        
    }
}

SamiFileBody::SamiFileBody(String* json) {
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
SamiFileBody::asJson ()
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
SamiFileBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pDataKey = new JsonString(L"data");
    pJsonObject->Add(pDataKey, toJson(getPData(), "String", ""));

    
    JsonString *pFileObjKey = new JsonString(L"fileObj");
    pJsonObject->Add(pFileObjKey, toJson(getPFileObj(), "SamiCloudFile", ""));

    
    return pJsonObject;
}

String*
SamiFileBody::getPKey() {
    return pKey;
}
void
SamiFileBody::setPKey(String* pKey) {
    this->pKey = pKey;
}

String*
SamiFileBody::getPData() {
    return pData;
}
void
SamiFileBody::setPData(String* pData) {
    this->pData = pData;
}

SamiCloudFile*
SamiFileBody::getPFileObj() {
    return pFileObj;
}
void
SamiFileBody::setPFileObj(SamiCloudFile* pFileObj) {
    this->pFileObj = pFileObj;
}



} /* namespace Swagger */

