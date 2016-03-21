
#include "SWGAllow.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAllow::SWGAllow(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAllow::SWGAllow() {
    init();
}

SWGAllow::~SWGAllow() {
    this->cleanup();
}

void
SWGAllow::init() {
    user = new QList<QString*>();
    role = new QList<QString*>();
    
}

void
SWGAllow::cleanup() {
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

SWGAllow*
SWGAllow::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAllow::fromJsonObject(QJsonObject &pJson) {
    setValue(&user, pJson["user"], "QList", "QString");
    setValue(&role, pJson["role"], "QList", "QString");
    
}

QString
SWGAllow::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAllow::asJsonObject() {
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
SWGAllow::getUser() {
    return user;
}
void
SWGAllow::setUser(QList<QString*>* user) {
    this->user = user;
}

QList<QString*>*
SWGAllow::getRole() {
    return role;
}
void
SWGAllow::setRole(QList<QString*>* role) {
    this->role = role;
}



} /* namespace Swagger */

