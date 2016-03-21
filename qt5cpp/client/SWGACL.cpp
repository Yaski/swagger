
#include "SWGACL.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGACL::SWGACL(QString* json) {
    init();
    this->fromJson(*json);
}

SWGACL::SWGACL() {
    init();
}

SWGACL::~SWGACL() {
    this->cleanup();
}

void
SWGACL::init() {
    read = new SWGRead();
    write = new SWGWrite();
    
}

void
SWGACL::cleanup() {
    if(read != NULL) {
        delete read;
    }
    if(write != NULL) {
        delete write;
    }
    
}

SWGACL*
SWGACL::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGACL::fromJsonObject(QJsonObject &pJson) {
    setValue(&read, pJson["read"], "SWGRead", "SWGRead");
    setValue(&write, pJson["write"], "SWGWrite", "SWGWrite");
    
}

QString
SWGACL::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGACL::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("read"), read, obj, QString("SWGRead"));
    
    
    
    
    
    toJsonValue(QString("write"), write, obj, QString("SWGWrite"));
    
    
    
    

    return obj;
}

SWGRead*
SWGACL::getRead() {
    return read;
}
void
SWGACL::setRead(SWGRead* read) {
    this->read = read;
}

SWGWrite*
SWGACL::getWrite() {
    return write;
}
void
SWGACL::setWrite(SWGWrite* write) {
    this->write = write;
}



} /* namespace Swagger */

