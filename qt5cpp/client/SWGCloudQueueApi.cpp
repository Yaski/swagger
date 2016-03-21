#include "SWGCloudQueueApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudQueueApi::SWGCloudQueueApi() {}

SWGCloudQueueApi::~SWGCloudQueueApi() {}

SWGCloudQueueApi::SWGCloudQueueApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudQueueApi::addMessage(QString* appId, QString* queueName, SWGQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/message");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::addMessageCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::addMessageCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit addMessageSignal(output);
    
}
void
SWGCloudQueueApi::addSubscriber(QString* appId, QString* queueName, SWGQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/subscriber");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::addSubscriberCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::addSubscriberCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGQueue* output = static_cast<SWGQueue*>(create(json, QString("SWGQueue")));
    
    
    

    worker->deleteLater();

    emit addSubscriberSignal(output);
    
}
void
SWGCloudQueueApi::clear(QString* appId, QString* queueName, SWGQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/clear");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::clearCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::clearCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGQueue* output = static_cast<SWGQueue*>(create(json, QString("SWGQueue")));
    
    
    

    worker->deleteLater();

    emit clearSignal(output);
    
}
void
SWGCloudQueueApi::createQueue(QString* appId, QString* queueName, SWGQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/create");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::createQueueCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::createQueueCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGQueue* output = static_cast<SWGQueue*>(create(json, QString("SWGQueue")));
    
    
    

    worker->deleteLater();

    emit createQueueSignal(output);
    
}
void
SWGCloudQueueApi::deleteMessage(QString* appId, QString* queueName, QString* messageId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/message/{message_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    
    QString messageIdPathParam("{"); messageIdPathParam.append("messageId").append("}");
    fullPath.replace(messageIdPathParam, stringValue(messageId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::deleteMessageCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::deleteMessageCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit deleteMessageSignal(output);
    
}
void
SWGCloudQueueApi::deleteQueue(QString* appId, QString* queueName, SWGQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::deleteQueueCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::deleteQueueCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGQueue* output = static_cast<SWGQueue*>(create(json, QString("SWGQueue")));
    
    
    

    worker->deleteLater();

    emit deleteQueueSignal(output);
    
}
void
SWGCloudQueueApi::deleteSubscriber(QString* appId, QString* queueName, SWGQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/subscriber");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::deleteSubscriberCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::deleteSubscriberCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGQueue* output = static_cast<SWGQueue*>(create(json, QString("SWGQueue")));
    
    
    

    worker->deleteLater();

    emit deleteSubscriberSignal(output);
    
}
void
SWGCloudQueueApi::getAllMessages(QString* appId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/messages");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::getAllMessagesCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::getAllMessagesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit getAllMessagesSignal(output);
    
}
void
SWGCloudQueueApi::getAllQueues(QString* appId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::getAllQueuesCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::getAllQueuesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueue*>* output = new QList<SWGQueue*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueue* o = new SWGQueue();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit getAllQueuesSignal(output);
    
}
void
SWGCloudQueueApi::getMessage(QString* appId, QString* queueName, SWGQueuePayloadWithCount body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/getMessage");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::getMessageCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::getMessageCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit getMessageSignal(output);
    
}
void
SWGCloudQueueApi::getMessageById(QString* appId, QString* queueName, QString* messageId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/message/{message_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    
    QString messageIdPathParam("{"); messageIdPathParam.append("messageId").append("}");
    fullPath.replace(messageIdPathParam, stringValue(messageId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::getMessageByIdCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::getMessageByIdCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGQueueMessage* output = static_cast<SWGQueueMessage*>(create(json, QString("SWGQueueMessage")));
    
    
    

    worker->deleteLater();

    emit getMessageByIdSignal(output);
    
}
void
SWGCloudQueueApi::getQueue(QString* appId, QString* queueName, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::getQueueCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::getQueueCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGQueue* output = static_cast<SWGQueue*>(create(json, QString("SWGQueue")));
    
    
    

    worker->deleteLater();

    emit getQueueSignal(output);
    
}
void
SWGCloudQueueApi::peek(QString* appId, QString* queueName, SWGQueuePayloadWithCount body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/peek");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::peekCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::peekCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit peekSignal(output);
    
}
void
SWGCloudQueueApi::peekMessage(QString* appId, QString* queueName, SWGQueuePayloadWithCount body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/peekMessage");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::peekMessageCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::peekMessageCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit peekMessageSignal(output);
    
}
void
SWGCloudQueueApi::pull(QString* appId, QString* queueName, SWGQueuePayloadWithCount body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/pull");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::pullCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::pullCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit pullSignal(output);
    
}
void
SWGCloudQueueApi::refreshMessageTimeout(QString* appId, QString* queueName, QString* messageId, SWGRefreshMessageTimeoutBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    
    QString messageIdPathParam("{"); messageIdPathParam.append("messageId").append("}");
    fullPath.replace(messageIdPathParam, stringValue(messageId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::refreshMessageTimeoutCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::refreshMessageTimeoutCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit refreshMessageTimeoutSignal(output);
    
}
void
SWGCloudQueueApi::updateMessage(QString* myAppId, QString* queueName, SWGQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{my_app_id}/{queue_name}/message");

    
    QString myAppIdPathParam("{"); myAppIdPathParam.append("myAppId").append("}");
    fullPath.replace(myAppIdPathParam, stringValue(myAppId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::updateMessageCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::updateMessageCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGQueueMessage*>* output = new QList<SWGQueueMessage*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGQueueMessage* o = new SWGQueueMessage();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit updateMessageSignal(output);
    
}
void
SWGCloudQueueApi::updateQueue(QString* appId, QString* queueName, SWGModifiedQueueBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("queue/{app_id}/{queue_name}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString queueNamePathParam("{"); queueNamePathParam.append("queueName").append("}");
    fullPath.replace(queueNamePathParam, stringValue(queueName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueueApi::updateQueueCallback);

    worker->execute(&input);
}

void
SWGCloudQueueApi::updateQueueCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGModifiedQueue* output = static_cast<SWGModifiedQueue*>(create(json, QString("SWGModifiedQueue")));
    
    
    

    worker->deleteLater();

    emit updateQueueSignal(output);
    
}
} /* namespace Swagger */
