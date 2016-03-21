
#include "SamiPasswordChangeBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPasswordChangeBody::SamiPasswordChangeBody() {
    init();
}

SamiPasswordChangeBody::~SamiPasswordChangeBody() {
    this->cleanup();
}

void
SamiPasswordChangeBody::init() {
    pOldPassword = null;
    pNewPassword = null;
    pKey = null;
    
}

void
SamiPasswordChangeBody::cleanup() {
    if(pOldPassword != null) {
        
        delete pOldPassword;
        pOldPassword = null;
    }
    if(pNewPassword != null) {
        
        delete pNewPassword;
        pNewPassword = null;
    }
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    
}


SamiPasswordChangeBody*
SamiPasswordChangeBody::fromJson(String* json) {
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
SamiPasswordChangeBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pOldPasswordKey = new JsonString(L"oldPassword");
        IJsonValue* pOldPasswordVal = null;
        pJsonObject->GetValue(pOldPasswordKey, pOldPasswordVal);
        if(pOldPasswordVal != null) {
            
            pOldPassword = new String();
            jsonToValue(pOldPassword, pOldPasswordVal, L"String", L"String");
        }
        delete pOldPasswordKey;
        JsonString* pNewPasswordKey = new JsonString(L"newPassword");
        IJsonValue* pNewPasswordVal = null;
        pJsonObject->GetValue(pNewPasswordKey, pNewPasswordVal);
        if(pNewPasswordVal != null) {
            
            pNewPassword = new String();
            jsonToValue(pNewPassword, pNewPasswordVal, L"String", L"String");
        }
        delete pNewPasswordKey;
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

SamiPasswordChangeBody::SamiPasswordChangeBody(String* json) {
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
SamiPasswordChangeBody::asJson ()
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
SamiPasswordChangeBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pOldPasswordKey = new JsonString(L"oldPassword");
    pJsonObject->Add(pOldPasswordKey, toJson(getPOldPassword(), "String", ""));

    
    JsonString *pNewPasswordKey = new JsonString(L"newPassword");
    pJsonObject->Add(pNewPasswordKey, toJson(getPNewPassword(), "String", ""));

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    return pJsonObject;
}

String*
SamiPasswordChangeBody::getPOldPassword() {
    return pOldPassword;
}
void
SamiPasswordChangeBody::setPOldPassword(String* pOldPassword) {
    this->pOldPassword = pOldPassword;
}

String*
SamiPasswordChangeBody::getPNewPassword() {
    return pNewPassword;
}
void
SamiPasswordChangeBody::setPNewPassword(String* pNewPassword) {
    this->pNewPassword = pNewPassword;
}

String*
SamiPasswordChangeBody::getPKey() {
    return pKey;
}
void
SamiPasswordChangeBody::setPKey(String* pKey) {
    this->pKey = pKey;
}



} /* namespace Swagger */

