
#include "SamiDeny.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiDeny::SamiDeny() {
    init();
}

SamiDeny::~SamiDeny() {
    this->cleanup();
}

void
SamiDeny::init() {
    pUser = null;
    pRole = null;
    
}

void
SamiDeny::cleanup() {
    if(pUser != null) {
        pUser->RemoveAll(true);
        delete pUser;
        pUser = null;
    }
    if(pRole != null) {
        pRole->RemoveAll(true);
        delete pRole;
        pRole = null;
    }
    
}


SamiDeny*
SamiDeny::fromJson(String* json) {
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
SamiDeny::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            pUser = new ArrayList();
            
            jsonToValue(pUser, pUserVal, L"IList", L"String");
        }
        delete pUserKey;
        JsonString* pRoleKey = new JsonString(L"role");
        IJsonValue* pRoleVal = null;
        pJsonObject->GetValue(pRoleKey, pRoleVal);
        if(pRoleVal != null) {
            pRole = new ArrayList();
            
            jsonToValue(pRole, pRoleVal, L"IList", L"String");
        }
        delete pRoleKey;
        
    }
}

SamiDeny::SamiDeny(String* json) {
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
SamiDeny::asJson ()
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
SamiDeny::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "String", "array"));

    
    JsonString *pRoleKey = new JsonString(L"role");
    pJsonObject->Add(pRoleKey, toJson(getPRole(), "String", "array"));

    
    return pJsonObject;
}

IList*
SamiDeny::getPUser() {
    return pUser;
}
void
SamiDeny::setPUser(IList* pUser) {
    this->pUser = pUser;
}

IList*
SamiDeny::getPRole() {
    return pRole;
}
void
SamiDeny::setPRole(IList* pRole) {
    this->pRole = pRole;
}



} /* namespace Swagger */

