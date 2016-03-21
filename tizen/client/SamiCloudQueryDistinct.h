/*
 * SamiCloudQueryDistinct.h
 * 
 * 
 */

#ifndef SamiCloudQueryDistinct_H_
#define SamiCloudQueryDistinct_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudQuery.h"
#include "SamiObject.h"
#include "SamiQuery.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudQueryDistinct: public SamiObject {
public:
    SamiCloudQueryDistinct();
    SamiCloudQueryDistinct(String* json);
    virtual ~SamiCloudQueryDistinct();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudQueryDistinct* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    Integer* getPSkip();
    void setPSkip(Integer* pSkip);
    
    Integer* getPLimit();
    void setPLimit(Integer* pLimit);
    
    SamiQuery* getPQuery();
    void setPQuery(SamiQuery* pQuery);
    
    SamiObject* getPSort();
    void setPSort(SamiObject* pSort);
    
    SamiObject* getPSelect();
    void setPSelect(SamiObject* pSelect);
    
    IList* getPOnKey();
    void setPOnKey(IList* pOnKey);
    

private:
    String* pKey;
    Integer* pSkip;
    Integer* pLimit;
    SamiQuery* pQuery;
    SamiObject* pSort;
    SamiObject* pSelect;
    IList* pOnKey;
    
};

} /* namespace Swagger */

#endif /* SamiCloudQueryDistinct_H_ */
