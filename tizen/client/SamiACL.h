/*
 * SamiACL.h
 * 
 * 
 */

#ifndef SamiACL_H_
#define SamiACL_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiRead.h"
#include "SamiWrite.h"


namespace Swagger {

class SamiACL: public SamiObject {
public:
    SamiACL();
    SamiACL(String* json);
    virtual ~SamiACL();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiACL* fromJson(String* obj);

    
    SamiRead* getPRead();
    void setPRead(SamiRead* pRead);
    
    SamiWrite* getPWrite();
    void setPWrite(SamiWrite* pWrite);
    

private:
    SamiRead* pRead;
    SamiWrite* pWrite;
    
};

} /* namespace Swagger */

#endif /* SamiACL_H_ */
