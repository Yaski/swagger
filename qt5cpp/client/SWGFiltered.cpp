
#include "SWGFiltered.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFiltered::SWGFiltered(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFiltered::SWGFiltered() {
    init();
}

SWGFiltered::~SWGFiltered() {
    this->cleanup();
}

void
SWGFiltered::init() {
    query = new SWGBoolQuery();
    filter = new SWGBoolFilter();
    
}

void
SWGFiltered::cleanup() {
    if(query != NULL) {
        delete query;
    }
    if(filter != NULL) {
        delete filter;
    }
    
}

SWGFiltered*
SWGFiltered::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFiltered::fromJsonObject(QJsonObject &pJson) {
    setValue(&query, pJson["query"], "SWGBoolQuery", "SWGBoolQuery");
    setValue(&filter, pJson["filter"], "SWGBoolFilter", "SWGBoolFilter");
    
}

QString
SWGFiltered::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFiltered::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("query"), query, obj, QString("SWGBoolQuery"));
    
    
    
    
    
    toJsonValue(QString("filter"), filter, obj, QString("SWGBoolFilter"));
    
    
    
    

    return obj;
}

SWGBoolQuery*
SWGFiltered::getQuery() {
    return query;
}
void
SWGFiltered::setQuery(SWGBoolQuery* query) {
    this->query = query;
}

SWGBoolFilter*
SWGFiltered::getFilter() {
    return filter;
}
void
SWGFiltered::setFilter(SWGBoolFilter* filter) {
    this->filter = filter;
}



} /* namespace Swagger */

