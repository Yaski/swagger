/*
 * SamiCloudObjectSaveRequest.h
 * 
 * 
 */

#ifndef SamiCloudObjectSaveRequest_H_
#define SamiCloudObjectSaveRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudObject.h"
using Tizen::Base::String;


namespace Swagger {

class SamiCloudObjectSaveRequest: public SamiObject {
public:
    SamiCloudObjectSaveRequest();
    SamiCloudObjectSaveRequest(String* json);
    virtual ~SamiCloudObjectSaveRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudObjectSaveRequest* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    SamiCloudObject* getPDocument();
    void setPDocument(SamiCloudObject* pDocument);
    

private:
    String* pKey;
    SamiCloudObject* pDocument;
    
};

} /* namespace Swagger */

#endif /* SamiCloudObjectSaveRequest_H_ */
