/*
 * SamiUserRoleBody.h
 * 
 * 
 */

#ifndef SamiUserRoleBody_H_
#define SamiUserRoleBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudRole.h"
#include "SamiCloudUser.h"
using Tizen::Base::String;


namespace Swagger {

class SamiUserRoleBody: public SamiObject {
public:
    SamiUserRoleBody();
    SamiUserRoleBody(String* json);
    virtual ~SamiUserRoleBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserRoleBody* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    SamiCloudRole* getPRole();
    void setPRole(SamiCloudRole* pRole);
    
    SamiCloudUser* getPUser();
    void setPUser(SamiCloudUser* pUser);
    

private:
    String* pKey;
    SamiCloudRole* pRole;
    SamiCloudUser* pUser;
    
};

} /* namespace Swagger */

#endif /* SamiUserRoleBody_H_ */
