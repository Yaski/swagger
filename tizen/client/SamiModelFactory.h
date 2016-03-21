#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiACL.h"
#include "SamiAllow.h"
#include "SamiBoolFilter.h"
#include "SamiBoolQuery.h"
#include "SamiCache.h"
#include "SamiCacheItem.h"
#include "SamiCacheRequest.h"
#include "SamiCloudFile.h"
#include "SamiCloudObject.h"
#include "SamiCloudObjectSaveRequest.h"
#include "SamiCloudQuery.h"
#include "SamiCloudQueryCount.h"
#include "SamiCloudQueryDistinct.h"
#include "SamiCloudQueryFindById.h"
#include "SamiCloudQueryFindOne.h"
#include "SamiCloudQueryId.h"
#include "SamiCloudRole.h"
#include "SamiCloudSearch.h"
#include "SamiCloudTable.h"
#include "SamiCloudTableSave.h"
#include "SamiCloudUser.h"
#include "SamiColumn.h"
#include "SamiDeny.h"
#include "SamiEmailBody.h"
#include "SamiFileBody.h"
#include "SamiFilterBody.h"
#include "SamiFiltered.h"
#include "SamiKeyBody.h"
#include "SamiModifiedQueue.h"
#include "SamiModifiedQueueBody.h"
#include "SamiPasswordChangeBody.h"
#include "SamiQuery.h"
#include "SamiQueue.h"
#include "SamiQueueBody.h"
#include "SamiQueueMessage.h"
#include "SamiQueuePayloadWithCount.h"
#include "SamiRead.h"
#include "SamiRefreshMessageTimeoutBody.h"
#include "SamiRoleBody.h"
#include "SamiSearchFilter.h"
#include "SamiSearchQuery.h"
#include "SamiUserBody.h"
#include "SamiUserRoleBody.h"
#include "SamiWrite.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiACL", true)) {
      return new SamiACL();
    }
    if(type.Equals(L"SamiAllow", true)) {
      return new SamiAllow();
    }
    if(type.Equals(L"SamiBoolFilter", true)) {
      return new SamiBoolFilter();
    }
    if(type.Equals(L"SamiBoolQuery", true)) {
      return new SamiBoolQuery();
    }
    if(type.Equals(L"SamiCache", true)) {
      return new SamiCache();
    }
    if(type.Equals(L"SamiCacheItem", true)) {
      return new SamiCacheItem();
    }
    if(type.Equals(L"SamiCacheRequest", true)) {
      return new SamiCacheRequest();
    }
    if(type.Equals(L"SamiCloudFile", true)) {
      return new SamiCloudFile();
    }
    if(type.Equals(L"SamiCloudObject", true)) {
      return new SamiCloudObject();
    }
    if(type.Equals(L"SamiCloudObjectSaveRequest", true)) {
      return new SamiCloudObjectSaveRequest();
    }
    if(type.Equals(L"SamiCloudQuery", true)) {
      return new SamiCloudQuery();
    }
    if(type.Equals(L"SamiCloudQueryCount", true)) {
      return new SamiCloudQueryCount();
    }
    if(type.Equals(L"SamiCloudQueryDistinct", true)) {
      return new SamiCloudQueryDistinct();
    }
    if(type.Equals(L"SamiCloudQueryFindById", true)) {
      return new SamiCloudQueryFindById();
    }
    if(type.Equals(L"SamiCloudQueryFindOne", true)) {
      return new SamiCloudQueryFindOne();
    }
    if(type.Equals(L"SamiCloudQueryId", true)) {
      return new SamiCloudQueryId();
    }
    if(type.Equals(L"SamiCloudRole", true)) {
      return new SamiCloudRole();
    }
    if(type.Equals(L"SamiCloudSearch", true)) {
      return new SamiCloudSearch();
    }
    if(type.Equals(L"SamiCloudTable", true)) {
      return new SamiCloudTable();
    }
    if(type.Equals(L"SamiCloudTableSave", true)) {
      return new SamiCloudTableSave();
    }
    if(type.Equals(L"SamiCloudUser", true)) {
      return new SamiCloudUser();
    }
    if(type.Equals(L"SamiColumn", true)) {
      return new SamiColumn();
    }
    if(type.Equals(L"SamiDeny", true)) {
      return new SamiDeny();
    }
    if(type.Equals(L"SamiEmailBody", true)) {
      return new SamiEmailBody();
    }
    if(type.Equals(L"SamiFileBody", true)) {
      return new SamiFileBody();
    }
    if(type.Equals(L"SamiFilterBody", true)) {
      return new SamiFilterBody();
    }
    if(type.Equals(L"SamiFiltered", true)) {
      return new SamiFiltered();
    }
    if(type.Equals(L"SamiKeyBody", true)) {
      return new SamiKeyBody();
    }
    if(type.Equals(L"SamiModifiedQueue", true)) {
      return new SamiModifiedQueue();
    }
    if(type.Equals(L"SamiModifiedQueueBody", true)) {
      return new SamiModifiedQueueBody();
    }
    if(type.Equals(L"SamiPasswordChangeBody", true)) {
      return new SamiPasswordChangeBody();
    }
    if(type.Equals(L"SamiQuery", true)) {
      return new SamiQuery();
    }
    if(type.Equals(L"SamiQueue", true)) {
      return new SamiQueue();
    }
    if(type.Equals(L"SamiQueueBody", true)) {
      return new SamiQueueBody();
    }
    if(type.Equals(L"SamiQueueMessage", true)) {
      return new SamiQueueMessage();
    }
    if(type.Equals(L"SamiQueuePayloadWithCount", true)) {
      return new SamiQueuePayloadWithCount();
    }
    if(type.Equals(L"SamiRead", true)) {
      return new SamiRead();
    }
    if(type.Equals(L"SamiRefreshMessageTimeoutBody", true)) {
      return new SamiRefreshMessageTimeoutBody();
    }
    if(type.Equals(L"SamiRoleBody", true)) {
      return new SamiRoleBody();
    }
    if(type.Equals(L"SamiSearchFilter", true)) {
      return new SamiSearchFilter();
    }
    if(type.Equals(L"SamiSearchQuery", true)) {
      return new SamiSearchQuery();
    }
    if(type.Equals(L"SamiUserBody", true)) {
      return new SamiUserBody();
    }
    if(type.Equals(L"SamiUserRoleBody", true)) {
      return new SamiUserRoleBody();
    }
    if(type.Equals(L"SamiWrite", true)) {
      return new SamiWrite();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
