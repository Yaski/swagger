#ifndef SamiCloudSearchApi_H_
#define SamiCloudSearchApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiCloudSearch.h"
#include "SamiCloudObject.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudSearchApi {
public:
  SamiCloudSearchApi();
  virtual ~SamiCloudSearchApi();

  
  IList* 
  searchWithCompletion(String* appId, String* tableName, SamiCloudSearch* body, void (* handler)(IList*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudSearchApi_H_ */
