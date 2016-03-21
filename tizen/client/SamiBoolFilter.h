/*
 * SamiBoolFilter.h
 * 
 * 
 */

#ifndef SamiBoolFilter_H_
#define SamiBoolFilter_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSearchFilter.h"


namespace Swagger {

class SamiBoolFilter: public SamiObject {
public:
    SamiBoolFilter();
    SamiBoolFilter(String* json);
    virtual ~SamiBoolFilter();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBoolFilter* fromJson(String* obj);

    
    SamiSearchFilter* getPBool();
    void setPBool(SamiSearchFilter* pBool);
    

private:
    SamiSearchFilter* pBool;
    
};

} /* namespace Swagger */

#endif /* SamiBoolFilter_H_ */
