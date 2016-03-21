/*
 * SamiCacheRequest.h
 * 
 * 
 */

#ifndef SamiCacheRequest_H_
#define SamiCacheRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiCacheRequest: public SamiObject {
public:
    SamiCacheRequest();
    SamiCacheRequest(String* json);
    virtual ~SamiCacheRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCacheRequest* fromJson(String* obj);

    
    String* getPItem();
    void setPItem(String* pItem);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    String* pItem;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiCacheRequest_H_ */
