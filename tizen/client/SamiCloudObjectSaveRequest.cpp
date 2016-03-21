
#include "SamiCloudObjectSaveRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudObjectSaveRequest::SamiCloudObjectSaveRequest() {
    init();
}

SamiCloudObjectSaveRequest::~SamiCloudObjectSaveRequest() {
    this->cleanup();
}

void
SamiCloudObjectSaveRequest::init() {
    pKey = null;
    pDocument = null;
    
}

void
SamiCloudObjectSaveRequest::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    if(pDocument != null) {
        
        delete pDocument;
        pDocument = null;
    }
    
}


SamiCloudObjectSaveRequest*
SamiCloudObjectSaveRequest::fromJson(String* json) {
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
SamiCloudObjectSaveRequest::fromJsonObject(IJsonValue* pJson) {
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
            
            pDocument = new SamiCloudObject();
            jsonToValue(pDocument, pDocumentVal, L"SamiCloudObject", L"SamiCloudObject");
        }
        delete pDocumentKey;
        
    }
}

SamiCloudObjectSaveRequest::SamiCloudObjectSaveRequest(String* json) {
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
SamiCloudObjectSaveRequest::asJson ()
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
SamiCloudObjectSaveRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pDocumentKey = new JsonString(L"document");
    pJsonObject->Add(pDocumentKey, toJson(getPDocument(), "SamiCloudObject", ""));

    
    return pJsonObject;
}

String*
SamiCloudObjectSaveRequest::getPKey() {
    return pKey;
}
void
SamiCloudObjectSaveRequest::setPKey(String* pKey) {
    this->pKey = pKey;
}

SamiCloudObject*
SamiCloudObjectSaveRequest::getPDocument() {
    return pDocument;
}
void
SamiCloudObjectSaveRequest::setPDocument(SamiCloudObject* pDocument) {
    this->pDocument = pDocument;
}



} /* namespace Swagger */

