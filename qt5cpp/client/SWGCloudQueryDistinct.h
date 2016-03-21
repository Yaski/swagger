/*
 * SWGCloudQueryDistinct.h
 * 
 * 
 */

#ifndef SWGCloudQueryDistinct_H_
#define SWGCloudQueryDistinct_H_

#include <QJsonObject>


#include "SWGCloudQuery.h"
#include "SWGObject.h"
#include "SWGQuery.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudQueryDistinct: public SWGObject {
public:
    SWGCloudQueryDistinct();
    SWGCloudQueryDistinct(QString* json);
    virtual ~SWGCloudQueryDistinct();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudQueryDistinct* fromJson(QString &jsonString);

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
    QList<QString*>* getOnKey();
    void setOnKey(QList<QString*>* onKey);
    

private:
    QString* key;
    qint32 skip;
    qint32 limit;
    SWGQuery* query;
    SWGObject* sort;
    SWGObject* select;
    QList<QString*>* onKey;
    
};

} /* namespace Swagger */

#endif /* SWGCloudQueryDistinct_H_ */
