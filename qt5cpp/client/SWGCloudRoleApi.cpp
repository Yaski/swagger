#include "SWGCloudRoleApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudRoleApi::SWGCloudRoleApi() {}

SWGCloudRoleApi::~SWGCloudRoleApi() {}

SWGCloudRoleApi::SWGCloudRoleApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudRoleApi::createRole(QString* appId, SWGRoleBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/Role");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudRoleApi::createRoleCallback);

    worker->execute(&input);
}

void
SWGCloudRoleApi::createRoleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudRole* output = static_cast<SWGCloudRole*>(create(json, QString("SWGCloudRole")));
    
    
    

    worker->deleteLater();

    emit createRoleSignal(output);
    
}
} /* namespace Swagger */
