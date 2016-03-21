/*
 * SamiDeny.h
 * 
 * 
 */

#ifndef SamiDeny_H_
#define SamiDeny_H_

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

class SamiDeny: public SamiObject {
public:
    SamiDeny();
    SamiDeny(String* json);
    virtual ~SamiDeny();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDeny* fromJson(String* obj);

    
    IList* getPUser();
    void setPUser(IList* pUser);
    
    IList* getPRole();
    void setPRole(IList* pRole);
    

private:
    IList* pUser;
    IList* pRole;
    
};

} /* namespace Swagger */

#endif /* SamiDeny_H_ */
