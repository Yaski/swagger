
#include "SWGCloudTable.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudTable::SWGCloudTable(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudTable::SWGCloudTable() {
    init();
}

SWGCloudTable::~SWGCloudTable() {
    this->cleanup();
}

void
SWGCloudTable::init() {
    name = new QString("");
    appId = new QString("");
    type = new QString("");
    columns = new QList<SWGColumn*>();
    
}

void
SWGCloudTable::cleanup() {
    if(name != NULL) {
        delete name;
    }
    if(appId != NULL) {
        delete appId;
    }
    if(type != NULL) {
        delete type;
    }
    if(columns != NULL) {
        QList<SWGColumn*>* arr = columns;
        foreach(SWGColumn* o, *arr) {
            delete o;
        }
        delete columns;
    }
    
}

SWGCloudTable*
SWGCloudTable::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudTable::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&appId, pJson["appId"], "QString", "QString");
    setValue(&type, pJson["type"], "QString", "QString");
    setValue(&columns, pJson["columns"], "QList", "SWGColumn");
    
}

QString
SWGCloudTable::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudTable::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("appId"), appId, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("type"), type, obj, QString("QString"));
    
    
    
    
    
    QList<SWGColumn*>* columnsList = columns;
    QJsonArray columnsJsonArray;
    toJsonArray((QList<void*>*)columns, &columnsJsonArray, "columns", "SWGColumn");

    obj->insert("columns", columnsJsonArray);
    
    
    

    return obj;
}

QString*
SWGCloudTable::getName() {
    return name;
}
void
SWGCloudTable::setName(QString* name) {
    this->name = name;
}

QString*
SWGCloudTable::getAppId() {
    return appId;
}
void
SWGCloudTable::setAppId(QString* appId) {
    this->appId = appId;
}

QString*
SWGCloudTable::getType() {
    return type;
}
void
SWGCloudTable::setType(QString* type) {
    this->type = type;
}

QList<SWGColumn*>*
SWGCloudTable::getColumns() {
    return columns;
}
void
SWGCloudTable::setColumns(QList<SWGColumn*>* columns) {
    this->columns = columns;
}



} /* namespace Swagger */

