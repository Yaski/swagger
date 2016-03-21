/*
 * SamiQueue.h
 * 
 * 
 */

#ifndef SamiQueue_H_
#define SamiQueue_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiACL.h"
#include "SamiQueueMessage.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::DateTime;
using Tizen::Base::String;


namespace Swagger {

class SamiQueue: public SamiObject {
public:
    SamiQueue();
    SamiQueue(String* json);
    virtual ~SamiQueue();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiQueue* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    String* getPTableName();
    void setPTableName(String* p_tableName);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreatedAt);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdatedAt);
    
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
    
    IList* getPMessages();
    void setPMessages(IList* pMessages);
    

private:
    String* p_id;
    String* p_tableName;
    DateTime* pCreatedAt;
    DateTime* pUpdatedAt;
    SamiACL* pACL;
    String* p_type;
    DateTime* pExpires;
    String* pQueueType;
    String* pRetry;
    String* pName;
    IList* pSubscribers;
    IList* pMessages;
    
};

} /* namespace Swagger */

#endif /* SamiQueue_H_ */
