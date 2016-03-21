
#include "SWGUserRoleBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserRoleBody::SWGUserRoleBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserRoleBody::SWGUserRoleBody() {
    init();
}

SWGUserRoleBody::~SWGUserRoleBody() {
    this->cleanup();
}

void
SWGUserRoleBody::init() {
    key = new QString("");
    role = new SWGCloudRole();
    user = new SWGCloudUser();
    
}

void
SWGUserRoleBody::cleanup() {
    if(key != NULL) {
        delete key;
    }
    if(role != NULL) {
        delete role;
    }
    if(user != NULL) {
        delete user;
    }
    
}

SWGUserRoleBody*
SWGUserRoleBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserRoleBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&role, pJson["role"], "SWGCloudRole", "SWGCloudRole");
    setValue(&user, pJson["user"], "SWGCloudUser", "SWGCloudUser");
    
}

QString
SWGUserRoleBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserRoleBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("role"), role, obj, QString("SWGCloudRole"));
    
    
    
    
    
    toJsonValue(QString("user"), user, obj, QString("SWGCloudUser"));
    
    
    
    

    return obj;
}

QString*
SWGUserRoleBody::getKey() {
    return key;
}
void
SWGUserRoleBody::setKey(QString* key) {
    this->key = key;
}

SWGCloudRole*
SWGUserRoleBody::getRole() {
    return role;
}
void
SWGUserRoleBody::setRole(SWGCloudRole* role) {
    this->role = role;
}

SWGCloudUser*
SWGUserRoleBody::getUser() {
    return user;
}
void
SWGUserRoleBody::setUser(SWGCloudUser* user) {
    this->user = user;
}



} /* namespace Swagger */

