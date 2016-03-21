/*
 * SamiUserBody.h
 * 
 * 
 */

#ifndef SamiUserBody_H_
#define SamiUserBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudUser.h"
using Tizen::Base::String;


namespace Swagger {

class SamiUserBody: public SamiObject {
public:
    SamiUserBody();
    SamiUserBody(String* json);
    virtual ~SamiUserBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserBody* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    SamiCloudUser* getPDocument();
    void setPDocument(SamiCloudUser* pDocument);
    

private:
    String* pKey;
    SamiCloudUser* pDocument;
    
};

} /* namespace Swagger */

#endif /* SamiUserBody_H_ */
