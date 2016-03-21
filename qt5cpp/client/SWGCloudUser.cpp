
#include "SWGCloudUser.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudUser::SWGCloudUser(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudUser::SWGCloudUser() {
    init();
}

SWGCloudUser::~SWGCloudUser() {
    this->cleanup();
}

void
SWGCloudUser::init() {
    
}

void
SWGCloudUser::cleanup() {
    
}

SWGCloudUser*
SWGCloudUser::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudUser::fromJsonObject(QJsonObject &pJson) {
    
}

QString
SWGCloudUser::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudUser::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    

    return obj;
}



} /* namespace Swagger */

