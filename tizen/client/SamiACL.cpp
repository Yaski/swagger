
#include "SamiACL.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiACL::SamiACL() {
    init();
}

SamiACL::~SamiACL() {
    this->cleanup();
}

void
SamiACL::init() {
    pRead = null;
    pWrite = null;
    
}

void
SamiACL::cleanup() {
    if(pRead != null) {
        
        delete pRead;
        pRead = null;
    }
    if(pWrite != null) {
        
        delete pWrite;
        pWrite = null;
    }
    
}


SamiACL*
SamiACL::fromJson(String* json) {
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
SamiACL::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pReadKey = new JsonString(L"read");
        IJsonValue* pReadVal = null;
        pJsonObject->GetValue(pReadKey, pReadVal);
        if(pReadVal != null) {
            
            pRead = new SamiRead();
            jsonToValue(pRead, pReadVal, L"SamiRead", L"SamiRead");
        }
        delete pReadKey;
        JsonString* pWriteKey = new JsonString(L"write");
        IJsonValue* pWriteVal = null;
        pJsonObject->GetValue(pWriteKey, pWriteVal);
        if(pWriteVal != null) {
            
            pWrite = new SamiWrite();
            jsonToValue(pWrite, pWriteVal, L"SamiWrite", L"SamiWrite");
        }
        delete pWriteKey;
        
    }
}

SamiACL::SamiACL(String* json) {
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
SamiACL::asJson ()
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
SamiACL::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pReadKey = new JsonString(L"read");
    pJsonObject->Add(pReadKey, toJson(getPRead(), "SamiRead", ""));

    
    JsonString *pWriteKey = new JsonString(L"write");
    pJsonObject->Add(pWriteKey, toJson(getPWrite(), "SamiWrite", ""));

    
    return pJsonObject;
}

SamiRead*
SamiACL::getPRead() {
    return pRead;
}
void
SamiACL::setPRead(SamiRead* pRead) {
    this->pRead = pRead;
}

SamiWrite*
SamiACL::getPWrite() {
    return pWrite;
}
void
SamiACL::setPWrite(SamiWrite* pWrite) {
    this->pWrite = pWrite;
}



} /* namespace Swagger */

