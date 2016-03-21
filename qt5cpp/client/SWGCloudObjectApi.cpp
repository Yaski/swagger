#include "SWGCloudObjectApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudObjectApi::SWGCloudObjectApi() {}

SWGCloudObjectApi::~SWGCloudObjectApi() {}

SWGCloudObjectApi::SWGCloudObjectApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudObjectApi::delete(QString* appId, QString* tableName, SWGCloudObjectSaveRequest body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/{table_name}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudObjectApi::deleteCallback);

    worker->execute(&input);
}

void
SWGCloudObjectApi::deleteCallback(HttpRequestWorker * worker) {
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

    emit deleteSignal(output);
    
}
void
SWGCloudObjectApi::save(QString* appId, QString* tableName, SWGCloudObjectSaveRequest body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/{table_name}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString tableNamePathParam("{"); tableNamePathParam.append("tableName").append("}");
    fullPath.replace(tableNamePathParam, stringValue(tableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudObjectApi::saveCallback);

    worker->execute(&input);
}

void
SWGCloudObjectApi::saveCallback(HttpRequestWorker * worker) {
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

    emit saveSignal(output);
    
}
} /* namespace Swagger */
