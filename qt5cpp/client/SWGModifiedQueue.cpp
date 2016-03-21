
#include "SWGModifiedQueue.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGModifiedQueue::SWGModifiedQueue(QString* json) {
    init();
    this->fromJson(*json);
}

SWGModifiedQueue::SWGModifiedQueue() {
    init();
}

SWGModifiedQueue::~SWGModifiedQueue() {
    this->cleanup();
}

void
SWGModifiedQueue::init() {
    ACL = new SWGACL();
    _type = new QString("");
    expires = NULL;
    queueType = new QString("");
    retry = new QString("");
    name = new QString("");
    subscribers = new QList<QString*>();
    _isModified = false;
    _modifiedColumns = new QList<QString*>();
    messages = new QList<SWGQueueMessage*>();
    
}

void
SWGModifiedQueue::cleanup() {
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
    
    if(_modifiedColumns != NULL) {
        QList<QString*>* arr = _modifiedColumns;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete _modifiedColumns;
    }
    if(messages != NULL) {
        QList<SWGQueueMessage*>* arr = messages;
        foreach(SWGQueueMessage* o, *arr) {
            delete o;
        }
        delete messages;
    }
    
}

SWGModifiedQueue*
SWGModifiedQueue::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGModifiedQueue::fromJsonObject(QJsonObject &pJson) {
    setValue(&ACL, pJson["ACL"], "SWGACL", "SWGACL");
    setValue(&_type, pJson["_type"], "QString", "QString");
    setValue(&expires, pJson["expires"], "QDateTime", "QDateTime");
    setValue(&queueType, pJson["queueType"], "QString", "QString");
    setValue(&retry, pJson["retry"], "QString", "QString");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&subscribers, pJson["subscribers"], "QList", "QString");
    setValue(&_isModified, pJson["_isModified"], "bool", "");
    setValue(&_modifiedColumns, pJson["_modifiedColumns"], "QList", "QString");
    setValue(&messages, pJson["messages"], "QList", "SWGQueueMessage");
    
}

QString
SWGModifiedQueue::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGModifiedQueue::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
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
    
    
    obj->insert("_isModified", QJsonValue(_isModified));
    
    
    QList<QString*>* _modifiedColumnsList = _modifiedColumns;
    QJsonArray _modifiedColumnsJsonArray;
    toJsonArray((QList<void*>*)_modifiedColumns, &_modifiedColumnsJsonArray, "_modifiedColumns", "QString");

    obj->insert("_modifiedColumns", _modifiedColumnsJsonArray);
    
    
    
    
    QList<SWGQueueMessage*>* messagesList = messages;
    QJsonArray messagesJsonArray;
    toJsonArray((QList<void*>*)messages, &messagesJsonArray, "messages", "SWGQueueMessage");

    obj->insert("messages", messagesJsonArray);
    
    
    

    return obj;
}

SWGACL*
SWGModifiedQueue::getACL() {
    return ACL;
}
void
SWGModifiedQueue::setACL(SWGACL* ACL) {
    this->ACL = ACL;
}

QString*
SWGModifiedQueue::getType() {
    return _type;
}
void
SWGModifiedQueue::setType(QString* _type) {
    this->_type = _type;
}

QDateTime*
SWGModifiedQueue::getExpires() {
    return expires;
}
void
SWGModifiedQueue::setExpires(QDateTime* expires) {
    this->expires = expires;
}

QString*
SWGModifiedQueue::getQueueType() {
    return queueType;
}
void
SWGModifiedQueue::setQueueType(QString* queueType) {
    this->queueType = queueType;
}

QString*
SWGModifiedQueue::getRetry() {
    return retry;
}
void
SWGModifiedQueue::setRetry(QString* retry) {
    this->retry = retry;
}

QString*
SWGModifiedQueue::getName() {
    return name;
}
void
SWGModifiedQueue::setName(QString* name) {
    this->name = name;
}

QList<QString*>*
SWGModifiedQueue::getSubscribers() {
    return subscribers;
}
void
SWGModifiedQueue::setSubscribers(QList<QString*>* subscribers) {
    this->subscribers = subscribers;
}

bool
SWGModifiedQueue::getIsModified() {
    return _isModified;
}
void
SWGModifiedQueue::setIsModified(bool _isModified) {
    this->_isModified = _isModified;
}

QList<QString*>*
SWGModifiedQueue::getModifiedColumns() {
    return _modifiedColumns;
}
void
SWGModifiedQueue::setModifiedColumns(QList<QString*>* _modifiedColumns) {
    this->_modifiedColumns = _modifiedColumns;
}

QList<SWGQueueMessage*>*
SWGModifiedQueue::getMessages() {
    return messages;
}
void
SWGModifiedQueue::setMessages(QList<SWGQueueMessage*>* messages) {
    this->messages = messages;
}



} /* namespace Swagger */

