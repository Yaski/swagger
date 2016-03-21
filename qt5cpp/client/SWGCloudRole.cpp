
#include "SWGCloudRole.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudRole::SWGCloudRole(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudRole::SWGCloudRole() {
    init();
}

SWGCloudRole::~SWGCloudRole() {
    this->cleanup();
}

void
SWGCloudRole::init() {
    
}

void
SWGCloudRole::cleanup() {
    
}

SWGCloudRole*
SWGCloudRole::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudRole::fromJsonObject(QJsonObject &pJson) {
    
}

QString
SWGCloudRole::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudRole::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    

    return obj;
}



} /* namespace Swagger */

