/*
 * SamiColumn.h
 * 
 * 
 */

#ifndef SamiColumn_H_
#define SamiColumn_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiColumn: public SamiObject {
public:
    SamiColumn();
    SamiColumn(String* json);
    virtual ~SamiColumn();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiColumn* fromJson(String* obj);

    
    String* getPName();
    void setPName(String* pName);
    
    String* getPDataType();
    void setPDataType(String* pDataType);
    
    String* getPType();
    void setPType(String* p_type);
    
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    
    Boolean* getPUnique();
    void setPUnique(Boolean* pUnique);
    
    String* getPRelatedTo();
    void setPRelatedTo(String* pRelatedTo);
    
    String* getPRelationType();
    void setPRelationType(String* pRelationType);
    
    Boolean* getPIsDeletable();
    void setPIsDeletable(Boolean* pIsDeletable);
    
    Boolean* getPIsEditable();
    void setPIsEditable(Boolean* pIsEditable);
    
    Boolean* getPIsRenamable();
    void setPIsRenamable(Boolean* pIsRenamable);
    

private:
    String* pName;
    String* pDataType;
    String* p_type;
    Boolean* pRequired;
    Boolean* pUnique;
    String* pRelatedTo;
    String* pRelationType;
    Boolean* pIsDeletable;
    Boolean* pIsEditable;
    Boolean* pIsRenamable;
    
};

} /* namespace Swagger */

#endif /* SamiColumn_H_ */
