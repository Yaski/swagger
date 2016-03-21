/*
 * SamiEmailBody.h
 * 
 * 
 */

#ifndef SamiEmailBody_H_
#define SamiEmailBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiEmailBody: public SamiObject {
public:
    SamiEmailBody();
    SamiEmailBody(String* json);
    virtual ~SamiEmailBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEmailBody* fromJson(String* obj);

    
    String* getPEmail();
    void setPEmail(String* pEmail);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    String* pEmail;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiEmailBody_H_ */
