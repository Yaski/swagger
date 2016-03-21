
#include "SWGQueueBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGQueueBody::SWGQueueBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGQueueBody::SWGQueueBody() {
    init();
}

SWGQueueBody::~SWGQueueBody() {
    this->cleanup();
}

void
SWGQueueBody::init() {
    document = new SWGQueue();
    key = new QString("");
    
}

void
SWGQueueBody::cleanup() {
    if(document != NULL) {
        delete document;
    }
    if(key != NULL) {
        delete key;
    }
    
}

SWGQueueBody*
SWGQueueBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGQueueBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&document, pJson["document"], "SWGQueue", "SWGQueue");
    setValue(&key, pJson["key"], "QString", "QString");
    
}

QString
SWGQueueBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGQueueBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("document"), document, obj, QString("SWGQueue"));
    
    
    
    
    
    toJsonValue(QString("key"), key, obj, QString("QString"));
    
    
    
    

    return obj;
}

SWGQueue*
SWGQueueBody::getDocument() {
    return document;
}
void
SWGQueueBody::setDocument(SWGQueue* document) {
    this->document = document;
}

QString*
SWGQueueBody::getKey() {
    return key;
}
void
SWGQueueBody::setKey(QString* key) {
    this->key = key;
}



} /* namespace Swagger */

