/*
 * SamiCloudTable.h
 * 
 * 
 */

#ifndef SamiCloudTable_H_
#define SamiCloudTable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiColumn.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudTable: public SamiObject {
public:
    SamiCloudTable();
    SamiCloudTable(String* json);
    virtual ~SamiCloudTable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudTable* fromJson(String* obj);

    
    String* getPName();
    void setPName(String* pName);
    
    String* getPAppId();
    void setPAppId(String* pAppId);
    
    String* getPType();
    void setPType(String* pType);
    
    IList* getPColumns();
    void setPColumns(IList* pColumns);
    

private:
    String* pName;
    String* pAppId;
    String* pType;
    IList* pColumns;
    
};

} /* namespace Swagger */

#endif /* SamiCloudTable_H_ */
