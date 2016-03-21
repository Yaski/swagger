
#include "SWGSearchQuery.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSearchQuery::SWGSearchQuery(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSearchQuery::SWGSearchQuery() {
    init();
}

SWGSearchQuery::~SWGSearchQuery() {
    this->cleanup();
}

void
SWGSearchQuery::init() {
    must_not = new QList<QString*>();
    should = new QList<QString*>();
    must = new QList<QString*>();
    
}

void
SWGSearchQuery::cleanup() {
    if(must_not != NULL) {
        QList<QString*>* arr = must_not;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete must_not;
    }
    if(should != NULL) {
        QList<QString*>* arr = should;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete should;
    }
    if(must != NULL) {
        QList<QString*>* arr = must;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete must;
    }
    
}

SWGSearchQuery*
SWGSearchQuery::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSearchQuery::fromJsonObject(QJsonObject &pJson) {
    setValue(&must_not, pJson["must_not"], "QList", "QString");
    setValue(&should, pJson["should"], "QList", "QString");
    setValue(&must, pJson["must"], "QList", "QString");
    
}

QString
SWGSearchQuery::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSearchQuery::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<QString*>* must_notList = must_not;
    QJsonArray must_notJsonArray;
    toJsonArray((QList<void*>*)must_not, &must_notJsonArray, "must_not", "QString");

    obj->insert("must_not", must_notJsonArray);
    
    
    
    
    QList<QString*>* shouldList = should;
    QJsonArray shouldJsonArray;
    toJsonArray((QList<void*>*)should, &shouldJsonArray, "should", "QString");

    obj->insert("should", shouldJsonArray);
    
    
    
    
    QList<QString*>* mustList = must;
    QJsonArray mustJsonArray;
    toJsonArray((QList<void*>*)must, &mustJsonArray, "must", "QString");

    obj->insert("must", mustJsonArray);
    
    
    

    return obj;
}

QList<QString*>*
SWGSearchQuery::getMustNot() {
    return must_not;
}
void
SWGSearchQuery::setMustNot(QList<QString*>* must_not) {
    this->must_not = must_not;
}

QList<QString*>*
SWGSearchQuery::getShould() {
    return should;
}
void
SWGSearchQuery::setShould(QList<QString*>* should) {
    this->should = should;
}

QList<QString*>*
SWGSearchQuery::getMust() {
    return must;
}
void
SWGSearchQuery::setMust(QList<QString*>* must) {
    this->must = must;
}



} /* namespace Swagger */

