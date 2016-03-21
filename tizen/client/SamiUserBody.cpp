
#include "SamiUserBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserBody::SamiUserBody() {
    init();
}

SamiUserBody::~SamiUserBody() {
    this->cleanup();
}

void
SamiUserBody::init() {
    pKey = null;
    pDocument = null;
    
}

void
SamiUserBody::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    if(pDocument != null) {
        
        delete pDocument;
        pDocument = null;
    }
    
}


SamiUserBody*
SamiUserBody::fromJson(String* json) {
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
SamiUserBody::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pDocumentKey = new JsonString(L"document");
        IJsonValue* pDocumentVal = null;
        pJsonObject->GetValue(pDocumentKey, pDocumentVal);
        if(pDocumentVal != null) {
            
            pDocument = new SamiCloudUser();
            jsonToValue(pDocument, pDocumentVal, L"SamiCloudUser", L"SamiCloudUser");
        }
        delete pDocumentKey;
        
    }
}

SamiUserBody::SamiUserBody(String* json) {
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
SamiUserBody::asJson ()
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
SamiUserBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pDocumentKey = new JsonString(L"document");
    pJsonObject->Add(pDocumentKey, toJson(getPDocument(), "SamiCloudUser", ""));

    
    return pJsonObject;
}

String*
SamiUserBody::getPKey() {
    return pKey;
}
void
SamiUserBody::setPKey(String* pKey) {
    this->pKey = pKey;
}

SamiCloudUser*
SamiUserBody::getPDocument() {
    return pDocument;
}
void
SamiUserBody::setPDocument(SamiCloudUser* pDocument) {
    this->pDocument = pDocument;
}



} /* namespace Swagger */

