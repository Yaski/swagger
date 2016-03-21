/*
 * SWGQueue.h
 * 
 * 
 */

#ifndef SWGQueue_H_
#define SWGQueue_H_

#include <QJsonObject>


#include "QDateTime.h"
#include "SWGACL.h"
#include "SWGQueueMessage.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGQueue: public SWGObject {
public:
    SWGQueue();
    SWGQueue(QString* json);
    virtual ~SWGQueue();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGQueue* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* _id);
    QString* getTableName();
    void setTableName(QString* _tableName);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* createdAt);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updatedAt);
    SWGACL* getACL();
    void setACL(SWGACL* ACL);
    QString* getType();
    void setType(QString* _type);
    QDateTime* getExpires();
    void setExpires(QDateTime* expires);
    QString* getQueueType();
    void setQueueType(QString* queueType);
    QString* getRetry();
    void setRetry(QString* retry);
    QString* getName();
    void setName(QString* name);
    QList<QString*>* getSubscribers();
    void setSubscribers(QList<QString*>* subscribers);
    QList<SWGQueueMessage*>* getMessages();
    void setMessages(QList<SWGQueueMessage*>* messages);
    

private:
    QString* _id;
    QString* _tableName;
    QDateTime* createdAt;
    QDateTime* updatedAt;
    SWGACL* ACL;
    QString* _type;
    QDateTime* expires;
    QString* queueType;
    QString* retry;
    QString* name;
    QList<QString*>* subscribers;
    QList<SWGQueueMessage*>* messages;
    
};

} /* namespace Swagger */

#endif /* SWGQueue_H_ */
