/*
 * SamiWrite.h
 * 
 * 
 */

#ifndef SamiWrite_H_
#define SamiWrite_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiAllow.h"
#include "SamiDeny.h"


namespace Swagger {

class SamiWrite: public SamiObject {
public:
    SamiWrite();
    SamiWrite(String* json);
    virtual ~SamiWrite();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiWrite* fromJson(String* obj);

    
    SamiAllow* getPAllow();
    void setPAllow(SamiAllow* pAllow);
    
    SamiDeny* getPDeny();
    void setPDeny(SamiDeny* pDeny);
    

private:
    SamiAllow* pAllow;
    SamiDeny* pDeny;
    
};

} /* namespace Swagger */

#endif /* SamiWrite_H_ */
