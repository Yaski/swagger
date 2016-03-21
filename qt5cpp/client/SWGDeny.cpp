
#include "SWGDeny.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGDeny::SWGDeny(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeny::SWGDeny() {
    init();
}

SWGDeny::~SWGDeny() {
    this->cleanup();
}

void
SWGDeny::init() {
    user = new QList<QString*>();
    role = new QList<QString*>();
    
}

void
SWGDeny::cleanup() {
    if(user != NULL) {
        QList<QString*>* arr = user;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete user;
    }
    if(role != NULL) {
        QList<QString*>* arr = role;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete role;
    }
    
}

SWGDeny*
SWGDeny::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeny::fromJsonObject(QJsonObject &pJson) {
    setValue(&user, pJson["user"], "QList", "QString");
    setValue(&role, pJson["role"], "QList", "QString");
    
}

QString
SWGDeny::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDeny::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<QString*>* userList = user;
    QJsonArray userJsonArray;
    toJsonArray((QList<void*>*)user, &userJsonArray, "user", "QString");

    obj->insert("user", userJsonArray);
    
    
    
    
    QList<QString*>* roleList = role;
    QJsonArray roleJsonArray;
    toJsonArray((QList<void*>*)role, &roleJsonArray, "role", "QString");

    obj->insert("role", roleJsonArray);
    
    
    

    return obj;
}

QList<QString*>*
SWGDeny::getUser() {
    return user;
}
void
SWGDeny::setUser(QList<QString*>* user) {
    this->user = user;
}

QList<QString*>*
SWGDeny::getRole() {
    return role;
}
void
SWGDeny::setRole(QList<QString*>* role) {
    this->role = role;
}



} /* namespace Swagger */

