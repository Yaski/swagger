
#include "SWGCloudObjectSaveRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudObjectSaveRequest::SWGCloudObjectSaveRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudObjectSaveRequest::SWGCloudObjectSaveRequest() {
    init();
}

SWGCloudObjectSaveRequest::~SWGCloudObjectSaveRequest() {
    this->cleanup();
}

void
SWGCloudObjectSaveRequest::init() {
    key = new QString("");
    document = new SWGCloudObject();
    
}

void
SWGCloudObjectSaveRequest::cleanup() {
    if(key != NULL) {
        delete key;
    }
    if(document != NULL) {
        delete document;
    }
    
}

SWGCloudObjectSaveRequest*
SWGCloudObjectSaveRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudObjectSaveRequest::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&document, pJson["document"], "SWGCloudObject", "SWGCloudObject");
    
}

QString
SWGCloudObjectSaveRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudObjectSaveRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("document"), document, obj, QString("SWGCloudObject"));
    
    
    
    

    return obj;
}

QString*
SWGCloudObjectSaveRequest::getKey() {
    return key;
}
void
SWGCloudObjectSaveRequest::setKey(QString* key) {
    this->key = key;
}

SWGCloudObject*
SWGCloudObjectSaveRequest::getDocument() {
    return document;
}
void
SWGCloudObjectSaveRequest::setDocument(SWGCloudObject* document) {
    this->document = document;
}



} /* namespace Swagger */

