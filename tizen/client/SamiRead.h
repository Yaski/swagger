/*
 * SamiRead.h
 * 
 * 
 */

#ifndef SamiRead_H_
#define SamiRead_H_

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

class SamiRead: public SamiObject {
public:
    SamiRead();
    SamiRead(String* json);
    virtual ~SamiRead();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRead* fromJson(String* obj);

    
    SamiAllow* getPAllow();
    void setPAllow(SamiAllow* pAllow);
    
    SamiDeny* getPDeny();
    void setPDeny(SamiDeny* pDeny);
    

private:
    SamiAllow* pAllow;
    SamiDeny* pDeny;
    
};

} /* namespace Swagger */

#endif /* SamiRead_H_ */
