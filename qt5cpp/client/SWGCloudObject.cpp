
#include "SWGCloudObject.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudObject::SWGCloudObject(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudObject::SWGCloudObject() {
    init();
}

SWGCloudObject::~SWGCloudObject() {
    this->cleanup();
}

void
SWGCloudObject::init() {
    
}

void
SWGCloudObject::cleanup() {
    
}

SWGCloudObject*
SWGCloudObject::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudObject::fromJsonObject(QJsonObject &pJson) {
    
}

QString
SWGCloudObject::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudObject::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    

    return obj;
}



} /* namespace Swagger */

