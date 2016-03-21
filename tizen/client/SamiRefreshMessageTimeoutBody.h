/*
 * SamiRefreshMessageTimeoutBody.h
 * 
 * 
 */

#ifndef SamiRefreshMessageTimeoutBody_H_
#define SamiRefreshMessageTimeoutBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiRefreshMessageTimeoutBody: public SamiObject {
public:
    SamiRefreshMessageTimeoutBody();
    SamiRefreshMessageTimeoutBody(String* json);
    virtual ~SamiRefreshMessageTimeoutBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRefreshMessageTimeoutBody* fromJson(String* obj);

    
    Long* getPTimeout();
    void setPTimeout(Long* pTimeout);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    Long* pTimeout;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiRefreshMessageTimeoutBody_H_ */
