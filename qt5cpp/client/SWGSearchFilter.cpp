
#include "SWGSearchFilter.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSearchFilter::SWGSearchFilter(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSearchFilter::SWGSearchFilter() {
    init();
}

SWGSearchFilter::~SWGSearchFilter() {
    this->cleanup();
}

void
SWGSearchFilter::init() {
    must_not = new QList<QString*>();
    should = new QList<QString*>();
    must = new QList<QString*>();
    
}

void
SWGSearchFilter::cleanup() {
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

SWGSearchFilter*
SWGSearchFilter::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSearchFilter::fromJsonObject(QJsonObject &pJson) {
    setValue(&must_not, pJson["must_not"], "QList", "QString");
    setValue(&should, pJson["should"], "QList", "QString");
    setValue(&must, pJson["must"], "QList", "QString");
    
}

QString
SWGSearchFilter::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSearchFilter::asJsonObject() {
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
SWGSearchFilter::getMustNot() {
    return must_not;
}
void
SWGSearchFilter::setMustNot(QList<QString*>* must_not) {
    this->must_not = must_not;
}

QList<QString*>*
SWGSearchFilter::getShould() {
    return should;
}
void
SWGSearchFilter::setShould(QList<QString*>* should) {
    this->should = should;
}

QList<QString*>*
SWGSearchFilter::getMust() {
    return must;
}
void
SWGSearchFilter::setMust(QList<QString*>* must) {
    this->must = must;
}



} /* namespace Swagger */

