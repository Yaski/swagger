
#include "SWGRoleBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRoleBody::SWGRoleBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRoleBody::SWGRoleBody() {
    init();
}

SWGRoleBody::~SWGRoleBody() {
    this->cleanup();
}

void
SWGRoleBody::init() {
    key = new QString("");
    document = new SWGCloudRole();
    
}

void
SWGRoleBody::cleanup() {
    if(key != NULL) {
        delete key;
    }
    if(document != NULL) {
        delete document;
    }
    
}

SWGRoleBody*
SWGRoleBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRoleBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&document, pJson["document"], "SWGCloudRole", "SWGCloudRole");
    
}

QString
SWGRoleBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRoleBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("document"), document, obj, QString("SWGCloudRole"));
    
    
    
    

    return obj;
}

QString*
SWGRoleBody::getKey() {
    return key;
}
void
SWGRoleBody::setKey(QString* key) {
    this->key = key;
}

SWGCloudRole*
SWGRoleBody::getDocument() {
    return document;
}
void
SWGRoleBody::setDocument(SWGCloudRole* document) {
    this->document = document;
}



} /* namespace Swagger */

