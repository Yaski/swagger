#ifndef SamiCloudUserApi_H_
#define SamiCloudUserApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCloudUser.h"
#include "SamiUserRoleBody.h"
using Tizen::Base::String;
#include "SamiPasswordChangeBody.h"
#include "SamiUserBody.h"
#include "SamiEmailBody.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudUserApi {
public:
  SamiCloudUserApi();
  virtual ~SamiCloudUserApi();

  
  SamiCloudUser* 
  addToRoleWithCompletion(String* appId, SamiUserRoleBody* body, void (* handler)(SamiCloudUser*, SamiError*));
  
  SamiCloudUser* 
  changePasswordWithCompletion(String* appId, SamiPasswordChangeBody* body, void (* handler)(SamiCloudUser*, SamiError*));
  
  SamiCloudUser* 
  loginWithCompletion(String* appId, SamiUserBody* body, void (* handler)(SamiCloudUser*, SamiError*));
  
  SamiCloudUser* 
  logoutWithCompletion(String* appId, SamiUserBody* body, void (* handler)(SamiCloudUser*, SamiError*));
  
  SamiCloudUser* 
  removeFromRoleWithCompletion(String* appId, SamiUserRoleBody* body, void (* handler)(SamiCloudUser*, SamiError*));
  
  String* 
  resetPasswordWithCompletion(String* appId, SamiEmailBody* body, void (* handler)(String*, SamiError*));
  
  SamiCloudUser* 
  signUpWithCompletion(String* appId, SamiUserBody* body, void (* handler)(SamiCloudUser*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudUserApi_H_ */
