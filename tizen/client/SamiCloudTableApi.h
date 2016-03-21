#ifndef SamiCloudTableApi_H_
#define SamiCloudTableApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCloudTable.h"
using Tizen::Base::String;
#include "SamiCloudTableSave.h"
#include "SamiKeyBody.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudTableApi {
public:
  SamiCloudTableApi();
  virtual ~SamiCloudTableApi();

  
  SamiCloudTable* 
  deleteTableWithCompletion(String* tableName, String* appId, SamiCloudTableSave* body, void (* handler)(SamiCloudTable*, SamiError*));
  
  SamiCloudTable* 
  getWithCompletion(String* tableName, String* appId, SamiKeyBody* body, void (* handler)(SamiCloudTable*, SamiError*));
  
  void 
  getAllWithCompletion(String* appId, SamiKeyBody* body, void(* handler)(SamiError*));
  
  SamiCloudTable* 
  saveWithCompletion(String* tableName, String* appId, SamiCloudTableSave* body, void (* handler)(SamiCloudTable*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudTableApi_H_ */
