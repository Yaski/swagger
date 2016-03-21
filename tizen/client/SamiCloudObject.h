/*
 * SamiCloudObject.h
 * 
 * 
 */

#ifndef SamiCloudObject_H_
#define SamiCloudObject_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::Collection::HashMap;


namespace Swagger {

class SamiCloudObject: public SamiObject {
public:
    SamiCloudObject();
    SamiCloudObject(String* json);
    virtual ~SamiCloudObject();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudObject* fromJson(String* obj);

    

private:
    
};

} /* namespace Swagger */

#endif /* SamiCloudObject_H_ */
