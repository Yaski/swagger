
#include "SWGUserBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserBody::SWGUserBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserBody::SWGUserBody() {
    init();
}

SWGUserBody::~SWGUserBody() {
    this->cleanup();
}

void
SWGUserBody::init() {
    key = new QString("");
    document = new SWGCloudUser();
    
}

void
SWGUserBody::cleanup() {
    if(key != NULL) {
        delete key;
    }
    if(document != NULL) {
        delete document;
    }
    
}

SWGUserBody*
SWGUserBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&document, pJson["document"], "SWGCloudUser", "SWGCloudUser");
    
}

QString
SWGUserBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("document"), document, obj, QString("SWGCloudUser"));
    
    
    
    

    return obj;
}

QString*
SWGUserBody::getKey() {
    return key;
}
void
SWGUserBody::setKey(QString* key) {
    this->key = key;
}

SWGCloudUser*
SWGUserBody::getDocument() {
    return document;
}
void
SWGUserBody::setDocument(SWGCloudUser* document) {
    this->document = document;
}



} /* namespace Swagger */

