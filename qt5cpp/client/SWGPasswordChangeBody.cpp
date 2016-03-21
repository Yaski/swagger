
#include "SWGPasswordChangeBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPasswordChangeBody::SWGPasswordChangeBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPasswordChangeBody::SWGPasswordChangeBody() {
    init();
}

SWGPasswordChangeBody::~SWGPasswordChangeBody() {
    this->cleanup();
}

void
SWGPasswordChangeBody::init() {
    oldPassword = new QString("");
    newPassword = new QString("");
    key = new QString("");
    
}

void
SWGPasswordChangeBody::cleanup() {
    if(oldPassword != NULL) {
        delete oldPassword;
    }
    if(newPassword != NULL) {
        delete newPassword;
    }
    if(key != NULL) {
        delete key;
    }
    
}

SWGPasswordChangeBody*
SWGPasswordChangeBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPasswordChangeBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&oldPassword, pJson["oldPassword"], "QString", "QString");
    setValue(&newPassword, pJson["newPassword"], "QString", "QString");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGPasswordChangeBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPasswordChangeBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("oldPassword"), oldPassword, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("newPassword"), newPassword, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGPasswordChangeBody::getOldPassword() {
    return oldPassword;
}
void
SWGPasswordChangeBody::setOldPassword(QString* oldPassword) {
    this->oldPassword = oldPassword;
}

QString*
SWGPasswordChangeBody::getNewPassword() {
    return newPassword;
}
void
SWGPasswordChangeBody::setNewPassword(QString* newPassword) {
    this->newPassword = newPassword;
}

QString*
SWGPasswordChangeBody::getKey() {
    return key;
}
void
SWGPasswordChangeBody::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

