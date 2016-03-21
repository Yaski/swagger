/*
 * SWGCacheItem.h
 * 
 * 
 */

#ifndef SWGCacheItem_H_
#define SWGCacheItem_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCacheItem: public SWGObject {
public:
    SWGCacheItem();
    SWGCacheItem(QString* json);
    virtual ~SWGCacheItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCacheItem* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    QString* getValue();
    void setValue(QString* value);
    

private:
    QString* key;
    QString* value;
    
};

} /* namespace Swagger */

#endif /* SWGCacheItem_H_ */
