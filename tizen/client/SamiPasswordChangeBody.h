/*
 * SamiPasswordChangeBody.h
 * 
 * 
 */

#ifndef SamiPasswordChangeBody_H_
#define SamiPasswordChangeBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiPasswordChangeBody: public SamiObject {
public:
    SamiPasswordChangeBody();
    SamiPasswordChangeBody(String* json);
    virtual ~SamiPasswordChangeBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPasswordChangeBody* fromJson(String* obj);

    
    String* getPOldPassword();
    void setPOldPassword(String* pOldPassword);
    
    String* getPNewPassword();
    void setPNewPassword(String* pNewPassword);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    String* pOldPassword;
    String* pNewPassword;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiPasswordChangeBody_H_ */
