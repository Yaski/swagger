
#include "SWGRefreshMessageTimeoutBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRefreshMessageTimeoutBody::SWGRefreshMessageTimeoutBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRefreshMessageTimeoutBody::SWGRefreshMessageTimeoutBody() {
    init();
}

SWGRefreshMessageTimeoutBody::~SWGRefreshMessageTimeoutBody() {
    this->cleanup();
}

void
SWGRefreshMessageTimeoutBody::init() {
    timeout = 0L;
    key = new QString("");
    
}

void
SWGRefreshMessageTimeoutBody::cleanup() {
    
    if(key != NULL) {
        delete key;
    }
    
}

SWGRefreshMessageTimeoutBody*
SWGRefreshMessageTimeoutBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRefreshMessageTimeoutBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&timeout, pJson["timeout"], "qint64", "");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGRefreshMessageTimeoutBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRefreshMessageTimeoutBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("timeout", QJsonValue(timeout));
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint64
SWGRefreshMessageTimeoutBody::getTimeout() {
    return timeout;
}
void
SWGRefreshMessageTimeoutBody::setTimeout(qint64 timeout) {
    this->timeout = timeout;
}

QString*
SWGRefreshMessageTimeoutBody::getKey() {
    return key;
}
void
SWGRefreshMessageTimeoutBody::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

