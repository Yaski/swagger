/*
 * SWGCloudQueryFindById.h
 * 
 * 
 */

#ifndef SWGCloudQueryFindById_H_
#define SWGCloudQueryFindById_H_

#include <QJsonObject>


#include "SWGCloudQuery.h"
#include "SWGCloudQueryId.h"
#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudQueryFindById: public SWGObject {
public:
    SWGCloudQueryFindById();
    SWGCloudQueryFindById(QString* json);
    virtual ~SWGCloudQueryFindById();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudQueryFindById* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    qint32 getSkip();
    void setSkip(qint32 skip);
    qint32 getLimit();
    void setLimit(qint32 limit);
    SWGCloudQueryId* getQuery();
    void setQuery(SWGCloudQueryId* query);
    SWGObject* getSort();
    void setSort(SWGObject* sort);
    SWGObject* getSelect();
    void setSelect(SWGObject* select);
    

private:
    QString* key;
    qint32 skip;
    qint32 limit;
    SWGCloudQueryId* query;
    SWGObject* sort;
    SWGObject* select;
    
};

} /* namespace Swagger */

#endif /* SWGCloudQueryFindById_H_ */
