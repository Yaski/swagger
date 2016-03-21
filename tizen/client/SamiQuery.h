/*
 * SamiQuery.h
 * 
 * 
 */

#ifndef SamiQuery_H_
#define SamiQuery_H_

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

class SamiQuery: public SamiObject {
public:
    SamiQuery();
    SamiQuery(String* json);
    virtual ~SamiQuery();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiQuery* fromJson(String* obj);

    
    IList* getPIncludeList();
    void setPIncludeList(IList* pIncludeList);
    
    IList* getPInclude();
    void setPInclude(IList* pInclude);
    

private:
    IList* pIncludeList;
    IList* pInclude;
    
};

} /* namespace Swagger */

#endif /* SamiQuery_H_ */
