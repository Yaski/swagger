/*
 * SWGModifiedQueue.h
 * 
 * 
 */

#ifndef SWGModifiedQueue_H_
#define SWGModifiedQueue_H_

#include <QJsonObject>


#include "QDateTime.h"
#include "SWGACL.h"
#include "SWGQueueMessage.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGModifiedQueue: public SWGObject {
public:
    SWGModifiedQueue();
    SWGModifiedQueue(QString* json);
    virtual ~SWGModifiedQueue();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGModifiedQueue* fromJson(QString &jsonString);

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
    bool getIsModified();
    void setIsModified(bool _isModified);
    QList<QString*>* getModifiedColumns();
    void setModifiedColumns(QList<QString*>* _modifiedColumns);
    QList<SWGQueueMessage*>* getMessages();
    void setMessages(QList<SWGQueueMessage*>* messages);
    

private:
    SWGACL* ACL;
    QString* _type;
    QDateTime* expires;
    QString* queueType;
    QString* retry;
    QString* name;
    QList<QString*>* subscribers;
    bool _isModified;
    QList<QString*>* _modifiedColumns;
    QList<SWGQueueMessage*>* messages;
    
};

} /* namespace Swagger */

#endif /* SWGModifiedQueue_H_ */
