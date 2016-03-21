
#include "SWGCloudFile.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudFile::SWGCloudFile(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudFile::SWGCloudFile() {
    init();
}

SWGCloudFile::~SWGCloudFile() {
    this->cleanup();
}

void
SWGCloudFile::init() {
    _id = new QString("");
    _type = new QString("");
    ACL = new SWGACL();
    name = new QString("");
    size = 0.0f;
    url = new QString("");
    expires = NULL;
    contentType = new QString("");
    
}

void
SWGCloudFile::cleanup() {
    if(_id != NULL) {
        delete _id;
    }
    if(_type != NULL) {
        delete _type;
    }
    if(ACL != NULL) {
        delete ACL;
    }
    if(name != NULL) {
        delete name;
    }
    
    if(url != NULL) {
        delete url;
    }
    if(expires != NULL) {
        delete expires;
    }
    if(contentType != NULL) {
        delete contentType;
    }
    
}

SWGCloudFile*
SWGCloudFile::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudFile::fromJsonObject(QJsonObject &pJson) {
    setValue(&_id, pJson["_id"], "QString", "QString");
    setValue(&_type, pJson["_type"], "QString", "QString");
    setValue(&ACL, pJson["ACL"], "SWGACL", "SWGACL");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&size, pJson["size"], "float", "");
    setValue(&url, pJson["url"], "QString", "QString");
    setValue(&expires, pJson["expires"], "QDateTime", "QDateTime");
    setValue(&contentType, pJson["contentType"], "QString", "QString");
    
}

QString
SWGCloudFile::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudFile::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("_id"), _id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("_type"), _type, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("ACL"), ACL, obj, QString("SWGACL"));
    
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    obj->insert("size", QJsonValue(size));
    
    
    toJsonValue(QString("url"), url, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("expires"), expires, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("contentType"), contentType, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGCloudFile::getId() {
    return _id;
}
void
SWGCloudFile::setId(QString* _id) {
    this->_id = _id;
}

QString*
SWGCloudFile::getType() {
    return _type;
}
void
SWGCloudFile::setType(QString* _type) {
    this->_type = _type;
}

SWGACL*
SWGCloudFile::getACL() {
    return ACL;
}
void
SWGCloudFile::setACL(SWGACL* ACL) {
    this->ACL = ACL;
}

QString*
SWGCloudFile::getName() {
    return name;
}
void
SWGCloudFile::setName(QString* name) {
    this->name = name;
}

float
SWGCloudFile::getSize() {
    return size;
}
void
SWGCloudFile::setSize(float size) {
    this->size = size;
}

QString*
SWGCloudFile::getUrl() {
    return url;
}
void
SWGCloudFile::setUrl(QString* url) {
    this->url = url;
}

QDateTime*
SWGCloudFile::getExpires() {
    return expires;
}
void
SWGCloudFile::setExpires(QDateTime* expires) {
    this->expires = expires;
}

QString*
SWGCloudFile::getContentType() {
    return contentType;
}
void
SWGCloudFile::setContentType(QString* contentType) {
    this->contentType = contentType;
}



} /* namespace Swagger */

