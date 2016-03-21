/*
 * SamiFilterBody.h
 * 
 * 
 */

#ifndef SamiFilterBody_H_
#define SamiFilterBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFiltered.h"


namespace Swagger {

class SamiFilterBody: public SamiObject {
public:
    SamiFilterBody();
    SamiFilterBody(String* json);
    virtual ~SamiFilterBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFilterBody* fromJson(String* obj);

    
    SamiFiltered* getPFiltered();
    void setPFiltered(SamiFiltered* pFiltered);
    

private:
    SamiFiltered* pFiltered;
    
};

} /* namespace Swagger */

#endif /* SamiFilterBody_H_ */
