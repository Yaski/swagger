
#include "SWGEmailBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGEmailBody::SWGEmailBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGEmailBody::SWGEmailBody() {
    init();
}

SWGEmailBody::~SWGEmailBody() {
    this->cleanup();
}

void
SWGEmailBody::init() {
    email = new QString("");
    key = new QString("");
    
}

void
SWGEmailBody::cleanup() {
    if(email != NULL) {
        delete email;
    }
    if(key != NULL) {
        delete key;
    }
    
}

SWGEmailBody*
SWGEmailBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGEmailBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&email, pJson["email"], "QString", "QString");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGEmailBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGEmailBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("email"), email, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGEmailBody::getEmail() {
    return email;
}
void
SWGEmailBody::setEmail(QString* email) {
    this->email = email;
}

QString*
SWGEmailBody::getKey() {
    return key;
}
void
SWGEmailBody::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

