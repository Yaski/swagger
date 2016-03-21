/*
 * SamiCloudQueryFindOne.h
 * 
 * 
 */

#ifndef SamiCloudQueryFindOne_H_
#define SamiCloudQueryFindOne_H_

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
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudQueryFindOne: public SamiObject {
public:
    SamiCloudQueryFindOne();
    SamiCloudQueryFindOne(String* json);
    virtual ~SamiCloudQueryFindOne();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudQueryFindOne* fromJson(String* obj);

    
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
    

private:
    String* pKey;
    Integer* pSkip;
    Integer* pLimit;
    SamiQuery* pQuery;
    SamiObject* pSort;
    SamiObject* pSelect;
    
};

} /* namespace Swagger */

#endif /* SamiCloudQueryFindOne_H_ */
