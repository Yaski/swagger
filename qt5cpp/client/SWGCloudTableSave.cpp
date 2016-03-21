
#include "SWGCloudTableSave.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCloudTableSave::SWGCloudTableSave(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCloudTableSave::SWGCloudTableSave() {
    init();
}

SWGCloudTableSave::~SWGCloudTableSave() {
    this->cleanup();
}

void
SWGCloudTableSave::init() {
    data = new SWGCloudTable();
    key = new QString("");
    
}

void
SWGCloudTableSave::cleanup() {
    if(data != NULL) {
        delete data;
    }
    if(key != NULL) {
        delete key;
    }
    
}

SWGCloudTableSave*
SWGCloudTableSave::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCloudTableSave::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGCloudTable", "SWGCloudTable");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGCloudTableSave::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCloudTableSave::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGCloudTable"));
    
    
    
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

SWGCloudTable*
SWGCloudTableSave::getData() {
    return data;
}
void
SWGCloudTableSave::setData(SWGCloudTable* data) {
    this->data = data;
}

QString*
SWGCloudTableSave::getKey() {
    return key;
}
void
SWGCloudTableSave::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

