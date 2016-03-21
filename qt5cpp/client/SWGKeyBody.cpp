
#include "SWGKeyBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGKeyBody::SWGKeyBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGKeyBody::SWGKeyBody() {
    init();
}

SWGKeyBody::~SWGKeyBody() {
    this->cleanup();
}

void
SWGKeyBody::init() {
    key = new QString("");
    
}

void
SWGKeyBody::cleanup() {
    if(key != NULL) {
        delete key;
    }
    
}

SWGKeyBody*
SWGKeyBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGKeyBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGKeyBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGKeyBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGKeyBody::getKey() {
    return key;
}
void
SWGKeyBody::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

