#ifndef SamiCloudQueueApi_H_
#define SamiCloudQueueApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiQueueMessage.h"
using Tizen::Base::String;
#include "SamiQueueBody.h"
#include "SamiQueue.h"
#include "SamiKeyBody.h"
#include "SamiQueuePayloadWithCount.h"
#include "SamiRefreshMessageTimeoutBody.h"
#include "SamiModifiedQueueBody.h"
#include "SamiModifiedQueue.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudQueueApi {
public:
  SamiCloudQueueApi();
  virtual ~SamiCloudQueueApi();

  
  IList* 
  addMessageWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* handler)(IList*, SamiError*));
  
  SamiQueue* 
  addSubscriberWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* handler)(SamiQueue*, SamiError*));
  
  SamiQueue* 
  clearWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* handler)(SamiQueue*, SamiError*));
  
  SamiQueue* 
  createQueueWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* handler)(SamiQueue*, SamiError*));
  
  IList* 
  deleteMessageWithCompletion(String* appId, String* queueName, String* messageId, SamiKeyBody* body, void (* handler)(IList*, SamiError*));
  
  SamiQueue* 
  deleteQueueWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* handler)(SamiQueue*, SamiError*));
  
  SamiQueue* 
  deleteSubscriberWithCompletion(String* appId, String* queueName, SamiQueueBody* body, void (* handler)(SamiQueue*, SamiError*));
  
  IList* 
  getAllMessagesWithCompletion(String* appId, SamiKeyBody* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  getAllQueuesWithCompletion(String* appId, SamiKeyBody* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  getMessageWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* handler)(IList*, SamiError*));
  
  SamiQueueMessage* 
  getMessageByIdWithCompletion(String* appId, String* queueName, String* messageId, SamiKeyBody* body, void (* handler)(SamiQueueMessage*, SamiError*));
  
  SamiQueue* 
  getQueueWithCompletion(String* appId, String* queueName, SamiKeyBody* body, void (* handler)(SamiQueue*, SamiError*));
  
  IList* 
  peekWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  peekMessageWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  pullWithCompletion(String* appId, String* queueName, SamiQueuePayloadWithCount* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  refreshMessageTimeoutWithCompletion(String* appId, String* queueName, String* messageId, SamiRefreshMessageTimeoutBody* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  updateMessageWithCompletion(String* myAppId, String* queueName, SamiQueueBody* body, void (* handler)(IList*, SamiError*));
  
  SamiModifiedQueue* 
  updateQueueWithCompletion(String* appId, String* queueName, SamiModifiedQueueBody* body, void (* handler)(SamiModifiedQueue*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudQueueApi_H_ */
