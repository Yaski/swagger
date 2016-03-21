/*
 * SamiQueuePayloadWithCount.h
 * 
 * 
 */

#ifndef SamiQueuePayloadWithCount_H_
#define SamiQueuePayloadWithCount_H_

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

class SamiQueuePayloadWithCount: public SamiObject {
public:
    SamiQueuePayloadWithCount();
    SamiQueuePayloadWithCount(String* json);
    virtual ~SamiQueuePayloadWithCount();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiQueuePayloadWithCount* fromJson(String* obj);

    
    Long* getPCount();
    void setPCount(Long* pCount);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    Long* pCount;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiQueuePayloadWithCount_H_ */
