/*
 * SamiBoolQuery.h
 * 
 * 
 */

#ifndef SamiBoolQuery_H_
#define SamiBoolQuery_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSearchQuery.h"


namespace Swagger {

class SamiBoolQuery: public SamiObject {
public:
    SamiBoolQuery();
    SamiBoolQuery(String* json);
    virtual ~SamiBoolQuery();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBoolQuery* fromJson(String* obj);

    
    SamiSearchQuery* getPBool();
    void setPBool(SamiSearchQuery* pBool);
    

private:
    SamiSearchQuery* pBool;
    
};

} /* namespace Swagger */

#endif /* SamiBoolQuery_H_ */
