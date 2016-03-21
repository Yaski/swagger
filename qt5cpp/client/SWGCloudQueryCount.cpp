
#include "SWGCloudQueryCount.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudQueryCount::SWGCloudQueryCount(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudQueryCount::SWGCloudQueryCount() {
    init();
}

SWGCloudQueryCount::~SWGCloudQueryCount() {
    this->cleanup();
}

void
SWGCloudQueryCount::init() {
    key = new QString("");
    skip = NULL;
    limit = NULL;
    query = new SWGQuery();
    sort = new QString("");
    select = new QString("");
    
}

void
SWGCloudQueryCount::cleanup() {
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

SWGCloudQueryCount*
SWGCloudQueryCount::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudQueryCount::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&skip, pJson["skip"], "qint32", "");
    setValue(&limit, pJson["limit"], "qint32", "");
    setValue(&query, pJson["query"], "SWGQuery", "SWGQuery");
    setValue(&sort, pJson["sort"], "QString", "QString");
    setValue(&select, pJson["select"], "QString", "QString");
    
}

QString
SWGCloudQueryCount::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudQueryCount::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    obj->insert("skip", QJsonValue(skip));
    obj->insert("limit", QJsonValue(limit));
    
    
    toJsonValue(QString("query"), query, obj, QString("SWGQuery"));
    
    
    
    
    
    toJsonValue(QString("sort"), sort, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("select"), select, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGCloudQueryCount::getKey() {
    return key;
}
void
SWGCloudQueryCount::setKey(QString* key) {
    this->key = key;
}

qint32
SWGCloudQueryCount::getSkip() {
    return skip;
}
void
SWGCloudQueryCount::setSkip(qint32 skip) {
    this->skip = skip;
}

qint32
SWGCloudQueryCount::getLimit() {
    return limit;
}
void
SWGCloudQueryCount::setLimit(qint32 limit) {
    this->limit = limit;
}

SWGQuery*
SWGCloudQueryCount::getQuery() {
    return query;
}
void
SWGCloudQueryCount::setQuery(SWGQuery* query) {
    this->query = query;
}

QString*
SWGCloudQueryCount::getSort() {
    return sort;
}
void
SWGCloudQueryCount::setSort(QString* sort) {
    this->sort = sort;
}

QString*
SWGCloudQueryCount::getSelect() {
    return select;
}
void
SWGCloudQueryCount::setSelect(QString* select) {
    this->select = select;
}



} /* namespace Swagger */

