/*
 * SWGCloudQuery.h
 * 
 * 
 */

#ifndef SWGCloudQuery_H_
#define SWGCloudQuery_H_

#include <QJsonObject>


#include "SWGObject.h"
#include "SWGQuery.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudQuery: public SWGObject {
public:
    SWGCloudQuery();
    SWGCloudQuery(QString* json);
    virtual ~SWGCloudQuery();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudQuery* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    qint32 getSkip();
    void setSkip(qint32 skip);
    qint32 getLimit();
    void setLimit(qint32 limit);
    SWGQuery* getQuery();
    void setQuery(SWGQuery* query);
    SWGObject* getSort();
    void setSort(SWGObject* sort);
    SWGObject* getSelect();
    void setSelect(SWGObject* select);
    

private:
    QString* key;
    qint32 skip;
    qint32 limit;
    SWGQuery* query;
    SWGObject* sort;
    SWGObject* select;
    
};

} /* namespace Swagger */

#endif /* SWGCloudQuery_H_ */
