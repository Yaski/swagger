/*
 * SWGCloudQueryCount.h
 * 
 * 
 */

#ifndef SWGCloudQueryCount_H_
#define SWGCloudQueryCount_H_

#include <QJsonObject>


#include "SWGCloudQuery.h"
#include "SWGQuery.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudQueryCount: public SWGObject {
public:
    SWGCloudQueryCount();
    SWGCloudQueryCount(QString* json);
    virtual ~SWGCloudQueryCount();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudQueryCount* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    qint32 getSkip();
    void setSkip(qint32 skip);
    qint32 getLimit();
    void setLimit(qint32 limit);
    SWGQuery* getQuery();
    void setQuery(SWGQuery* query);
    QString* getSort();
    void setSort(QString* sort);
    QString* getSelect();
    void setSelect(QString* select);
    

private:
    QString* key;
    qint32 skip;
    qint32 limit;
    SWGQuery* query;
    QString* sort;
    QString* select;
    
};

} /* namespace Swagger */

#endif /* SWGCloudQueryCount_H_ */
