
#include "SWGQuery.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGQuery::SWGQuery(QString* json) {
    init();
    this->fromJson(*json);
}

SWGQuery::SWGQuery() {
    init();
}

SWGQuery::~SWGQuery() {
    this->cleanup();
}

void
SWGQuery::init() {
    $includeList = new QList<QString*>();
    $include = new QList<QString*>();
    
}

void
SWGQuery::cleanup() {
    if($includeList != NULL) {
        QList<QString*>* arr = $includeList;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete $includeList;
    }
    if($include != NULL) {
        QList<QString*>* arr = $include;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete $include;
    }
    
}

SWGQuery*
SWGQuery::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGQuery::fromJsonObject(QJsonObject &pJson) {
    setValue(&$includeList, pJson["$includeList"], "QList", "QString");
    setValue(&$include, pJson["$include"], "QList", "QString");
    
}

QString
SWGQuery::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGQuery::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<QString*>* $includeListList = $includeList;
    QJsonArray $includeListJsonArray;
    toJsonArray((QList<void*>*)$includeList, &$includeListJsonArray, "$includeList", "QString");

    obj->insert("$includeList", $includeListJsonArray);
    
    
    
    
    QList<QString*>* $includeList = $include;
    QJsonArray $includeJsonArray;
    toJsonArray((QList<void*>*)$include, &$includeJsonArray, "$include", "QString");

    obj->insert("$include", $includeJsonArray);
    
    
    

    return obj;
}

QList<QString*>*
SWGQuery::get$IncludeList() {
    return $includeList;
}
void
SWGQuery::set$IncludeList(QList<QString*>* $includeList) {
    this->$includeList = $includeList;
}

QList<QString*>*
SWGQuery::get$Include() {
    return $include;
}
void
SWGQuery::set$Include(QList<QString*>* $include) {
    this->$include = $include;
}



} /* namespace Swagger */

