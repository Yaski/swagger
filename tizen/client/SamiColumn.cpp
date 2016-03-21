
#include "SamiColumn.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiColumn::SamiColumn() {
    init();
}

SamiColumn::~SamiColumn() {
    this->cleanup();
}

void
SamiColumn::init() {
    pName = null;
    pDataType = null;
    p_type = null;
    pRequired = null;
    pUnique = null;
    pRelatedTo = null;
    pRelationType = null;
    pIsDeletable = null;
    pIsEditable = null;
    pIsRenamable = null;
    
}

void
SamiColumn::cleanup() {
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pDataType != null) {
        
        delete pDataType;
        pDataType = null;
    }
    if(p_type != null) {
        
        delete p_type;
        p_type = null;
    }
    if(pRequired != null) {
        
        delete pRequired;
        pRequired = null;
    }
    if(pUnique != null) {
        
        delete pUnique;
        pUnique = null;
    }
    if(pRelatedTo != null) {
        
        delete pRelatedTo;
        pRelatedTo = null;
    }
    if(pRelationType != null) {
        
        delete pRelationType;
        pRelationType = null;
    }
    if(pIsDeletable != null) {
        
        delete pIsDeletable;
        pIsDeletable = null;
    }
    if(pIsEditable != null) {
        
        delete pIsEditable;
        pIsEditable = null;
    }
    if(pIsRenamable != null) {
        
        delete pIsRenamable;
        pIsRenamable = null;
    }
    
}


SamiColumn*
SamiColumn::fromJson(String* json) {
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
SamiColumn::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pDataTypeKey = new JsonString(L"dataType");
        IJsonValue* pDataTypeVal = null;
        pJsonObject->GetValue(pDataTypeKey, pDataTypeVal);
        if(pDataTypeVal != null) {
            
            pDataType = new String();
            jsonToValue(pDataType, pDataTypeVal, L"String", L"String");
        }
        delete pDataTypeKey;
        JsonString* p_typeKey = new JsonString(L"_type");
        IJsonValue* p_typeVal = null;
        pJsonObject->GetValue(p_typeKey, p_typeVal);
        if(p_typeVal != null) {
            
            p_type = new String();
            jsonToValue(p_type, p_typeVal, L"String", L"String");
        }
        delete p_typeKey;
        JsonString* pRequiredKey = new JsonString(L"required");
        IJsonValue* pRequiredVal = null;
        pJsonObject->GetValue(pRequiredKey, pRequiredVal);
        if(pRequiredVal != null) {
            
            pRequired = new Boolean(false);
            jsonToValue(pRequired, pRequiredVal, L"Boolean", L"Boolean");
        }
        delete pRequiredKey;
        JsonString* pUniqueKey = new JsonString(L"unique");
        IJsonValue* pUniqueVal = null;
        pJsonObject->GetValue(pUniqueKey, pUniqueVal);
        if(pUniqueVal != null) {
            
            pUnique = new Boolean(false);
            jsonToValue(pUnique, pUniqueVal, L"Boolean", L"Boolean");
        }
        delete pUniqueKey;
        JsonString* pRelatedToKey = new JsonString(L"relatedTo");
        IJsonValue* pRelatedToVal = null;
        pJsonObject->GetValue(pRelatedToKey, pRelatedToVal);
        if(pRelatedToVal != null) {
            
            pRelatedTo = new String();
            jsonToValue(pRelatedTo, pRelatedToVal, L"String", L"String");
        }
        delete pRelatedToKey;
        JsonString* pRelationTypeKey = new JsonString(L"relationType");
        IJsonValue* pRelationTypeVal = null;
        pJsonObject->GetValue(pRelationTypeKey, pRelationTypeVal);
        if(pRelationTypeVal != null) {
            
            pRelationType = new String();
            jsonToValue(pRelationType, pRelationTypeVal, L"String", L"String");
        }
        delete pRelationTypeKey;
        JsonString* pIsDeletableKey = new JsonString(L"isDeletable");
        IJsonValue* pIsDeletableVal = null;
        pJsonObject->GetValue(pIsDeletableKey, pIsDeletableVal);
        if(pIsDeletableVal != null) {
            
            pIsDeletable = new Boolean(false);
            jsonToValue(pIsDeletable, pIsDeletableVal, L"Boolean", L"Boolean");
        }
        delete pIsDeletableKey;
        JsonString* pIsEditableKey = new JsonString(L"isEditable");
        IJsonValue* pIsEditableVal = null;
        pJsonObject->GetValue(pIsEditableKey, pIsEditableVal);
        if(pIsEditableVal != null) {
            
            pIsEditable = new Boolean(false);
            jsonToValue(pIsEditable, pIsEditableVal, L"Boolean", L"Boolean");
        }
        delete pIsEditableKey;
        JsonString* pIsRenamableKey = new JsonString(L"isRenamable");
        IJsonValue* pIsRenamableVal = null;
        pJsonObject->GetValue(pIsRenamableKey, pIsRenamableVal);
        if(pIsRenamableVal != null) {
            
            pIsRenamable = new Boolean(false);
            jsonToValue(pIsRenamable, pIsRenamableVal, L"Boolean", L"Boolean");
        }
        delete pIsRenamableKey;
        
    }
}

