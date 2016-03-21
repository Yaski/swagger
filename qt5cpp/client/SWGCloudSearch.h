/*
 * SWGCloudSearch.h
 * 
 * 
 */

#ifndef SWGCloudSearch_H_
#define SWGCloudSearch_H_

#include <QJsonObject>


#include "SWGFilterBody.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudSearch: public SWGObject {
public:
    SWGCloudSearch();
    SWGCloudSearch(QString* json);
    virtual ~SWGCloudSearch();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudSearch* fromJson(QString &jsonString);

    SWGFilterBody* getQuery();
    void setQuery(SWGFilterBody* query);
    QList<QString*>* getSort();
    void setSort(QList<QString*>* sort);
    QString* getCollectionName();
    void setCollectionName(QString* collectionName);
    QString* getKey();
    void setKey(QString* key);
    qint32 getSkip();
    void setSkip(qint32 skip);
    qint32 getLimit();
    void setLimit(qint32 limit);
    

private:
    SWGFilterBody* query;
    QList<QString*>* sort;
    QString* collectionName;
    QString* key;
    qint32 skip;
    qint32 limit;
    
};

} /* namespace Swagger */

#endif /* SWGCloudSearch_H_ */
