#ifndef SamiCloudCacheApi_H_
#define SamiCloudCacheApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCacheRequest.h"
#include "SamiKeyBody.h"
using Tizen::Base::String;
#include "SamiCache.h"
#include "SamiCacheItem.h"
using Tizen::Base::Integer;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudCacheApi {
public:
  SamiCloudCacheApi();
  virtual ~SamiCloudCacheApi();

  
  IList* 
  clearCacheWithCompletion(String* appId, String* cacheName, SamiKeyBody* body, void (* handler)(IList*, SamiError*));
  
  SamiCache* 
  createCacheWithCompletion(String* appId, String* cacheName, SamiKeyBody* body, void (* handler)(SamiCache*, SamiError*));
  
  IList* 
  deleteAllCacheWithCompletion(String* appId, SamiKeyBody* body, void (* handler)(IList*, SamiError*));
  
  SamiCacheRequest* 
  deleteCacheWithCompletion(String* appId, String* cacheName, SamiKeyBody* body, void (* handler)(SamiCacheRequest*, SamiError*));
  
  String* 
  deleteItemWithCompletion(String* appId, String* cacheName, String* dataKey, SamiKeyBody* body, void (* handler)(String*, SamiError*));
  
  IList* 
  getAllCacheWithCompletion(String* appId, SamiKeyBody* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  getAllItemsWithCompletion(String* appId, String* cacheName, SamiKeyBody* body, void (* handler)(IList*, SamiError*));
  
  SamiCache* 
  getCacheInfoWithCompletion(String* appId, String* cacheName, SamiKeyBody* body, void (* handler)(SamiCache*, SamiError*));
  
  String* 
  getItemWithCompletion(String* appId, String* cacheName, String* dataKey, SamiKeyBody* body, void (* handler)(String*, SamiError*));
  
  Integer* 
  getItemsCountWithCompletion(String* appId, String* cacheName, SamiKeyBody* body, void (* handler)(Integer*, SamiError*));
  
  String* 
  setWithCompletion(String* appId, String* cacheName, String* dataKey, SamiCacheRequest* body, void (* handler)(String*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudCacheApi_H_ */
