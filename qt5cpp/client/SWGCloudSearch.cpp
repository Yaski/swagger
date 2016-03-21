
#include "SWGCloudSearch.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudSearch::SWGCloudSearch(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudSearch::SWGCloudSearch() {
    init();
}

SWGCloudSearch::~SWGCloudSearch() {
    this->cleanup();
}

void
SWGCloudSearch::init() {
    query = new SWGFilterBody();
    sort = new QList<QString*>();
    collectionName = new QString("");
    key = new QString("");
    skip = NULL;
    limit = NULL;
    
}

void
SWGCloudSearch::cleanup() {
    if(query != NULL) {
        delete query;
    }
    if(sort != NULL) {
        QList<QString*>* arr = sort;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete sort;
    }
    if(collectionName != NULL) {
        delete collectionName;
    }
    if(key != NULL) {
        delete key;
    }
    
    
    
}

SWGCloudSearch*
SWGCloudSearch::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudSearch::fromJsonObject(QJsonObject &pJson) {
    setValue(&query, pJson["query"], "SWGFilterBody", "SWGFilterBody");
    setValue(&sort, pJson["sort"], "QList", "QString");
    setValue(&collectionName, pJson["collectionName"], "QString", "QString");
    setValue(&key, pJson["key"], "QString", "QString");
    setValue(&skip, pJson["skip"], "qint32", "");
    setValue(&limit, pJson["limit"], "qint32", "");
    
}

QString
SWGCloudSearch::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudSearch::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("query"), query, obj, QString("SWGFilterBody"));
    
    
    
    
    
    QList<QString*>* sortList = sort;
    QJsonArray sortJsonArray;
    toJsonArray((QList<void*>*)sort, &sortJsonArray, "sort", "QString");

    obj->insert("sort", sortJsonArray);
    
    
    
    
    toJsonValue(QString("collectionName"), collectionName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    obj->insert("skip", QJsonValue(skip));
    obj->insert("limit", QJsonValue(limit));
    

    return obj;
}

SWGFilterBody*
SWGCloudSearch::getQuery() {
    return query;
}
void
SWGCloudSearch::setQuery(SWGFilterBody* query) {
    this->query = query;
}

QList<QString*>*
SWGCloudSearch::getSort() {
    return sort;
}
void
SWGCloudSearch::setSort(QList<QString*>* sort) {
    this->sort = sort;
}

QString*
SWGCloudSearch::getCollectionName() {
    return collectionName;
}
void
SWGCloudSearch::setCollectionName(QString* collectionName) {
    this->collectionName = collectionName;
}

QString*
SWGCloudSearch::getKey() {
    return key;
}
void
SWGCloudSearch::setKey(QString* key) {
    this->key = key;
}

qint32
SWGCloudSearch::getSkip() {
    return skip;
}
void
SWGCloudSearch::setSkip(qint32 skip) {
    this->skip = skip;
}

qint32
SWGCloudSearch::getLimit() {
    return limit;
}
void
SWGCloudSearch::setLimit(qint32 limit) {
    this->limit = limit;
}



} /* namespace Swagger */

