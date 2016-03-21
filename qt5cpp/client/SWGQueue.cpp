
#include "SWGQueue.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGQueue::SWGQueue(QString* json) {
    init();
    this->fromJson(*json);
}

SWGQueue::SWGQueue() {
    init();
}

SWGQueue::~SWGQueue() {
    this->cleanup();
}

void
SWGQueue::init() {
    _id = new QString("");
    _tableName = new QString("");
    createdAt = NULL;
    updatedAt = NULL;
    ACL = new SWGACL();
    _type = new QString("");
    expires = NULL;
    queueType = new QString("");
    retry = new QString("");
    name = new QString("");
    subscribers = new QList<QString*>();
    messages = new QList<SWGQueueMessage*>();
    
}

void
SWGQueue::cleanup() {
    if(_id != NULL) {
        delete _id;
    }
    if(_tableName != NULL) {
        delete _tableName;
    }
    if(createdAt != NULL) {
        delete createdAt;
    }
    if(updatedAt != NULL) {
        delete updatedAt;
    }
    if(ACL != NULL) {
        delete ACL;
    }
    if(_type != NULL) {
        delete _type;
    }
    if(expires != NULL) {
        delete expires;
    }
    if(queueType != NULL) {
        delete queueType;
    }
    if(retry != NULL) {
        delete retry;
    }
    if(name != NULL) {
        delete name;
    }
    if(subscribers != NULL) {
        QList<QString*>* arr = subscribers;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete subscribers;
    }
    if(messages != NULL) {
        QList<SWGQueueMessage*>* arr = messages;
        foreach(SWGQueueMessage* o, *arr) {
            delete o;
        }
        delete messages;
    }
    
}

SWGQueue*
SWGQueue::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGQueue::fromJsonObject(QJsonObject &pJson) {
    setValue(&_id, pJson["_id"], "QString", "QString");
    setValue(&_tableName, pJson["_tableName"], "QString", "QString");
    setValue(&createdAt, pJson["createdAt"], "QDateTime", "QDateTime");
    setValue(&updatedAt, pJson["updatedAt"], "QDateTime", "QDateTime");
    setValue(&ACL, pJson["ACL"], "SWGACL", "SWGACL");
    setValue(&_type, pJson["_type"], "QString", "QString");
    setValue(&expires, pJson["expires"], "QDateTime", "QDateTime");
    setValue(&queueType, pJson["queueType"], "QString", "QString");
    setValue(&retry, pJson["retry"], "QString", "QString");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&subscribers, pJson["subscribers"], "QList", "QString");
    setValue(&messages, pJson["messages"], "QList", "SWGQueueMessage");
    
}

QString
SWGQueue::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGQueue::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("_id"), _id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("_tableName"), _tableName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("createdAt"), createdAt, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updatedAt"), updatedAt, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("ACL"), ACL, obj, QString("SWGACL"));
    
    
    
    
    
    toJsonValue(QString("_type"), _type, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("expires"), expires, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("queueType"), queueType, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("retry"), retry, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    QList<QString*>* subscribersList = subscribers;
    QJsonArray subscribersJsonArray;
    toJsonArray((QList<void*>*)subscribers, &subscribersJsonArray, "subscribers", "QString");

    obj->insert("subscribers", subscribersJsonArray);
    
    
    
    
    QList<SWGQueueMessage*>* messagesList = messages;
    QJsonArray messagesJsonArray;
    toJsonArray((QList<void*>*)messages, &messagesJsonArray, "messages", "SWGQueueMessage");

    obj->insert("messages", messagesJsonArray);
    
    
    

    return obj;
}

QString*
SWGQueue::getId() {
    return _id;
}
void
SWGQueue::setId(QString* _id) {
    this->_id = _id;
}

QString*
SWGQueue::getTableName() {
    return _tableName;
}
void
SWGQueue::setTableName(QString* _tableName) {
    this->_tableName = _tableName;
}

QDateTime*
SWGQueue::getCreatedAt() {
    return createdAt;
}
void
SWGQueue::setCreatedAt(QDateTime* createdAt) {
    this->createdAt = createdAt;
}

QDateTime*
SWGQueue::getUpdatedAt() {
    return updatedAt;
}
void
SWGQueue::setUpdatedAt(QDateTime* updatedAt) {
    this->updatedAt = updatedAt;
}

SWGACL*
SWGQueue::getACL() {
    return ACL;
}
void
SWGQueue::setACL(SWGACL* ACL) {
    this->ACL = ACL;
}

QString*
SWGQueue::getType() {
    return _type;
}
void
SWGQueue::setType(QString* _type) {
    this->_type = _type;
}

QDateTime*
SWGQueue::getExpires() {
    return expires;
}
void
SWGQueue::setExpires(QDateTime* expires) {
    this->expires = expires;
}

QString*
SWGQueue::getQueueType() {
    return queueType;
}
void
SWGQueue::setQueueType(QString* queueType) {
    this->queueType = queueType;
}

QString*
SWGQueue::getRetry() {
    return retry;
}
void
SWGQueue::setRetry(QString* retry) {
    this->retry = retry;
}

QString*
SWGQueue::getName() {
    return name;
}
void
SWGQueue::setName(QString* name) {
    this->name = name;
}

QList<QString*>*
SWGQueue::getSubscribers() {
    return subscribers;
}
void
SWGQueue::setSubscribers(QList<QString*>* subscribers) {
    this->subscribers = subscribers;
}

QList<SWGQueueMessage*>*
SWGQueue::getMessages() {
    return messages;
}
void
SWGQueue::setMessages(QList<SWGQueueMessage*>* messages) {
    this->messages = messages;
}



} /* namespace Swagger */

