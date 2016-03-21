/*
 * SamiAllow.h
 * 
 * 
 */

#ifndef SamiAllow_H_
#define SamiAllow_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiAllow: public SamiObject {
public:
    SamiAllow();
    SamiAllow(String* json);
    virtual ~SamiAllow();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAllow* fromJson(String* obj);

    
    IList* getPUser();
    void setPUser(IList* pUser);
    
    IList* getPRole();
    void setPRole(IList* pRole);
    

private:
    IList* pUser;
    IList* pRole;
    
};

} /* namespace Swagger */

#endif /* SamiAllow_H_ */
