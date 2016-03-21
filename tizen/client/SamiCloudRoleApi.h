#ifndef SamiCloudRoleApi_H_
#define SamiCloudRoleApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCloudRole.h"
#include "SamiRoleBody.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudRoleApi {
public:
  SamiCloudRoleApi();
  virtual ~SamiCloudRoleApi();

  
  SamiCloudRole* 
  createRoleWithCompletion(String* appId, SamiRoleBody* body, void (* handler)(SamiCloudRole*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudRoleApi_H_ */
