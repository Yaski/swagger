#ifndef SamiCloudFileApi_H_
#define SamiCloudFileApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiKeyBody.h"
using Tizen::Base::String;
#include "SamiFile.h"
#include "SamiFileBody.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCloudFileApi {
public:
  SamiCloudFileApi();
  virtual ~SamiCloudFileApi();

  
  String* 
  deleteFileWithCompletion(String* appId, String* fileId, SamiKeyBody* body, void (* handler)(String*, SamiError*));
  
  String* 
  fetchFileContentWithCompletion(String* appId, String* fileId, SamiKeyBody* body, void (* handler)(String*, SamiError*));
  
  String* 
  saveFileWithCompletion(String* appId, String* fileObj, String* key, SamiFile* fileToUpload, void (* handler)(String*, SamiError*));
  
  String* 
  saveFileDataWithCompletion(String* myAppId, SamiFileBody* fileObj, void (* handler)(String*, SamiError*));
  
  static String getBasePath() {
    return L"http://api.cloudboost.io/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCloudFileApi_H_ */
