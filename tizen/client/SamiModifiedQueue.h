/*
 * SamiModifiedQueue.h
 * 
 * 
 */

#ifndef SamiModifiedQueue_H_
#define SamiModifiedQueue_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiACL.h"
#include "SamiQueueMessage.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::DateTime;
using Tizen::Base::String;


namespace Swagger {

class SamiModifiedQueue: public SamiObject {
public:
    SamiModifiedQueue();
    SamiModifiedQueue(String* json);
    virtual ~SamiModifiedQueue();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiModifiedQueue* fromJson(String* obj);

    
    SamiACL* getPACL();
    void setPACL(SamiACL* pACL);
    
    String* getPType();
    void setPType(String* p_type);
    
    DateTime* getPExpires();
    void setPExpires(DateTime* pExpires);
    
    String* getPQueueType();
    void setPQueueType(String* pQueueType);
    
    String* getPRetry();
    void setPRetry(String* pRetry);
    
    String* getPName();
    void setPName(String* pName);
    
    IList* getPSubscribers();
    void setPSubscribers(IList* pSubscribers);
    
    Boolean* getPIsModified();
    void setPIsModified(Boolean* p_isModified);
    
    IList* getPModifiedColumns();
    void setPModifiedColumns(IList* p_modifiedColumns);
    
    IList* getPMessages();
    void setPMessages(IList* pMessages);
    

private:
    SamiACL* pACL;
    String* p_type;
    DateTime* pExpires;
    String* pQueueType;
    String* pRetry;
    String* pName;
    IList* pSubscribers;
    Boolean* p_isModified;
    IList* p_modifiedColumns;
    IList* pMessages;
    
};

} /* namespace Swagger */

#endif /* SamiModifiedQueue_H_ */