SamiColumn::SamiColumn(String* json) {
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
SamiColumn::asJson ()
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
SamiColumn::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pDataTypeKey = new JsonString(L"dataType");
    pJsonObject->Add(pDataTypeKey, toJson(getPDataType(), "String", ""));

    
    JsonString *p_typeKey = new JsonString(L"_type");
    pJsonObject->Add(p_typeKey, toJson(getPType(), "String", ""));

    
    JsonString *pRequiredKey = new JsonString(L"required");
    pJsonObject->Add(pRequiredKey, toJson(getPRequired(), "Boolean", ""));

    
    JsonString *pUniqueKey = new JsonString(L"unique");
    pJsonObject->Add(pUniqueKey, toJson(getPUnique(), "Boolean", ""));

    
    JsonString *pRelatedToKey = new JsonString(L"relatedTo");
    pJsonObject->Add(pRelatedToKey, toJson(getPRelatedTo(), "String", ""));

    
    JsonString *pRelationTypeKey = new JsonString(L"relationType");
    pJsonObject->Add(pRelationTypeKey, toJson(getPRelationType(), "String", ""));

    
    JsonString *pIsDeletableKey = new JsonString(L"isDeletable");
    pJsonObject->Add(pIsDeletableKey, toJson(getPIsDeletable(), "Boolean", ""));

    
    JsonString *pIsEditableKey = new JsonString(L"isEditable");
    pJsonObject->Add(pIsEditableKey, toJson(getPIsEditable(), "Boolean", ""));

    
    JsonString *pIsRenamableKey = new JsonString(L"isRenamable");
    pJsonObject->Add(pIsRenamableKey, toJson(getPIsRenamable(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiColumn::getPName() {
    return pName;
}
void
SamiColumn::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiColumn::getPDataType() {
    return pDataType;
}
void
SamiColumn::setPDataType(String* pDataType) {
    this->pDataType = pDataType;
}

String*
SamiColumn::getPType() {
    return p_type;
}
void
SamiColumn::setPType(String* p_type) {
    this->p_type = p_type;
}

Boolean*
SamiColumn::getPRequired() {
    return pRequired;
}
void
SamiColumn::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

Boolean*
SamiColumn::getPUnique() {
    return pUnique;
}
void
SamiColumn::setPUnique(Boolean* pUnique) {
    this->pUnique = pUnique;
}

String*
SamiColumn::getPRelatedTo() {
    return pRelatedTo;
}
void
SamiColumn::setPRelatedTo(String* pRelatedTo) {
    this->pRelatedTo = pRelatedTo;
}

String*
SamiColumn::getPRelationType() {
    return pRelationType;
}
void
SamiColumn::setPRelationType(String* pRelationType) {
    this->pRelationType = pRelationType;
}

Boolean*
SamiColumn::getPIsDeletable() {
    return pIsDeletable;
}
void
SamiColumn::setPIsDeletable(Boolean* pIsDeletable) {
    this->pIsDeletable = pIsDeletable;
}

Boolean*
SamiColumn::getPIsEditable() {
    return pIsEditable;
}
void
SamiColumn::setPIsEditable(Boolean* pIsEditable) {
    this->pIsEditable = pIsEditable;
}

Boolean*
SamiColumn::getPIsRenamable() {
    return pIsRenamable;
}
void
SamiColumn::setPIsRenamable(Boolean* pIsRenamable) {
    this->pIsRenamable = pIsRenamable;
}



} /* namespace Swagger */

