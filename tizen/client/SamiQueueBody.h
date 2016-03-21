/*
 * SamiQueueBody.h
 * 
 * 
 */

#ifndef SamiQueueBody_H_
#define SamiQueueBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiQueue.h"
using Tizen::Base::String;


namespace Swagger {

class SamiQueueBody: public SamiObject {
public:
    SamiQueueBody();
    SamiQueueBody(String* json);
    virtual ~SamiQueueBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiQueueBody* fromJson(String* obj);

    
    SamiQueue* getPDocument();
    void setPDocument(SamiQueue* pDocument);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    SamiQueue* pDocument;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiQueueBody_H_ */
