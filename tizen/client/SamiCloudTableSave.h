/*
 * SamiCloudTableSave.h
 * 
 * 
 */

#ifndef SamiCloudTableSave_H_
#define SamiCloudTableSave_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudTable.h"
using Tizen::Base::String;


namespace Swagger {

class SamiCloudTableSave: public SamiObject {
public:
    SamiCloudTableSave();
    SamiCloudTableSave(String* json);
    virtual ~SamiCloudTableSave();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudTableSave* fromJson(String* obj);

    
    SamiCloudTable* getPData();
    void setPData(SamiCloudTable* pData);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    SamiCloudTable* pData;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiCloudTableSave_H_ */
