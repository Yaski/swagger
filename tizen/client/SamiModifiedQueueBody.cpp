
#include "SamiModifiedQueueBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiModifiedQueueBody::SamiModifiedQueueBody() {
    init();
}

SamiModifiedQueueBody::~SamiModifiedQueueBody() {
    this->cleanup();
}

void
SamiModifiedQueueBody::init() {
    pDocument = null;
    pKey = null;
    
}

void
SamiModifiedQueueBody::cleanup() {
    if(pDocument != null) {
        
        delete pDocument;
        pDocument = null;
    }
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    
}


SamiModifiedQueueBody*
SamiModifiedQueueBody::fromJson(String* json) {
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
SamiModifiedQueueBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDocumentKey = new JsonString(L"document");
        IJsonValue* pDocumentVal = null;
        pJsonObject->GetValue(pDocumentKey, pDocumentVal);
        if(pDocumentVal != null) {
            
            pDocument = new SamiModifiedQueue();
            jsonToValue(pDocument, pDocumentVal, L"SamiModifiedQueue", L"SamiModifiedQueue");
        }
        delete pDocumentKey;
        JsonString* pKeyKey = new JsonString(L"key");
        IJsonValue* pKeyVal = null;
        pJsonObject->GetValue(pKeyKey, pKeyVal);
        if(pKeyVal != null) {
            
            pKey = new String();
            jsonToValue(pKey, pKeyVal, L"String", L"String");
        }
        delete pKeyKey;
        
    }
}

SamiModifiedQueueBody::SamiModifiedQueueBody(String* json) {
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
SamiModifiedQueueBody::asJson ()
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
SamiModifiedQueueBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pDocumentKey = new JsonString(L"document");
    pJsonObject->Add(pDocumentKey, toJson(getPDocument(), "SamiModifiedQueue", ""));

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    return pJsonObject;
}

SamiModifiedQueue*
SamiModifiedQueueBody::getPDocument() {
    return pDocument;
}
void
SamiModifiedQueueBody::setPDocument(SamiModifiedQueue* pDocument) {
    this->pDocument = pDocument;
}

String*
SamiModifiedQueueBody::getPKey() {
    return pKey;
}
void
SamiModifiedQueueBody::setPKey(String* pKey) {
    this->pKey = pKey;
}



} /* namespace Swagger */

