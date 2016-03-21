
#include "SWGBoolFilter.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGBoolFilter::SWGBoolFilter(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBoolFilter::SWGBoolFilter() {
    init();
}

SWGBoolFilter::~SWGBoolFilter() {
    this->cleanup();
}

void
SWGBoolFilter::init() {
    bool = new SWGSearchFilter();
    
}

void
SWGBoolFilter::cleanup() {
    if(bool != NULL) {
        delete bool;
    }
    
}

SWGBoolFilter*
SWGBoolFilter::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBoolFilter::fromJsonObject(QJsonObject &pJson) {
    setValue(&bool, pJson["bool"], "SWGSearchFilter", "SWGSearchFilter");
    
}

QString
SWGBoolFilter::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGBoolFilter::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("bool"), bool, obj, QString("SWGSearchFilter"));
    
    
    
    

    return obj;
}

SWGSearchFilter*
SWGBoolFilter::getBool() {
    return bool;
}
void
SWGBoolFilter::setBool(SWGSearchFilter* bool) {
    this->bool = bool;
}



} /* namespace Swagger */

