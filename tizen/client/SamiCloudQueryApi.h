#ifndef SamiCloudQueryApi_H_
#define SamiCloudQueryApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::String;
#include "SamiCloudQueryCount.h"
#include "SamiCloudQueryDistinct.h"
#include "SamiCloudObject.h"
#include "SamiCloudQuery.h"
#include "SamiCloudQueryFindById.h"
#include "SamiCloudQueryFindOne.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudQueryApi {
public:
  SamiCloudQueryApi();
  virtual ~SamiCloudQueryApi();

  
  Integer* 
  countWithCompletion(String* appId, String* tableName, SamiCloudQueryCount* body, void (* handler)(Integer*, SamiError*));
  
  IList* 
  distinctWithCompletion(String* appId, String* tableName, SamiCloudQueryDistinct* body, void (* handler)(IList*, SamiError*));
  
  IList* 
  findWithCompletion(String* appId, String* tableName, SamiCloudQuery* body, void (* handler)(IList*, SamiError*));
  
  SamiCloudObject* 
  findByIdWithCompletion(String* cloudAppId, String* tableName, SamiCloudQueryFindById* body, void (* handler)(SamiCloudObject*, SamiError*));
  
  SamiCloudObject* 
  findOneWithCompletion(String* appId, String* tableName, SamiCloudQueryFindOne* body, void (* handler)(SamiCloudObject*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudQueryApi_H_ */
