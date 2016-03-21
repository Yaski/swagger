
#include "SamiCloudFile.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCloudFile::SamiCloudFile() {
    init();
}

SamiCloudFile::~SamiCloudFile() {
    this->cleanup();
}

void
SamiCloudFile::init() {
    p_id = null;
    p_type = null;
    pACL = null;
    pName = null;
    pSize = null;
    pUrl = null;
    pExpires = null;
    pContentType = null;
    
}

void
SamiCloudFile::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(p_type != null) {
        
        delete p_type;
        p_type = null;
    }
    if(pACL != null) {
        
        delete pACL;
        pACL = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pSize != null) {
        
        delete pSize;
        pSize = null;
    }
    if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
    if(pExpires != null) {
        
        delete pExpires;
        pExpires = null;
    }
    if(pContentType != null) {
        
        delete pContentType;
        pContentType = null;
    }
    
}


SamiCloudFile*
SamiCloudFile::fromJson(String* json) {
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
SamiCloudFile::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* p_typeKey = new JsonString(L"_type");
        IJsonValue* p_typeVal = null;
        pJsonObject->GetValue(p_typeKey, p_typeVal);
        if(p_typeVal != null) {
            
            p_type = new String();
            jsonToValue(p_type, p_typeVal, L"String", L"String");
        }
        delete p_typeKey;
        JsonString* pACLKey = new JsonString(L"ACL");
        IJsonValue* pACLVal = null;
        pJsonObject->GetValue(pACLKey, pACLVal);
        if(pACLVal != null) {
            
            pACL = new SamiACL();
            jsonToValue(pACL, pACLVal, L"SamiACL", L"SamiACL");
        }
        delete pACLKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pSizeKey = new JsonString(L"size");
        IJsonValue* pSizeVal = null;
        pJsonObject->GetValue(pSizeKey, pSizeVal);
        if(pSizeVal != null) {
            
            pSize = new Float();
            jsonToValue(pSize, pSizeVal, L"Float", L"Float");
        }
        delete pSizeKey;
        JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
        JsonString* pExpiresKey = new JsonString(L"expires");
        IJsonValue* pExpiresVal = null;
        pJsonObject->GetValue(pExpiresKey, pExpiresVal);
        if(pExpiresVal != null) {
            
            pExpires = new DateTime();
            jsonToValue(pExpires, pExpiresVal, L"DateTime", L"DateTime");
        }
        delete pExpiresKey;
        JsonString* pContentTypeKey = new JsonString(L"contentType");
        IJsonValue* pContentTypeVal = null;
        pJsonObject->GetValue(pContentTypeKey, pContentTypeVal);
        if(pContentTypeVal != null) {
            
            pContentType = new String();
            jsonToValue(pContentType, pContentTypeVal, L"String", L"String");
        }
        delete pContentTypeKey;
        
    }
}

SamiCloudFile::SamiCloudFile(String* json) {
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
SamiCloudFile::asJson ()
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
SamiCloudFile::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *p_typeKey = new JsonString(L"_type");
    pJsonObject->Add(p_typeKey, toJson(getPType(), "String", ""));

    
    JsonString *pACLKey = new JsonString(L"ACL");
    pJsonObject->Add(pACLKey, toJson(getPACL(), "SamiACL", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pSizeKey = new JsonString(L"size");
    pJsonObject->Add(pSizeKey, toJson(getPSize(), "Float", ""));

    
    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    
    JsonString *pExpiresKey = new JsonString(L"expires");
    pJsonObject->Add(pExpiresKey, toJson(getPExpires(), "DateTime", ""));

    
    JsonString *pContentTypeKey = new JsonString(L"contentType");
    pJsonObject->Add(pContentTypeKey, toJson(getPContentType(), "String", ""));

    
    return pJsonObject;
}

String*
SamiCloudFile::getPId() {
    return p_id;
}
void
SamiCloudFile::setPId(String* p_id) {
    this->p_id = p_id;
}

String*
SamiCloudFile::getPType() {
    return p_type;
}
void
SamiCloudFile::setPType(String* p_type) {
    this->p_type = p_type;
}

SamiACL*
SamiCloudFile::getPACL() {
    return pACL;
}
void
SamiCloudFile::setPACL(SamiACL* pACL) {
    this->pACL = pACL;
}

String*
SamiCloudFile::getPName() {
    return pName;
}
void
SamiCloudFile::setPName(String* pName) {
    this->pName = pName;
}

Float*
SamiCloudFile::getPSize() {
    return pSize;
}
void
SamiCloudFile::setPSize(Float* pSize) {
    this->pSize = pSize;
}

String*
SamiCloudFile::getPUrl() {
    return pUrl;
}
void
SamiCloudFile::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}

DateTime*
SamiCloudFile::getPExpires() {
    return pExpires;
}
void
SamiCloudFile::setPExpires(DateTime* pExpires) {
    this->pExpires = pExpires;
}

String*
SamiCloudFile::getPContentType() {
    return pContentType;
}
void
SamiCloudFile::setPContentType(String* pContentType) {
    this->pContentType = pContentType;
}



} /* namespace Swagger */

