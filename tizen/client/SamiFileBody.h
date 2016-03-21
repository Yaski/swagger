/*
 * SamiFileBody.h
 * 
 * 
 */

#ifndef SamiFileBody_H_
#define SamiFileBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCloudFile.h"
using Tizen::Base::String;


namespace Swagger {

class SamiFileBody: public SamiObject {
public:
    SamiFileBody();
    SamiFileBody(String* json);
    virtual ~SamiFileBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFileBody* fromJson(String* obj);

    
    String* getPKey();
    void setPKey(String* pKey);
    
    String* getPData();
    void setPData(String* pData);
    
    SamiCloudFile* getPFileObj();
    void setPFileObj(SamiCloudFile* pFileObj);
    

private:
    String* pKey;
    String* pData;
    SamiCloudFile* pFileObj;
    
};

} /* namespace Swagger */

#endif /* SamiFileBody_H_ */
