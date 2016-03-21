/*
 * SWGQueueMessage.h
 * 
 * 
 */

#ifndef SWGQueueMessage_H_
#define SWGQueueMessage_H_

#include <QJsonObject>


#include "QDateTime.h"
#include "SWGACL.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGQueueMessage: public SWGObject {
public:
    SWGQueueMessage();
    SWGQueueMessage(QString* json);
    virtual ~SWGQueueMessage();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGQueueMessage* fromJson(QString &jsonString);

    SWGACL* getACL();
    void setACL(SWGACL* ACL);
    QString* getType();
    void setType(QString* _type);
    QDateTime* getExpires();
    void setExpires(QDateTime* expires);
    QString* getId();
    void setId(QString* _id);
    QDateTime* getDelay();
    void setDelay(QDateTime* delay);
    qint64 getTimeout();
    void setTimeout(qint64 timeout);
    QList<QString*>* getModifiedColumns();
    void setModifiedColumns(QList<QString*>* _modifiedColumns);
    bool getIsModified();
    void setIsModified(bool _isModified);
    QString* getMessage();
    void setMessage(QString* message);
    

private:
    SWGACL* ACL;
    QString* _type;
    QDateTime* expires;
    QString* _id;
    QDateTime* delay;
    qint64 timeout;
    QList<QString*>* _modifiedColumns;
    bool _isModified;
    QString* message;
    
};

} /* namespace Swagger */

#endif /* SWGQueueMessage_H_ */
