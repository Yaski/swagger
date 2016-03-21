
#include "SWGCacheRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCacheRequest::SWGCacheRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCacheRequest::SWGCacheRequest() {
    init();
}

SWGCacheRequest::~SWGCacheRequest() {
    this->cleanup();
}

void
SWGCacheRequest::init() {
    item = new QString("");
    key = new QString("");
    
}

void
SWGCacheRequest::cleanup() {
    if(item != NULL) {
        delete item;
    }
    if(key != NULL) {
        delete key;
    }
    
}

SWGCacheRequest*
SWGCacheRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCacheRequest::fromJsonObject(QJsonObject &pJson) {
    setValue(&item, pJson["item"], "QString", "QString");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGCacheRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCacheRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("item"), item, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGCacheRequest::getItem() {
    return item;
}
void
SWGCacheRequest::setItem(QString* item) {
    this->item = item;
}

QString*
SWGCacheRequest::getKey() {
    return key;
}
void
SWGCacheRequest::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

