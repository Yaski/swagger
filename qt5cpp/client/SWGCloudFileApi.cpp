#include "SWGCloudFileApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudFileApi::SWGCloudFileApi() {}

SWGCloudFileApi::~SWGCloudFileApi() {}

SWGCloudFileApi::SWGCloudFileApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudFileApi::deleteFile(QString* appId, QString* fileId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("file/{app_id}/{file_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString fileIdPathParam("{"); fileIdPathParam.append("fileId").append("}");
    fullPath.replace(fileIdPathParam, stringValue(fileId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudFileApi::deleteFileCallback);

    worker->execute(&input);
}

void
SWGCloudFileApi::deleteFileCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    
    
    

    worker->deleteLater();

    emit deleteFileSignal(output);
    
}
void
SWGCloudFileApi::fetchFileContent(QString* appId, QString* fileId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("file/{app_id}/{file_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString fileIdPathParam("{"); fileIdPathParam.append("fileId").append("}");
    fullPath.replace(fileIdPathParam, stringValue(fileId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudFileApi::fetchFileContentCallback);

    worker->execute(&input);
}

void
SWGCloudFileApi::fetchFileContentCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    
    
    

    worker->deleteLater();

    emit fetchFileContentSignal(output);
    
}
void
SWGCloudFileApi::saveFile(QString* appId, QString* fileObj, QString* key, SWGHttpRequestInputFileElement* fileToUpload) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("file/{app_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    if (key != NULL) {
        input.add_var("key", *key);
    }
    if (fileObj != NULL) {
        input.add_var("fileObj", *fileObj);
    }
    if (fileToUpload != NULL) {
        input.add_file("fileToUpload", *fileToUpload.local_filename, *fileToUpload.request_filename, *fileToUpload.mime_type);
    }
    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudFileApi::saveFileCallback);

    worker->execute(&input);
}

void
SWGCloudFileApi::saveFileCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    
    
    

    worker->deleteLater();

    emit saveFileSignal(output);
    
}
void
SWGCloudFileApi::saveFileData(QString* myAppId, SWGFileBody fileObj) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("file/{my_app_id}");

    
    QString myAppIdPathParam("{"); myAppIdPathParam.append("myAppId").append("}");
    fullPath.replace(myAppIdPathParam, stringValue(myAppId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = fileObj.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudFileApi::saveFileDataCallback);

    worker->execute(&input);
}

void
SWGCloudFileApi::saveFileDataCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    
    
    

    worker->deleteLater();

    emit saveFileDataSignal(output);
    
}
} /* namespace Swagger */
