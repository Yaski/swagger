/*
 * SamiKeyBody.h
 * 
 * 
 */

#ifndef SamiKeyBody_H_
#define SamiKeyBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiKeyBody: public SamiObject {
public:
    SamiKeyBody();
    SamiKeyBody(String* json);
    virtual ~SamiKeyBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiKeyBody* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    

private:
    String* pKey;
    
};

} /* namespace Swagger */

#endif /* SamiKeyBody_H_ */
