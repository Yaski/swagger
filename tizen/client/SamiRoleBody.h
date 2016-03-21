/*
 * SamiRoleBody.h
 * 
 * 
 */

#ifndef SamiRoleBody_H_
#define SamiRoleBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudRole.h"
using Tizen::Base::String;


namespace Swagger {

class SamiRoleBody: public SamiObject {
public:
    SamiRoleBody();
    SamiRoleBody(String* json);
    virtual ~SamiRoleBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRoleBody* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    SamiCloudRole* getPDocument();
    void setPDocument(SamiCloudRole* pDocument);
    

private:
    String* pKey;
    SamiCloudRole* pDocument;
    
};

} /* namespace Swagger */

#endif /* SamiRoleBody_H_ */
