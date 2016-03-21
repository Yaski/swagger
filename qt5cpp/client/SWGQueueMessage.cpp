
#include "SWGQueueMessage.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGQueueMessage::SWGQueueMessage(QString* json) {
    init();
    this->fromJson(*json);
}

SWGQueueMessage::SWGQueueMessage() {
    init();
}

SWGQueueMessage::~SWGQueueMessage() {
    this->cleanup();
}

void
SWGQueueMessage::init() {
    ACL = new SWGACL();
    _type = new QString("");
    expires = NULL;
    _id = new QString("");
    delay = NULL;
    timeout = 0L;
    _modifiedColumns = new QList<QString*>();
    _isModified = false;
    message = new QString("");
    
}

void
SWGQueueMessage::cleanup() {
    if(ACL != NULL) {
        delete ACL;
    }
    if(_type != NULL) {
        delete _type;
    }
    if(expires != NULL) {
        delete expires;
    }
    if(_id != NULL) {
        delete _id;
    }
    if(delay != NULL) {
        delete delay;
    }
    
    if(_modifiedColumns != NULL) {
        QList<QString*>* arr = _modifiedColumns;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete _modifiedColumns;
    }
    
    if(message != NULL) {
        delete message;
    }
    
}

SWGQueueMessage*
SWGQueueMessage::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGQueueMessage::fromJsonObject(QJsonObject &pJson) {
    setValue(&ACL, pJson["ACL"], "SWGACL", "SWGACL");
    setValue(&_type, pJson["_type"], "QString", "QString");
    setValue(&expires, pJson["expires"], "QDateTime", "QDateTime");
    setValue(&_id, pJson["_id"], "QString", "QString");
    setValue(&delay, pJson["delay"], "QDateTime", "QDateTime");
    setValue(&timeout, pJson["timeout"], "qint64", "");
    setValue(&_modifiedColumns, pJson["_modifiedColumns"], "QList", "QString");
    setValue(&_isModified, pJson["_isModified"], "bool", "");
    setValue(&message, pJson["message"], "QString", "QString");
    
}

QString
SWGQueueMessage::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGQueueMessage::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("ACL"), ACL, obj, QString("SWGACL"));
    
    
    
    
    
    toJsonValue(QString("_type"), _type, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("expires"), expires, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("_id"), _id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("delay"), delay, obj, QString("QDateTime"));
    
    
    
    obj->insert("timeout", QJsonValue(timeout));
    
    
    QList<QString*>* _modifiedColumnsList = _modifiedColumns;
    QJsonArray _modifiedColumnsJsonArray;
    toJsonArray((QList<void*>*)_modifiedColumns, &_modifiedColumnsJsonArray, "_modifiedColumns", "QString");

    obj->insert("_modifiedColumns", _modifiedColumnsJsonArray);
    
    
    obj->insert("_isModified", QJsonValue(_isModified));
    
    
    toJsonValue(QString("message"), message, obj, QString("QString"));
    
    
    
    

    return obj;
}

SWGACL*
SWGQueueMessage::getACL() {
    return ACL;
}
void
SWGQueueMessage::setACL(SWGACL* ACL) {
    this->ACL = ACL;
}

QString*
SWGQueueMessage::getType() {
    return _type;
}
void
SWGQueueMessage::setType(QString* _type) {
    this->_type = _type;
}

QDateTime*
SWGQueueMessage::getExpires() {
    return expires;
}
void
SWGQueueMessage::setExpires(QDateTime* expires) {
    this->expires = expires;
}

QString*
SWGQueueMessage::getId() {
    return _id;
}
void
SWGQueueMessage::setId(QString* _id) {
    this->_id = _id;
}

QDateTime*
SWGQueueMessage::getDelay() {
    return delay;
}
void
SWGQueueMessage::setDelay(QDateTime* delay) {
    this->delay = delay;
}

qint64
SWGQueueMessage::getTimeout() {
    return timeout;
}
void
SWGQueueMessage::setTimeout(qint64 timeout) {
    this->timeout = timeout;
}

QList<QString*>*
SWGQueueMessage::getModifiedColumns() {
    return _modifiedColumns;
}
void
SWGQueueMessage::setModifiedColumns(QList<QString*>* _modifiedColumns) {
    this->_modifiedColumns = _modifiedColumns;
}

bool
SWGQueueMessage::getIsModified() {
    return _isModified;
}
void
SWGQueueMessage::setIsModified(bool _isModified) {
    this->_isModified = _isModified;
}

QString*
SWGQueueMessage::getMessage() {
    return message;
}
void
SWGQueueMessage::setMessage(QString* message) {
    this->message = message;
}



} /* namespace Swagger */

