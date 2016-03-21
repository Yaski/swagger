#ifndef SamiCloudObjectApi_H_
#define SamiCloudObjectApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCloudObjectSaveRequest.h"
using Tizen::Base::String;
#include "SamiCloudObject.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudObjectApi {
public:
  SamiCloudObjectApi();
  virtual ~SamiCloudObjectApi();

  
  SamiCloudObject* 
  deleteWithCompletion(String* appId, String* tableName, SamiCloudObjectSaveRequest* body, void (* handler)(SamiCloudObject*, SamiError*));
  
  SamiCloudObject* 
  saveWithCompletion(String* appId, String* tableName, SamiCloudObjectSaveRequest* body, void (* handler)(SamiCloudObject*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudObjectApi_H_ */
