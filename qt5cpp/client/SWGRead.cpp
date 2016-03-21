
#include "SWGRead.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRead::SWGRead(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRead::SWGRead() {
    init();
}

SWGRead::~SWGRead() {
    this->cleanup();
}

void
SWGRead::init() {
    allow = new SWGAllow();
    deny = new SWGDeny();
    
}

void
SWGRead::cleanup() {
    if(allow != NULL) {
        delete allow;
    }
    if(deny != NULL) {
        delete deny;
    }
    
}

SWGRead*
SWGRead::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRead::fromJsonObject(QJsonObject &pJson) {
    setValue(&allow, pJson["allow"], "SWGAllow", "SWGAllow");
    setValue(&deny, pJson["deny"], "SWGDeny", "SWGDeny");
    
}

QString
SWGRead::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRead::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("allow"), allow, obj, QString("SWGAllow"));
    
    
    
    
    
    toJsonValue(QString("deny"), deny, obj, QString("SWGDeny"));
    
    
    
    

    return obj;
}

SWGAllow*
SWGRead::getAllow() {
    return allow;
}
void
SWGRead::setAllow(SWGAllow* allow) {
    this->allow = allow;
}

SWGDeny*
SWGRead::getDeny() {
    return deny;
}
void
SWGRead::setDeny(SWGDeny* deny) {
    this->deny = deny;
}



} /* namespace Swagger */

