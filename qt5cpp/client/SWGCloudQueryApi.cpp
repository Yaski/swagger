#include "SWGCloudQueryApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudQueryApi::SWGCloudQueryApi() {}

SWGCloudQueryApi::~SWGCloudQueryApi() {}

SWGCloudQueryApi::SWGCloudQueryApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudQueryApi::count(QString* appId, QString* tableName, SWGCloudQueryCount body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/{table_name}/count");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueryApi::countCallback);

    worker->execute(&input);
}

void
SWGCloudQueryApi::countCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    qint32 output;  // TODO add primitive output support
    
    
    
    
    
    

    worker->deleteLater();

    emit countSignal(output);
    
}
void
SWGCloudQueryApi::distinct(QString* appId, QString* tableName, SWGCloudQueryDistinct body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/{table_name}/distinct");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueryApi::distinctCallback);

    worker->execute(&input);
}

void
SWGCloudQueryApi::distinctCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCloudObject*>* output = new QList<SWGCloudObject*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCloudObject* o = new SWGCloudObject();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit distinctSignal(output);
    
}
void
SWGCloudQueryApi::find(QString* appId, QString* tableName, SWGCloudQuery body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/{table_name}/find");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueryApi::findCallback);

    worker->execute(&input);
}

void
SWGCloudQueryApi::findCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCloudObject*>* output = new QList<SWGCloudObject*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCloudObject* o = new SWGCloudObject();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit findSignal(output);
    
}
void
SWGCloudQueryApi::findById(QString* cloudAppId, QString* tableName, SWGCloudQueryFindById body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{cloud_app_id}/{table_name}/find");

    
    QString cloudAppIdPathParam("{"); cloudAppIdPathParam.append("cloudAppId").append("}");
    fullPath.replace(cloudAppIdPathParam, stringValue(cloudAppId));
    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueryApi::findByIdCallback);

    worker->execute(&input);
}

void
SWGCloudQueryApi::findByIdCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudObject* output = static_cast<SWGCloudObject*>(create(json, QString("SWGCloudObject")));
    
    
    

    worker->deleteLater();

    emit findByIdSignal(output);
    
}
void
SWGCloudQueryApi::findOne(QString* appId, QString* tableName, SWGCloudQueryFindOne body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/{table_name}/findOne");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudQueryApi::findOneCallback);

    worker->execute(&input);
}

void
SWGCloudQueryApi::findOneCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudObject* output = static_cast<SWGCloudObject*>(create(json, QString("SWGCloudObject")));
    
    
    

    worker->deleteLater();

    emit findOneSignal(output);
    
}
} /* namespace Swagger */
