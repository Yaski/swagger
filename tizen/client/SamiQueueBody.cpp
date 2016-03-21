
#include "SamiQueueBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiQueueBody::SamiQueueBody() {
    init();
}

SamiQueueBody::~SamiQueueBody() {
    this->cleanup();
}

void
SamiQueueBody::init() {
    pDocument = null;
    pKey = null;
    
}

void
SamiQueueBody::cleanup() {
    if(pDocument != null) {
        
        delete pDocument;
        pDocument = null;
    }
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    
}


SamiQueueBody*
SamiQueueBody::fromJson(String* json) {
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
SamiQueueBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDocumentKey = new JsonString(L"document");
        IJsonValue* pDocumentVal = null;
        pJsonObject->GetValue(pDocumentKey, pDocumentVal);
        if(pDocumentVal != null) {
            
            pDocument = new SamiQueue();
            jsonToValue(pDocument, pDocumentVal, L"SamiQueue", L"SamiQueue");
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

SamiQueueBody::SamiQueueBody(String* json) {
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
SamiQueueBody::asJson ()
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
SamiQueueBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pDocumentKey = new JsonString(L"document");
    pJsonObject->Add(pDocumentKey, toJson(getPDocument(), "SamiQueue", ""));

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    return pJsonObject;
}

SamiQueue*
SamiQueueBody::getPDocument() {
    return pDocument;
}
void
SamiQueueBody::setPDocument(SamiQueue* pDocument) {
    this->pDocument = pDocument;
}

String*
SamiQueueBody::getPKey() {
    return pKey;
}
void
SamiQueueBody::setPKey(String* pKey) {
    this->pKey = pKey;
}



} /* namespace Swagger */

