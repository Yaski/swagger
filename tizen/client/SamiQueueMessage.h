/*
 * SamiQueueMessage.h
 * 
 * 
 */

#ifndef SamiQueueMessage_H_
#define SamiQueueMessage_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiACL.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::DateTime;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiQueueMessage: public SamiObject {
public:
    SamiQueueMessage();
    SamiQueueMessage(String* json);
    virtual ~SamiQueueMessage();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiQueueMessage* fromJson(String* obj);

    
    SamiACL* getPACL();
    void setPACL(SamiACL* pACL);
    
    String* getPType();
    void setPType(String* p_type);
    
    DateTime* getPExpires();
    void setPExpires(DateTime* pExpires);
    
    String* getPId();
    void setPId(String* p_id);
    
    DateTime* getPDelay();
    void setPDelay(DateTime* pDelay);
    
    Long* getPTimeout();
    void setPTimeout(Long* pTimeout);
    
    IList* getPModifiedColumns();
    void setPModifiedColumns(IList* p_modifiedColumns);
    
    Boolean* getPIsModified();
    void setPIsModified(Boolean* p_isModified);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    

private:
    SamiACL* pACL;
    String* p_type;
    DateTime* pExpires;
    String* p_id;
    DateTime* pDelay;
    Long* pTimeout;
    IList* p_modifiedColumns;
    Boolean* p_isModified;
    String* pMessage;
    
};

} /* namespace Swagger */

#endif /* SamiQueueMessage_H_ */
