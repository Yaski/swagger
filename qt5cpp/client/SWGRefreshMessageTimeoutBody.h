/*
 * SWGRefreshMessageTimeoutBody.h
 * 
 * 
 */

#ifndef SWGRefreshMessageTimeoutBody_H_
#define SWGRefreshMessageTimeoutBody_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGRefreshMessageTimeoutBody: public SWGObject {
public:
    SWGRefreshMessageTimeoutBody();
    SWGRefreshMessageTimeoutBody(QString* json);
    virtual ~SWGRefreshMessageTimeoutBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRefreshMessageTimeoutBody* fromJson(QString &jsonString);

    qint64 getTimeout();
    void setTimeout(qint64 timeout);
    QString* getKey();
    void setKey(QString* key);
    

private:
    qint64 timeout;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGRefreshMessageTimeoutBody_H_ */
