
#include "SWGCacheItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCacheItem::SWGCacheItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCacheItem::SWGCacheItem() {
    init();
}

SWGCacheItem::~SWGCacheItem() {
    this->cleanup();
}

void
SWGCacheItem::init() {
    key = new QString("");
    value = new QString("");
    
}

void
SWGCacheItem::cleanup() {
    if(key != NULL) {
        delete key;
    }
    if(value != NULL) {
        delete value;
    }
    
}

SWGCacheItem*
SWGCacheItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCacheItem::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&value, pJson["value"], "QString", "QString");
    
}

QString
SWGCacheItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCacheItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("value"), value, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGCacheItem::getKey() {
    return key;
}
void
SWGCacheItem::setKey(QString* key) {
    this->key = key;
}

QString*
SWGCacheItem::getValue() {
    return value;
}
void
SWGCacheItem::setValue(QString* value) {
    this->value = value;
}



} /* namespace Swagger */

