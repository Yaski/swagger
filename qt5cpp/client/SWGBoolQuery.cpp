
#include "SWGBoolQuery.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGBoolQuery::SWGBoolQuery(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBoolQuery::SWGBoolQuery() {
    init();
}

SWGBoolQuery::~SWGBoolQuery() {
    this->cleanup();
}

void
SWGBoolQuery::init() {
    bool = new SWGSearchQuery();
    
}

void
SWGBoolQuery::cleanup() {
    if(bool != NULL) {
        delete bool;
    }
    
}

SWGBoolQuery*
SWGBoolQuery::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBoolQuery::fromJsonObject(QJsonObject &pJson) {
    setValue(&bool, pJson["bool"], "SWGSearchQuery", "SWGSearchQuery");
    
}

QString
SWGBoolQuery::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGBoolQuery::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("bool"), bool, obj, QString("SWGSearchQuery"));
    
    
    
    

    return obj;
}

SWGSearchQuery*
SWGBoolQuery::getBool() {
    return bool;
}
void
SWGBoolQuery::setBool(SWGSearchQuery* bool) {
    this->bool = bool;
}



} /* namespace Swagger */

