/*
 * SamiCloudUser.h
 * 
 * 
 */

#ifndef SamiCloudUser_H_
#define SamiCloudUser_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudObject.h"


namespace Swagger {

class SamiCloudUser: public SamiObject {
public:
    SamiCloudUser();
    SamiCloudUser(String* json);
    virtual ~SamiCloudUser();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudUser* fromJson(String* obj);

    

private:
    
};

} /* namespace Swagger */

#endif /* SamiCloudUser_H_ */
