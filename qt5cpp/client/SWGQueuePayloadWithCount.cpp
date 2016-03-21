
#include "SWGQueuePayloadWithCount.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGQueuePayloadWithCount::SWGQueuePayloadWithCount(QString* json) {
    init();
    this->fromJson(*json);
}

SWGQueuePayloadWithCount::SWGQueuePayloadWithCount() {
    init();
}

SWGQueuePayloadWithCount::~SWGQueuePayloadWithCount() {
    this->cleanup();
}

void
SWGQueuePayloadWithCount::init() {
    count = 0L;
    key = new QString("");
    
}

void
SWGQueuePayloadWithCount::cleanup() {
    
    if(key != NULL) {
        delete key;
    }
    
}

SWGQueuePayloadWithCount*
SWGQueuePayloadWithCount::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGQueuePayloadWithCount::fromJsonObject(QJsonObject &pJson) {
    setValue(&count, pJson["count"], "qint64", "");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGQueuePayloadWithCount::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGQueuePayloadWithCount::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("count", QJsonValue(count));
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint64
SWGQueuePayloadWithCount::getCount() {
    return count;
}
void
SWGQueuePayloadWithCount::setCount(qint64 count) {
    this->count = count;
}

QString*
SWGQueuePayloadWithCount::getKey() {
    return key;
}
void
SWGQueuePayloadWithCount::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

