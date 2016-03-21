
#include "SWGCloudQueryDistinct.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudQueryDistinct::SWGCloudQueryDistinct(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudQueryDistinct::SWGCloudQueryDistinct() {
    init();
}

SWGCloudQueryDistinct::~SWGCloudQueryDistinct() {
    this->cleanup();
}

void
SWGCloudQueryDistinct::init() {
    key = new QString("");
    skip = NULL;
    limit = NULL;
    query = new SWGQuery();
    sort = NULL;
    select = NULL;
    onKey = new QList<QString*>();
    
}

void
SWGCloudQueryDistinct::cleanup() {
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
    if(onKey != NULL) {
        QList<QString*>* arr = onKey;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete onKey;
    }
    
}

SWGCloudQueryDistinct*
SWGCloudQueryDistinct::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudQueryDistinct::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&skip, pJson["skip"], "qint32", "");
    setValue(&limit, pJson["limit"], "qint32", "");
    setValue(&query, pJson["query"], "SWGQuery", "SWGQuery");
    setValue(&sort, pJson["sort"], "SWGObject", "SWGObject");
    setValue(&select, pJson["select"], "SWGObject", "SWGObject");
    setValue(&onKey, pJson["onKey"], "QList", "QString");
    
}

QString
SWGCloudQueryDistinct::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudQueryDistinct::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    obj->insert("skip", QJsonValue(skip));
    obj->insert("limit", QJsonValue(limit));
    
    
    toJsonValue(QString("query"), query, obj, QString("SWGQuery"));
    
    
    
    
    
    toJsonValue(QString("sort"), sort, obj, QString("SWGObject"));
    
    
    
    
    
    toJsonValue(QString("select"), select, obj, QString("SWGObject"));
    
    
    
    
    
    QList<QString*>* onKeyList = onKey;
    QJsonArray onKeyJsonArray;
    toJsonArray((QList<void*>*)onKey, &onKeyJsonArray, "onKey", "QString");

    obj->insert("onKey", onKeyJsonArray);
    
    
    

    return obj;
}

QString*
SWGCloudQueryDistinct::getKey() {
    return key;
}
void
SWGCloudQueryDistinct::setKey(QString* key) {
    this->key = key;
}

qint32
SWGCloudQueryDistinct::getSkip() {
    return skip;
}
void
SWGCloudQueryDistinct::setSkip(qint32 skip) {
    this->skip = skip;
}

qint32
SWGCloudQueryDistinct::getLimit() {
    return limit;
}
void
SWGCloudQueryDistinct::setLimit(qint32 limit) {
    this->limit = limit;
}

SWGQuery*
SWGCloudQueryDistinct::getQuery() {
    return query;
}
void
SWGCloudQueryDistinct::setQuery(SWGQuery* query) {
    this->query = query;
}

SWGObject*
SWGCloudQueryDistinct::getSort() {
    return sort;
}
void
SWGCloudQueryDistinct::setSort(SWGObject* sort) {
    this->sort = sort;
}

SWGObject*
SWGCloudQueryDistinct::getSelect() {
    return select;
}
void
SWGCloudQueryDistinct::setSelect(SWGObject* select) {
    this->select = select;
}

QList<QString*>*
SWGCloudQueryDistinct::getOnKey() {
    return onKey;
}
void
SWGCloudQueryDistinct::setOnKey(QList<QString*>* onKey) {
    this->onKey = onKey;
}



} /* namespace Swagger */

