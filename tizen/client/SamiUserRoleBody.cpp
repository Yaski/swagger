
#include "SamiUserRoleBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserRoleBody::SamiUserRoleBody() {
    init();
}

SamiUserRoleBody::~SamiUserRoleBody() {
    this->cleanup();
}

void
SamiUserRoleBody::init() {
    pKey = null;
    pRole = null;
    pUser = null;
    
}

void
SamiUserRoleBody::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
    if(pRole != null) {
        
        delete pRole;
        pRole = null;
    }
    if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
    
}


SamiUserRoleBody*
SamiUserRoleBody::fromJson(String* json) {
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
SamiUserRoleBody::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pRoleKey = new JsonString(L"role");
        IJsonValue* pRoleVal = null;
        pJsonObject->GetValue(pRoleKey, pRoleVal);
        if(pRoleVal != null) {
            
            pRole = new SamiCloudRole();
            jsonToValue(pRole, pRoleVal, L"SamiCloudRole", L"SamiCloudRole");
        }
        delete pRoleKey;
        JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiCloudUser();
            jsonToValue(pUser, pUserVal, L"SamiCloudUser", L"SamiCloudUser");
        }
        delete pUserKey;
        
    }
}

SamiUserRoleBody::SamiUserRoleBody(String* json) {
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
SamiUserRoleBody::asJson ()
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
SamiUserRoleBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    
    JsonString *pRoleKey = new JsonString(L"role");
    pJsonObject->Add(pRoleKey, toJson(getPRole(), "SamiCloudRole", ""));

    
    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiCloudUser", ""));

    
    return pJsonObject;
}

String*
SamiUserRoleBody::getPKey() {
    return pKey;
}
void
SamiUserRoleBody::setPKey(String* pKey) {
    this->pKey = pKey;
}

SamiCloudRole*
SamiUserRoleBody::getPRole() {
    return pRole;
}
void
SamiUserRoleBody::setPRole(SamiCloudRole* pRole) {
    this->pRole = pRole;
}

SamiCloudUser*
SamiUserRoleBody::getPUser() {
    return pUser;
}
void
SamiUserRoleBody::setPUser(SamiCloudUser* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

