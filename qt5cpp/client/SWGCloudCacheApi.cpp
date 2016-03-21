#include "SWGCloudCacheApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCloudCacheApi::SWGCloudCacheApi() {}

SWGCloudCacheApi::~SWGCloudCacheApi() {}

SWGCloudCacheApi::SWGCloudCacheApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCloudCacheApi::clearCache(QString* appId, QString* cacheName, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}/clear");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::clearCacheCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::clearCacheCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCacheRequest*>* output = new QList<SWGCacheRequest*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCacheRequest* o = new SWGCacheRequest();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit clearCacheSignal(output);
    
}
void
SWGCloudCacheApi::createCache(QString* appId, QString* cacheName, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}/create");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::createCacheCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::createCacheCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCache* output = static_cast<SWGCache*>(create(json, QString("SWGCache")));
    
    
    

    worker->deleteLater();

    emit createCacheSignal(output);
    
}
void
SWGCloudCacheApi::deleteAllCache(QString* appId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::deleteAllCacheCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::deleteAllCacheCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCacheRequest*>* output = new QList<SWGCacheRequest*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCacheRequest* o = new SWGCacheRequest();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit deleteAllCacheSignal(output);
    
}
void
SWGCloudCacheApi::deleteCache(QString* appId, QString* cacheName, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::deleteCacheCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::deleteCacheCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCacheRequest* output = static_cast<SWGCacheRequest*>(create(json, QString("SWGCacheRequest")));
    
    
    

    worker->deleteLater();

    emit deleteCacheSignal(output);
    
}
void
SWGCloudCacheApi::deleteItem(QString* appId, QString* cacheName, QString* dataKey, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}/item/{data_key}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    
    QString dataKeyPathParam("{"); dataKeyPathParam.append("dataKey").append("}");
    fullPath.replace(dataKeyPathParam, stringValue(dataKey));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::deleteItemCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::deleteItemCallback(HttpRequestWorker * worker) {
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

    emit deleteItemSignal(output);
    
}
void
SWGCloudCacheApi::getAllCache(QString* appId, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::getAllCacheCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::getAllCacheCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCache*>* output = new QList<SWGCache*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCache* o = new SWGCache();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit getAllCacheSignal(output);
    
}
void
SWGCloudCacheApi::getAllItems(QString* appId, QString* cacheName, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}/items");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::getAllItemsCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::getAllItemsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCacheItem*>* output = new QList<SWGCacheItem*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCacheItem* o = new SWGCacheItem();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit getAllItemsSignal(output);
    
}
void
SWGCloudCacheApi::getCacheInfo(QString* appId, QString* cacheName, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::getCacheInfoCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::getCacheInfoCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCache* output = static_cast<SWGCache*>(create(json, QString("SWGCache")));
    
    
    

    worker->deleteLater();

    emit getCacheInfoSignal(output);
    
}
void
SWGCloudCacheApi::getItem(QString* appId, QString* cacheName, QString* dataKey, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}/{data_key}/item");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    
    QString dataKeyPathParam("{"); dataKeyPathParam.append("dataKey").append("}");
    fullPath.replace(dataKeyPathParam, stringValue(dataKey));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::getItemCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::getItemCallback(HttpRequestWorker * worker) {
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

    emit getItemSignal(output);
    
}
void
SWGCloudCacheApi::getItemsCount(QString* appId, QString* cacheName, SWGKeyBody body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}/items/count");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::getItemsCountCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::getItemsCountCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    qint32 output;  // TODO add primitive output support
    
    
    
    
    
    

    worker->deleteLater();

    emit getItemsCountSignal(output);
    
}
void
SWGCloudCacheApi::set(QString* appId, QString* cacheName, QString* dataKey, SWGCacheRequest body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("cache/{app_id}/{cache_name}/{data_key}");

    
    QString appIdPathParam("{"); appIdPathParam.append("appId").append("}");
    fullPath.replace(appIdPathParam, stringValue(appId));
    
    QString cacheNamePathParam("{"); cacheNamePathParam.append("cacheName").append("}");
    fullPath.replace(cacheNamePathParam, stringValue(cacheName));
    
    QString dataKeyPathParam("{"); dataKeyPathParam.append("dataKey").append("}");
    fullPath.replace(dataKeyPathParam, stringValue(dataKey));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCloudCacheApi::setCallback);

    worker->execute(&input);
}

void
SWGCloudCacheApi::setCallback(HttpRequestWorker * worker) {
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

    emit setSignal(output);
    
}
} /* namespace Swagger */
