/*
 * SamiCloudQueryFindById.h
 * 
 * 
 */

#ifndef SamiCloudQueryFindById_H_
#define SamiCloudQueryFindById_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudQuery.h"
#include "SamiCloudQueryId.h"
#include "SamiObject.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudQueryFindById: public SamiObject {
public:
    SamiCloudQueryFindById();
    SamiCloudQueryFindById(String* json);
    virtual ~SamiCloudQueryFindById();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudQueryFindById* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    Integer* getPSkip();
    void setPSkip(Integer* pSkip);
    
    Integer* getPLimit();
    void setPLimit(Integer* pLimit);
    
    SamiCloudQueryId* getPQuery();
    void setPQuery(SamiCloudQueryId* pQuery);
    
    SamiObject* getPSort();
    void setPSort(SamiObject* pSort);
    
    SamiObject* getPSelect();
    void setPSelect(SamiObject* pSelect);
    

private:
    String* pKey;
    Integer* pSkip;
    Integer* pLimit;
    SamiCloudQueryId* pQuery;
    SamiObject* pSort;
    SamiObject* pSelect;
    
};

} /* namespace Swagger */

#endif /* SamiCloudQueryFindById_H_ */
