/*
 * SamiSearchFilter.h
 * 
 * 
 */

#ifndef SamiSearchFilter_H_
#define SamiSearchFilter_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiSearchFilter: public SamiObject {
public:
    SamiSearchFilter();
    SamiSearchFilter(String* json);
    virtual ~SamiSearchFilter();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSearchFilter* fromJson(String* obj);

    
    IList* getPMustNot();
    void setPMustNot(IList* pMust_not);
    
    IList* getPShould();
    void setPShould(IList* pShould);
    
    IList* getPMust();
    void setPMust(IList* pMust);
    

private:
    IList* pMust_not;
    IList* pShould;
    IList* pMust;
    
};

} /* namespace Swagger */

#endif /* SamiSearchFilter_H_ */
