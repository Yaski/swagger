
#include "SWGCloudQuery.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudQuery::SWGCloudQuery(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudQuery::SWGCloudQuery() {
    init();
}

SWGCloudQuery::~SWGCloudQuery() {
    this->cleanup();
}

void
SWGCloudQuery::init() {
    key = new QString("");
    skip = NULL;
    limit = NULL;
    query = new SWGQuery();
    sort = NULL;
    select = NULL;
    
}

void
SWGCloudQuery::cleanup() {
    if(key != NULL) {
        delete key;
    }
    
    
    if(query != NULL) {
        delete query;
    }
    if(sort != NULL) {
        delete sort;
    }
    if(select != NULL) {
        delete select;
    }
    
}

SWGCloudQuery*
SWGCloudQuery::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudQuery::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&skip, pJson["skip"], "qint32", "");
    setValue(&limit, pJson["limit"], "qint32", "");
    setValue(&query, pJson["query"], "SWGQuery", "SWGQuery");
    setValue(&sort, pJson["sort"], "SWGObject", "SWGObject");
    setValue(&select, pJson["select"], "SWGObject", "SWGObject");
    
}

QString
SWGCloudQuery::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudQuery::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    obj->insert("skip", QJsonValue(skip));
    obj->insert("limit", QJsonValue(limit));
    
    
    toJsonValue(QString("query"), query, obj, QString("SWGQuery"));
    
    
    
    
    
    toJsonValue(QString("sort"), sort, obj, QString("SWGObject"));
    
    
    
    
    
    toJsonValue(QString("select"), select, obj, QString("SWGObject"));
    
    
    
    

    return obj;
}

QString*
SWGCloudQuery::getKey() {
    return key;
}
void
SWGCloudQuery::setKey(QString* key) {
    this->key = key;
}

qint32
SWGCloudQuery::getSkip() {
    return skip;
}
void
SWGCloudQuery::setSkip(qint32 skip) {
    this->skip = skip;
}

qint32
SWGCloudQuery::getLimit() {
    return limit;
}
void
SWGCloudQuery::setLimit(qint32 limit) {
    this->limit = limit;
}

SWGQuery*
SWGCloudQuery::getQuery() {
    return query;
}
void
SWGCloudQuery::setQuery(SWGQuery* query) {
    this->query = query;
}

SWGObject*
SWGCloudQuery::getSort() {
    return sort;
}
void
SWGCloudQuery::setSort(SWGObject* sort) {
    this->sort = sort;
}

SWGObject*
SWGCloudQuery::getSelect() {
    return select;
}
void
SWGCloudQuery::setSelect(SWGObject* select) {
    this->select = select;
}



} /* namespace Swagger */

