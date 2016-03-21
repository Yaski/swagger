/*
 * SamiCache.h
 * 
 * 
 */

#ifndef SamiCache_H_
#define SamiCache_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiCache: public SamiObject {
public:
    SamiCache();
    SamiCache(String* json);
    virtual ~SamiCache();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCache* fromJson(String* obj);

    
    String* getPType();
    void setPType(String* p_type);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPSize();
    void setPSize(String* pSize);
    

private:
    String* p_type;
    String* pName;
    String* pSize;
    
};

} /* namespace Swagger */

#endif /* SamiCache_H_ */
