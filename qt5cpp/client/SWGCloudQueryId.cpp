
#include "SWGCloudQueryId.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudQueryId::SWGCloudQueryId(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudQueryId::SWGCloudQueryId() {
    init();
}

SWGCloudQueryId::~SWGCloudQueryId() {
    this->cleanup();
}

void
SWGCloudQueryId::init() {
    $includeList = new QList<QString*>();
    $include = new QList<QString*>();
    _id = new QString("");
    
}

void
SWGCloudQueryId::cleanup() {
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
    if(_id != NULL) {
        delete _id;
    }
    
}

SWGCloudQueryId*
SWGCloudQueryId::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudQueryId::fromJsonObject(QJsonObject &pJson) {
    setValue(&$includeList, pJson["$includeList"], "QList", "QString");
    setValue(&$include, pJson["$include"], "QList", "QString");
    setValue(&_id, pJson["_id"], "QString", "QString");
    
}

QString
SWGCloudQueryId::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudQueryId::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<QString*>* $includeListList = $includeList;
    QJsonArray $includeListJsonArray;
    toJsonArray((QList<void*>*)$includeList, &$includeListJsonArray, "$includeList", "QString");

    obj->insert("$includeList", $includeListJsonArray);
    
    
    
    
    QList<QString*>* $includeList = $include;
    QJsonArray $includeJsonArray;
    toJsonArray((QList<void*>*)$include, &$includeJsonArray, "$include", "QString");

    obj->insert("$include", $includeJsonArray);
    
    
    
    
    toJsonValue(QString("_id"), _id, obj, QString("QString"));
    
    
    
    

    return obj;
}

QList<QString*>*
SWGCloudQueryId::get$IncludeList() {
    return $includeList;
}
void
SWGCloudQueryId::set$IncludeList(QList<QString*>* $includeList) {
    this->$includeList = $includeList;
}

QList<QString*>*
SWGCloudQueryId::get$Include() {
    return $include;
}
void
SWGCloudQueryId::set$Include(QList<QString*>* $include) {
    this->$include = $include;
}

QString*
SWGCloudQueryId::getId() {
    return _id;
}
void
SWGCloudQueryId::setId(QString* _id) {
    this->_id = _id;
}



} /* namespace Swagger */

