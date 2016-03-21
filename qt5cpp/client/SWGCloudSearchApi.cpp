#include "SWGCloudSearchApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudSearchApi::SWGCloudSearchApi() {}

SWGCloudSearchApi::~SWGCloudSearchApi() {}

SWGCloudSearchApi::SWGCloudSearchApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudSearchApi::search(QString* appId, QString* tableName, SWGCloudSearch body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("data/{app_id}/{table_name}/search");

    
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
            &SWGCloudSearchApi::searchCallback);

    worker->execute(&input);
}

void
SWGCloudSearchApi::searchCallback(HttpRequestWorker * worker) {
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

    emit searchSignal(output);
    
}
} /* namespace Swagger */
