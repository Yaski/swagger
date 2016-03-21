#include "SWGCloudTableApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudTableApi::SWGCloudTableApi() {}

SWGCloudTableApi::~SWGCloudTableApi() {}

SWGCloudTableApi::SWGCloudTableApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudTableApi::deleteTable(QString* tableName, QString* appId, SWGCloudTableSave body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("app/{app_id}/{table_name}");

    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudTableApi::deleteTableCallback);

    worker->execute(&input);
}

void
SWGCloudTableApi::deleteTableCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudTable* output = static_cast<SWGCloudTable*>(create(json, QString("SWGCloudTable")));
    
    
    

    worker->deleteLater();

    emit deleteTableSignal(output);
    
}
void
SWGCloudTableApi::get(QString* tableName, QString* appId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("app/{app_id}/{table_name}");

    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudTableApi::getCallback);

    worker->execute(&input);
}

void
SWGCloudTableApi::getCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudTable* output = static_cast<SWGCloudTable*>(create(json, QString("SWGCloudTable")));
    
    
    

    worker->deleteLater();

    emit getSignal(output);
    
}
void
SWGCloudTableApi::getAll(QString* appId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/app/{app_id}/_getAll");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudTableApi::getAllCallback);

    worker->execute(&input);
}

void
SWGCloudTableApi::getAllCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit getAllSignal();
}
void
SWGCloudTableApi::save(QString* tableName, QString* appId, SWGCloudTableSave body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("app/{app_id}/{table_name}");

    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudTableApi::saveCallback);

    worker->execute(&input);
}

void
SWGCloudTableApi::saveCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudTable* output = static_cast<SWGCloudTable*>(create(json, QString("SWGCloudTable")));
    
    
    

    worker->deleteLater();

    emit saveSignal(output);
    
}
} /* namespace Swagger */
