
#include "SWGModifiedQueueBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGModifiedQueueBody::SWGModifiedQueueBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGModifiedQueueBody::SWGModifiedQueueBody() {
    init();
}

SWGModifiedQueueBody::~SWGModifiedQueueBody() {
    this->cleanup();
}

void
SWGModifiedQueueBody::init() {
    document = new SWGModifiedQueue();
    key = new QString("");
    
}

void
SWGModifiedQueueBody::cleanup() {
    if(document != NULL) {
        delete document;
    }
    if(key != NULL) {
        delete key;
    }
    
}

SWGModifiedQueueBody*
SWGModifiedQueueBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGModifiedQueueBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&document, pJson["document"], "SWGModifiedQueue", "SWGModifiedQueue");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGModifiedQueueBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGModifiedQueueBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("document"), document, obj, QString("SWGModifiedQueue"));
    
    
    
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

SWGModifiedQueue*
SWGModifiedQueueBody::getDocument() {
    return document;
}
void
SWGModifiedQueueBody::setDocument(SWGModifiedQueue* document) {
    this->document = document;
}

QString*
SWGModifiedQueueBody::getKey() {
    return key;
}
void
SWGModifiedQueueBody::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

