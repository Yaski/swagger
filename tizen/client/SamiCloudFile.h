/*
 * SamiCloudFile.h
 * 
 * 
 */

#ifndef SamiCloudFile_H_
#define SamiCloudFile_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiACL.h"
using Tizen::Base::DateTime;
using Tizen::Base::Float;
using Tizen::Base::String;


namespace Swagger {

class SamiCloudFile: public SamiObject {
public:
    SamiCloudFile();
    SamiCloudFile(String* json);
    virtual ~SamiCloudFile();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCloudFile* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPType();
    void setPType(String* p_type);
    
    SamiACL* getPACL();
    void setPACL(SamiACL* pACL);
    
    String* getPName();
    void setPName(String* pName);
    
    Float* getPSize();
    void setPSize(Float* pSize);
    
    String* getPUrl();
    void setPUrl(String* pUrl);
    
    DateTime* getPExpires();
    void setPExpires(DateTime* pExpires);
    
    String* getPContentType();
    void setPContentType(String* pContentType);
    

private:
    String* p_id;
    String* p_type;
    SamiACL* pACL;
    String* pName;
    Float* pSize;
    String* pUrl;
    DateTime* pExpires;
    String* pContentType;
    
};

} /* namespace Swagger */

#endif /* SamiCloudFile_H_ */
