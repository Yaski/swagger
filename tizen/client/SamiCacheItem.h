/*
 * SamiCacheItem.h
 * 
 * 
 */

#ifndef SamiCacheItem_H_
#define SamiCacheItem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiCacheItem: public SamiObject {
public:
    SamiCacheItem();
    SamiCacheItem(String* json);
    virtual ~SamiCacheItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCacheItem* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    String* getPValue();
    void setPValue(String* pValue);
    

private:
    String* pKey;
    String* pValue;
    
};

} /* namespace Swagger */

#endif /* SamiCacheItem_H_ */
