/*
 * SWGCacheRequest.h
 * 
 * 
 */

#ifndef SWGCacheRequest_H_
#define SWGCacheRequest_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCacheRequest: public SWGObject {
public:
    SWGCacheRequest();
    SWGCacheRequest(QString* json);
    virtual ~SWGCacheRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCacheRequest* fromJson(QString &jsonString);

    QString* getItem();
    void setItem(QString* item);
    QString* getKey();
    void setKey(QString* key);
    

private:
    QString* item;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGCacheRequest_H_ */
