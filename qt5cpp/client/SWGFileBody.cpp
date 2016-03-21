
#include "SWGFileBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFileBody::SWGFileBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFileBody::SWGFileBody() {
    init();
}

SWGFileBody::~SWGFileBody() {
    this->cleanup();
}

void
SWGFileBody::init() {
    key = new QString("");
    data = new QString("");
    fileObj = new SWGCloudFile();
    
}

void
SWGFileBody::cleanup() {
    if(key != NULL) {
        delete key;
    }
    if(data != NULL) {
        delete data;
    }
    if(fileObj != NULL) {
        delete fileObj;
    }
    
}

SWGFileBody*
SWGFileBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFileBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&data, pJson["data"], "QString", "QString");
    setValue(&fileObj, pJson["fileObj"], "SWGCloudFile", "SWGCloudFile");
    
}

QString
SWGFileBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFileBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("data"), data, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("fileObj"), fileObj, obj, QString("SWGCloudFile"));
    
    
    
    

    return obj;
}

QString*
SWGFileBody::getKey() {
    return key;
}
void
SWGFileBody::setKey(QString* key) {
    this->key = key;
}

QString*
SWGFileBody::getData() {
    return data;
}
void
SWGFileBody::setData(QString* data) {
    this->data = data;
}

SWGCloudFile*
SWGFileBody::getFileObj() {
    return fileObj;
}
void
SWGFileBody::setFileObj(SWGCloudFile* fileObj) {
    this->fileObj = fileObj;
}



} /* namespace Swagger */

