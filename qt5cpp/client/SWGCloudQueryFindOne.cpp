
#include "SWGCloudQueryFindOne.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudQueryFindOne::SWGCloudQueryFindOne(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudQueryFindOne::SWGCloudQueryFindOne() {
    init();
}

SWGCloudQueryFindOne::~SWGCloudQueryFindOne() {
    this->cleanup();
}

void
SWGCloudQueryFindOne::init() {
    key = new QString("");
    skip = NULL;
    limit = NULL;
    query = new SWGQuery();
    sort = NULL;
    select = NULL;
    
}

void
SWGCloudQueryFindOne::cleanup() {
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

SWGCloudQueryFindOne*
SWGCloudQueryFindOne::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudQueryFindOne::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&skip, pJson["skip"], "qint32", "");
    setValue(&limit, pJson["limit"], "qint32", "");
    setValue(&query, pJson["query"], "SWGQuery", "SWGQuery");
    setValue(&sort, pJson["sort"], "SWGObject", "SWGObject");
    setValue(&select, pJson["select"], "SWGObject", "SWGObject");
    
}

QString
SWGCloudQueryFindOne::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudQueryFindOne::asJsonObject() {
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
SWGCloudQueryFindOne::getKey() {
    return key;
}
void
SWGCloudQueryFindOne::setKey(QString* key) {
    this->key = key;
}

qint32
SWGCloudQueryFindOne::getSkip() {
    return skip;
}
void
SWGCloudQueryFindOne::setSkip(qint32 skip) {
    this->skip = skip;
}

qint32
SWGCloudQueryFindOne::getLimit() {
    return limit;
}
void
SWGCloudQueryFindOne::setLimit(qint32 limit) {
    this->limit = limit;
}

SWGQuery*
SWGCloudQueryFindOne::getQuery() {
    return query;
}
void
SWGCloudQueryFindOne::setQuery(SWGQuery* query) {
    this->query = query;
}

SWGObject*
SWGCloudQueryFindOne::getSort() {
    return sort;
}
void
SWGCloudQueryFindOne::setSort(SWGObject* sort) {
    this->sort = sort;
}

SWGObject*
SWGCloudQueryFindOne::getSelect() {
    return select;
}
void
SWGCloudQueryFindOne::setSelect(SWGObject* select) {
    this->select = select;
}



} /* namespace Swagger */

