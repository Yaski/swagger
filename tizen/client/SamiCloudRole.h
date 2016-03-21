/*
 * SamiCloudRole.h
 * 
 * 
 */

#ifndef SamiCloudRole_H_
#define SamiCloudRole_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudObject.h"


namespace Swagger {

class SamiCloudRole: public SamiObject {
public:
    SamiCloudRole();
    SamiCloudRole(String* json);
    virtual ~SamiCloudRole();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudRole* fromJson(String* obj);

    

private:
    
};

} /* namespace Swagger */

#endif /* SamiCloudRole_H_ */
