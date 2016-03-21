/*
 * SamiCloudQueryId.h
 * 
 * 
 */

#ifndef SamiCloudQueryId_H_
#define SamiCloudQueryId_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiQuery.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudQueryId: public SamiObject {
public:
    SamiCloudQueryId();
    SamiCloudQueryId(String* json);
    virtual ~SamiCloudQueryId();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudQueryId* fromJson(String* obj);

    
    IList* getPIncludeList();
    void setPIncludeList(IList* pIncludeList);
    
    IList* getPInclude();
    void setPInclude(IList* pInclude);
    
    String* getPId();
    void setPId(String* p_id);
    

private:
    IList* pIncludeList;
    IList* pInclude;
    String* p_id;
    
};

} /* namespace Swagger */

#endif /* SamiCloudQueryId_H_ */
