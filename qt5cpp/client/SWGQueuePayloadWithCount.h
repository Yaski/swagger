/*
 * SWGQueuePayloadWithCount.h
 * 
 * 
 */

#ifndef SWGQueuePayloadWithCount_H_
#define SWGQueuePayloadWithCount_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGQueuePayloadWithCount: public SWGObject {
public:
    SWGQueuePayloadWithCount();
    SWGQueuePayloadWithCount(QString* json);
    virtual ~SWGQueuePayloadWithCount();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGQueuePayloadWithCount* fromJson(QString &jsonString);

    qint64 getCount();
    void setCount(qint64 count);
    QString* getKey();
    void setKey(QString* key);
    

private:
    qint64 count;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGQueuePayloadWithCount_H_ */
