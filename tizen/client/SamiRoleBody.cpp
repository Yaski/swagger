
#include "SamiRoleBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRoleBody::SamiRoleBody() {
    init();
}

SamiRoleBody::~SamiRoleBody() {
    this->cleanup();
}

void
SamiRoleBody::init() {
    pKey = null;
    pDocument = null;
    
}

void
SamiRoleBody::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    if(pDocument != null) {
        
        delete pDocument;
        pDocument = null;
    }
    
}


SamiRoleBody*
SamiRoleBody::fromJson(String* json) {
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
SamiRoleBody::fromJsonObject(IJsonValue* pJson) {
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
            
            pDocument = new SamiCloudRole();
            jsonToValue(pDocument, pDocumentVal, L"SamiCloudRole", L"SamiCloudRole");
        }
        delete pDocumentKey;
        
    }
}

SamiRoleBody::SamiRoleBody(String* json) {
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
SamiRoleBody::asJson ()
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
SamiRoleBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pDocumentKey = new JsonString(L"document");
    pJsonObject->Add(pDocumentKey, toJson(getPDocument(), "SamiCloudRole", ""));

    
    return pJsonObject;
}

String*
SamiRoleBody::getPKey() {
    return pKey;
}
void
SamiRoleBody::setPKey(String* pKey) {
    this->pKey = pKey;
}

SamiCloudRole*
SamiRoleBody::getPDocument() {
    return pDocument;
}
void
SamiRoleBody::setPDocument(SamiCloudRole* pDocument) {
    this->pDocument = pDocument;
}



} /* namespace Swagger */

