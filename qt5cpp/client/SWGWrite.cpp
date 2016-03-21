
#include "SWGWrite.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGWrite::SWGWrite(QString* json) {
    init();
    this->fromJson(*json);
}

SWGWrite::SWGWrite() {
    init();
}

SWGWrite::~SWGWrite() {
    this->cleanup();
}

void
SWGWrite::init() {
    allow = new SWGAllow();
    deny = new SWGDeny();
    
}

void
SWGWrite::cleanup() {
    if(allow != NULL) {
        delete allow;
    }
    if(deny != NULL) {
        delete deny;
    }
    
}

SWGWrite*
SWGWrite::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGWrite::fromJsonObject(QJsonObject &pJson) {
    setValue(&allow, pJson["allow"], "SWGAllow", "SWGAllow");
    setValue(&deny, pJson["deny"], "SWGDeny", "SWGDeny");
    
}

QString
SWGWrite::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGWrite::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("allow"), allow, obj, QString("SWGAllow"));
    
    
    
    
    
    toJsonValue(QString("deny"), deny, obj, QString("SWGDeny"));
    
    
    
    

    return obj;
}

SWGAllow*
SWGWrite::getAllow() {
    return allow;
}
void
SWGWrite::setAllow(SWGAllow* allow) {
    this->allow = allow;
}

SWGDeny*
SWGWrite::getDeny() {
    return deny;
}
void
SWGWrite::setDeny(SWGDeny* deny) {
    this->deny = deny;
}



} /* namespace Swagger */

