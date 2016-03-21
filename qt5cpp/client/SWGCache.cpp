
#include "SWGCache.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCache::SWGCache(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCache::SWGCache() {
    init();
}

SWGCache::~SWGCache() {
    this->cleanup();
}

void
SWGCache::init() {
    _type = new QString("");
    name = new QString("");
    size = new QString("");
    
}

void
SWGCache::cleanup() {
    if(_type != NULL) {
        delete _type;
    }
    if(name != NULL) {
        delete name;
    }
    if(size != NULL) {
        delete size;
    }
    
}

SWGCache*
SWGCache::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCache::fromJsonObject(QJsonObject &pJson) {
    setValue(&_type, pJson["_type"], "QString", "QString");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&size, pJson["size"], "QString", "QString");
    
}

QString
SWGCache::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCache::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("_type"), _type, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("size"), size, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGCache::getType() {
    return _type;
}
void
SWGCache::setType(QString* _type) {
    this->_type = _type;
}

QString*
SWGCache::getName() {
    return name;
}
void
SWGCache::setName(QString* name) {
    this->name = name;
}

QString*
SWGCache::getSize() {
    return size;
}
void
SWGCache::setSize(QString* size) {
    this->size = size;
}



} /* namespace Swagger */

