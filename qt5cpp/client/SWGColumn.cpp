
#include "SWGColumn.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGColumn::SWGColumn(QString* json) {
    init();
    this->fromJson(*json);
}

SWGColumn::SWGColumn() {
    init();
}

SWGColumn::~SWGColumn() {
    this->cleanup();
}

void
SWGColumn::init() {
    name = new QString("");
    dataType = new QString("");
    _type = new QString("");
    required = false;
    unique = false;
    relatedTo = new QString("");
    relationType = new QString("");
    isDeletable = false;
    isEditable = false;
    isRenamable = false;
    
}

void
SWGColumn::cleanup() {
    if(name != NULL) {
        delete name;
    }
    if(dataType != NULL) {
        delete dataType;
    }
    if(_type != NULL) {
        delete _type;
    }
    
    
    if(relatedTo != NULL) {
        delete relatedTo;
    }
    if(relationType != NULL) {
        delete relationType;
    }
    
    
    
    
}

SWGColumn*
SWGColumn::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGColumn::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&dataType, pJson["dataType"], "QString", "QString");
    setValue(&_type, pJson["_type"], "QString", "QString");
    setValue(&required, pJson["required"], "bool", "");
    setValue(&unique, pJson["unique"], "bool", "");
    setValue(&relatedTo, pJson["relatedTo"], "QString", "QString");
    setValue(&relationType, pJson["relationType"], "QString", "QString");
    setValue(&isDeletable, pJson["isDeletable"], "bool", "");
    setValue(&isEditable, pJson["isEditable"], "bool", "");
    setValue(&isRenamable, pJson["isRenamable"], "bool", "");
    
}

QString
SWGColumn::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGColumn::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("dataType"), dataType, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("_type"), _type, obj, QString("QString"));
    
    
    
    obj->insert("required", QJsonValue(required));
    obj->insert("unique", QJsonValue(unique));
    
    
    toJsonValue(QString("relatedTo"), relatedTo, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("relationType"), relationType, obj, QString("QString"));
    
    
    
    obj->insert("isDeletable", QJsonValue(isDeletable));
    obj->insert("isEditable", QJsonValue(isEditable));
    obj->insert("isRenamable", QJsonValue(isRenamable));
    

    return obj;
}

QString*
SWGColumn::getName() {
    return name;
}
void
SWGColumn::setName(QString* name) {
    this->name = name;
}

QString*
SWGColumn::getDataType() {
    return dataType;
}
void
SWGColumn::setDataType(QString* dataType) {
    this->dataType = dataType;
}

QString*
SWGColumn::getType() {
    return _type;
}
void
SWGColumn::setType(QString* _type) {
    this->_type = _type;
}

bool
SWGColumn::getRequired() {
    return required;
}
void
SWGColumn::setRequired(bool required) {
    this->required = required;
}

bool
SWGColumn::getUnique() {
    return unique;
}
void
SWGColumn::setUnique(bool unique) {
    this->unique = unique;
}

QString*
SWGColumn::getRelatedTo() {
    return relatedTo;
}
void
SWGColumn::setRelatedTo(QString* relatedTo) {
    this->relatedTo = relatedTo;
}

QString*
SWGColumn::getRelationType() {
    return relationType;
}
void
SWGColumn::setRelationType(QString* relationType) {
    this->relationType = relationType;
}

bool
SWGColumn::getIsDeletable() {
    return isDeletable;
}
void
SWGColumn::setIsDeletable(bool isDeletable) {
    this->isDeletable = isDeletable;
}

bool
SWGColumn::getIsEditable() {
    return isEditable;
}
void
SWGColumn::setIsEditable(bool isEditable) {
    this->isEditable = isEditable;
}

bool
SWGColumn::getIsRenamable() {
    return isRenamable;
}
void
SWGColumn::setIsRenamable(bool isRenamable) {
    this->isRenamable = isRenamable;
}



} /* namespace Swagger */

