#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGACL.h"
#include "SWGAllow.h"
#include "SWGBoolFilter.h"
#include "SWGBoolQuery.h"
#include "SWGCache.h"
#include "SWGCacheItem.h"
#include "SWGCacheRequest.h"
#include "SWGCloudFile.h"
#include "SWGCloudObject.h"
#include "SWGCloudObjectSaveRequest.h"
#include "SWGCloudQuery.h"
#include "SWGCloudQueryCount.h"
#include "SWGCloudQueryDistinct.h"
#include "SWGCloudQueryFindById.h"
#include "SWGCloudQueryFindOne.h"
#include "SWGCloudQueryId.h"
#include "SWGCloudRole.h"
#include "SWGCloudSearch.h"
#include "SWGCloudTable.h"
#include "SWGCloudTableSave.h"
#include "SWGCloudUser.h"
#include "SWGColumn.h"
#include "SWGDeny.h"
#include "SWGEmailBody.h"
#include "SWGFileBody.h"
#include "SWGFilterBody.h"
#include "SWGFiltered.h"
#include "SWGKeyBody.h"
#include "SWGModifiedQueue.h"
#include "SWGModifiedQueueBody.h"
#include "SWGPasswordChangeBody.h"
#include "SWGQuery.h"
#include "SWGQueue.h"
#include "SWGQueueBody.h"
#include "SWGQueueMessage.h"
#include "SWGQueuePayloadWithCount.h"
#include "SWGRead.h"
#include "SWGRefreshMessageTimeoutBody.h"
#include "SWGRoleBody.h"
#include "SWGSearchFilter.h"
#include "SWGSearchQuery.h"
#include "SWGUserBody.h"
#include "SWGUserRoleBody.h"
#include "SWGWrite.h"

namespace Swagger {
  inline void* create(QString type) {
    if(QString("SWGACL").compare(type) == 0) {
      return new SWGACL();
    }
    if(QString("SWGAllow").compare(type) == 0) {
      return new SWGAllow();
    }
    if(QString("SWGBoolFilter").compare(type) == 0) {
      return new SWGBoolFilter();
    }
    if(QString("SWGBoolQuery").compare(type) == 0) {
      return new SWGBoolQuery();
    }
    if(QString("SWGCache").compare(type) == 0) {
      return new SWGCache();
    }
    if(QString("SWGCacheItem").compare(type) == 0) {
      return new SWGCacheItem();
    }
    if(QString("SWGCacheRequest").compare(type) == 0) {
      return new SWGCacheRequest();
    }
    if(QString("SWGCloudFile").compare(type) == 0) {
      return new SWGCloudFile();
    }
    if(QString("SWGCloudObject").compare(type) == 0) {
      return new SWGCloudObject();
    }
    if(QString("SWGCloudObjectSaveRequest").compare(type) == 0) {
      return new SWGCloudObjectSaveRequest();
    }
    if(QString("SWGCloudQuery").compare(type) == 0) {
      return new SWGCloudQuery();
    }
    if(QString("SWGCloudQueryCount").compare(type) == 0) {
      return new SWGCloudQueryCount();
    }
    if(QString("SWGCloudQueryDistinct").compare(type) == 0) {
      return new SWGCloudQueryDistinct();
    }
    if(QString("SWGCloudQueryFindById").compare(type) == 0) {
      return new SWGCloudQueryFindById();
    }
    if(QString("SWGCloudQueryFindOne").compare(type) == 0) {
      return new SWGCloudQueryFindOne();
    }
    if(QString("SWGCloudQueryId").compare(type) == 0) {
      return new SWGCloudQueryId();
    }
    if(QString("SWGCloudRole").compare(type) == 0) {
      return new SWGCloudRole();
    }
    if(QString("SWGCloudSearch").compare(type) == 0) {
      return new SWGCloudSearch();
    }
    if(QString("SWGCloudTable").compare(type) == 0) {
      return new SWGCloudTable();
    }
    if(QString("SWGCloudTableSave").compare(type) == 0) {
      return new SWGCloudTableSave();
    }
    if(QString("SWGCloudUser").compare(type) == 0) {
      return new SWGCloudUser();
    }
    if(QString("SWGColumn").compare(type) == 0) {
      return new SWGColumn();
    }
    if(QString("SWGDeny").compare(type) == 0) {
      return new SWGDeny();
    }
    if(QString("SWGEmailBody").compare(type) == 0) {
      return new SWGEmailBody();
    }
    if(QString("SWGFileBody").compare(type) == 0) {
      return new SWGFileBody();
    }
    if(QString("SWGFilterBody").compare(type) == 0) {
      return new SWGFilterBody();
    }
    if(QString("SWGFiltered").compare(type) == 0) {
      return new SWGFiltered();
    }
    if(QString("SWGKeyBody").compare(type) == 0) {
      return new SWGKeyBody();
    }
    if(QString("SWGModifiedQueue").compare(type) == 0) {
      return new SWGModifiedQueue();
    }
    if(QString("SWGModifiedQueueBody").compare(type) == 0) {
      return new SWGModifiedQueueBody();
    }
    if(QString("SWGPasswordChangeBody").compare(type) == 0) {
      return new SWGPasswordChangeBody();
    }
    if(QString("SWGQuery").compare(type) == 0) {
      return new SWGQuery();
    }
    if(QString("SWGQueue").compare(type) == 0) {
      return new SWGQueue();
    }
    if(QString("SWGQueueBody").compare(type) == 0) {
      return new SWGQueueBody();
    }
    if(QString("SWGQueueMessage").compare(type) == 0) {
      return new SWGQueueMessage();
    }
    if(QString("SWGQueuePayloadWithCount").compare(type) == 0) {
      return new SWGQueuePayloadWithCount();
    }
    if(QString("SWGRead").compare(type) == 0) {
      return new SWGRead();
    }
    if(QString("SWGRefreshMessageTimeoutBody").compare(type) == 0) {
      return new SWGRefreshMessageTimeoutBody();
    }
    if(QString("SWGRoleBody").compare(type) == 0) {
      return new SWGRoleBody();
    }
    if(QString("SWGSearchFilter").compare(type) == 0) {
      return new SWGSearchFilter();
    }
    if(QString("SWGSearchQuery").compare(type) == 0) {
      return new SWGSearchQuery();
    }
    if(QString("SWGUserBody").compare(type) == 0) {
      return new SWGUserBody();
    }
    if(QString("SWGUserRoleBody").compare(type) == 0) {
      return new SWGUserRoleBody();
    }
    if(QString("SWGWrite").compare(type) == 0) {
      return new SWGWrite();
    }
    
    return NULL;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != NULL) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return NULL;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
