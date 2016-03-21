/*
 * SamiCloudQueryCount.h
 * 
 * 
 */

#ifndef SamiCloudQueryCount_H_
#define SamiCloudQueryCount_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudQuery.h"
#include "SamiQuery.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudQueryCount: public SamiObject {
public:
    SamiCloudQueryCount();
    SamiCloudQueryCount(String* json);
    virtual ~SamiCloudQueryCount();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudQueryCount* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    Integer* getPSkip();
    void setPSkip(Integer* pSkip);
    
    Integer* getPLimit();
    void setPLimit(Integer* pLimit);
    
    SamiQuery* getPQuery();
    void setPQuery(SamiQuery* pQuery);
    
    String* getPSort();
    void setPSort(String* pSort);
    
    String* getPSelect();
    void setPSelect(String* pSelect);
    

private:
    String* pKey;
    Integer* pSkip;
    Integer* pLimit;
    SamiQuery* pQuery;
    String* pSort;
    String* pSelect;
    
};

} /* namespace Swagger */

#endif /* SamiCloudQueryCount_H_ */
