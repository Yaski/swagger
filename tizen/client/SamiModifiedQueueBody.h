/*
 * SamiModifiedQueueBody.h
 * 
 * 
 */

#ifndef SamiModifiedQueueBody_H_
#define SamiModifiedQueueBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiModifiedQueue.h"
using Tizen::Base::String;


namespace Swagger {

class SamiModifiedQueueBody: public SamiObject {
public:
    SamiModifiedQueueBody();
    SamiModifiedQueueBody(String* json);
    virtual ~SamiModifiedQueueBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiModifiedQueueBody* fromJson(String* obj);

    
    SamiModifiedQueue* getPDocument();
    void setPDocument(SamiModifiedQueue* pDocument);
    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    SamiModifiedQueue* pDocument;
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiModifiedQueueBody_H_ */
