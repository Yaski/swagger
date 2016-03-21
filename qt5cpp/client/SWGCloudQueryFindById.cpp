
#include "SWGCloudQueryFindById.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudQueryFindById::SWGCloudQueryFindById(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudQueryFindById::SWGCloudQueryFindById() {
    init();
}

SWGCloudQueryFindById::~SWGCloudQueryFindById() {
    this->cleanup();
}

void
SWGCloudQueryFindById::init() {
    key = new QString("");
    skip = NULL;
    limit = NULL;
    query = new SWGCloudQueryId();
    sort = NULL;
    select = NULL;
    
}

void
SWGCloudQueryFindById::cleanup() {
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

SWGCloudQueryFindById*
SWGCloudQueryFindById::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudQueryFindById::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&skip, pJson["skip"], "qint32", "");
    setValue(&limit, pJson["limit"], "qint32", "");
    setValue(&query, pJson["query"], "SWGCloudQueryId", "SWGCloudQueryId");
    setValue(&sort, pJson["sort"], "SWGObject", "SWGObject");
    setValue(&select, pJson["select"], "SWGObject", "SWGObject");
    
}

QString
SWGCloudQueryFindById::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudQueryFindById::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    obj->insert("skip", QJsonValue(skip));
    obj->insert("limit", QJsonValue(limit));
    
    
    toJsonValue(QString("query"), query, obj, QString("SWGCloudQueryId"));
    
    
    
    
    
    toJsonValue(QString("sort"), sort, obj, QString("SWGObject"));
    
    
    
    
    
    toJsonValue(QString("select"), select, obj, QString("SWGObject"));
    
    
    
    

    return obj;
}

QString*
SWGCloudQueryFindById::getKey() {
    return key;
}
void
SWGCloudQueryFindById::setKey(QString* key) {
    this->key = key;
}

qint32
SWGCloudQueryFindById::getSkip() {
    return skip;
}
void
SWGCloudQueryFindById::setSkip(qint32 skip) {
    this->skip = skip;
}

qint32
SWGCloudQueryFindById::getLimit() {
    return limit;
}
void
SWGCloudQueryFindById::setLimit(qint32 limit) {
    this->limit = limit;
}

SWGCloudQueryId*
SWGCloudQueryFindById::getQuery() {
    return query;
}
void
SWGCloudQueryFindById::setQuery(SWGCloudQueryId* query) {
    this->query = query;
}

SWGObject*
SWGCloudQueryFindById::getSort() {
    return sort;
}
void
SWGCloudQueryFindById::setSort(SWGObject* sort) {
    this->sort = sort;
}

SWGObject*
SWGCloudQueryFindById::getSelect() {
    return select;
}
void
SWGCloudQueryFindById::setSelect(SWGObject* select) {
    this->select = select;
}



} /* namespace Swagger */

