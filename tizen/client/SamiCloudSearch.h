/*
 * SamiCloudSearch.h
 * 
 * 
 */

#ifndef SamiCloudSearch_H_
#define SamiCloudSearch_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFilterBody.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudSearch: public SamiObject {
public:
    SamiCloudSearch();
    SamiCloudSearch(String* json);
    virtual ~SamiCloudSearch();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudSearch* fromJson(String* obj);

    
    SamiFilterBody* getPQuery();
    void setPQuery(SamiFilterBody* pQuery);
    
    IList* getPSort();
    void setPSort(IList* pSort);
    
    String* getPCollectionName();
    void setPCollectionName(String* pCollectionName);
    
    String* getPKey();
    void setPKey(String* pKey);
    
    Integer* getPSkip();
    void setPSkip(Integer* pSkip);
    
    Integer* getPLimit();
    void setPLimit(Integer* pLimit);
    

private:
    SamiFilterBody* pQuery;
    IList* pSort;
    String* pCollectionName;
    String* pKey;
    Integer* pSkip;
    Integer* pLimit;
    
};

} /* namespace Swagger */

#endif /* SamiCloudSearch_H_ */
