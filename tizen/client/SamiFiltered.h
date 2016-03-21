/*
 * SamiFiltered.h
 * 
 * 
 */

#ifndef SamiFiltered_H_
#define SamiFiltered_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBoolFilter.h"
#include "SamiBoolQuery.h"


namespace Swagger {

class SamiFiltered: public SamiObject {
public:
    SamiFiltered();
    SamiFiltered(String* json);
    virtual ~SamiFiltered();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFiltered* fromJson(String* obj);

    
    SamiBoolQuery* getPQuery();
    void setPQuery(SamiBoolQuery* pQuery);
    
    SamiBoolFilter* getPFilter();
    void setPFilter(SamiBoolFilter* pFilter);
    

private:
    SamiBoolQuery* pQuery;
    SamiBoolFilter* pFilter;
    
};

} /* namespace Swagger */

#endif /* SamiFiltered_H_ */
