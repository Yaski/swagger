
#include "SWGFilterBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFilterBody::SWGFilterBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFilterBody::SWGFilterBody() {
    init();
}

SWGFilterBody::~SWGFilterBody() {
    this->cleanup();
}

void
SWGFilterBody::init() {
    filtered = new SWGFiltered();
    
}

void
SWGFilterBody::cleanup() {
    if(filtered != NULL) {
        delete filtered;
    }
    
}

SWGFilterBody*
SWGFilterBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFilterBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&filtered, pJson["filtered"], "SWGFiltered", "SWGFiltered");
    
}

QString
SWGFilterBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFilterBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("filtered"), filtered, obj, QString("SWGFiltered"));
    
    
    
    

    return obj;
}

SWGFiltered*
SWGFilterBody::getFiltered() {
    return filtered;
}
void
SWGFilterBody::setFiltered(SWGFiltered* filtered) {
    this->filtered = filtered;
}



} /* namespace Swagger */

