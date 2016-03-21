#include "SWGCloudUserApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudUserApi::SWGCloudUserApi() {}

SWGCloudUserApi::~SWGCloudUserApi() {}

SWGCloudUserApi::SWGCloudUserApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudUserApi::addToRole(QString* appId, SWGUserRoleBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("user/{app_id}/addToRole");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudUserApi::addToRoleCallback);

    worker->execute(&input);
}

void
SWGCloudUserApi::addToRoleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudUser* output = static_cast<SWGCloudUser*>(create(json, QString("SWGCloudUser")));
    
    
    

    worker->deleteLater();

    emit addToRoleSignal(output);
    
}
void
SWGCloudUserApi::changePassword(QString* appId, SWGPasswordChangeBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("user/{app_id}/changePassword");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudUserApi::changePasswordCallback);

    worker->execute(&input);
}

void
SWGCloudUserApi::changePasswordCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudUser* output = static_cast<SWGCloudUser*>(create(json, QString("SWGCloudUser")));
    
    
    

    worker->deleteLater();

    emit changePasswordSignal(output);
    
}
void
SWGCloudUserApi::login(QString* appId, SWGUserBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("user/{app_id}/login");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudUserApi::loginCallback);

    worker->execute(&input);
}

void
SWGCloudUserApi::loginCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudUser* output = static_cast<SWGCloudUser*>(create(json, QString("SWGCloudUser")));
    
    
    

    worker->deleteLater();

    emit loginSignal(output);
    
}
void
SWGCloudUserApi::logout(QString* appId, SWGUserBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("user/{app_id}/logout");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudUserApi::logoutCallback);

    worker->execute(&input);
}

void
SWGCloudUserApi::logoutCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudUser* output = static_cast<SWGCloudUser*>(create(json, QString("SWGCloudUser")));
    
    
    

    worker->deleteLater();

    emit logoutSignal(output);
    
}
void
SWGCloudUserApi::removeFromRole(QString* appId, SWGUserRoleBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("user/{app_id}/removeFromRole");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudUserApi::removeFromRoleCallback);

    worker->execute(&input);
}

void
SWGCloudUserApi::removeFromRoleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudUser* output = static_cast<SWGCloudUser*>(create(json, QString("SWGCloudUser")));
    
    
    

    worker->deleteLater();

    emit removeFromRoleSignal(output);
    
}
void
SWGCloudUserApi::resetPassword(QString* appId, SWGEmailBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("user/{app_id}/resetPassword");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudUserApi::resetPasswordCallback);

    worker->execute(&input);
}

void
SWGCloudUserApi::resetPasswordCallback(HttpRequestWorker * worker) {
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

    emit resetPasswordSignal(output);
    
}
void
SWGCloudUserApi::signUp(QString* appId, SWGUserBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("user/{app_id}/signup");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudUserApi::signUpCallback);

    worker->execute(&input);
}

void
SWGCloudUserApi::signUpCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCloudUser* output = static_cast<SWGCloudUser*>(create(json, QString("SWGCloudUser")));
    
    
    

    worker->deleteLater();

    emit signUpSignal(output);
    
}
} /* namespace Swagger */
