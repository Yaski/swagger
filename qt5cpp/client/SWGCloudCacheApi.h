#ifndef _SWG_SWGCloudCacheApi_H_
#define _SWG_SWGCloudCacheApi_H_

#include "SWGHttpRequest.h"

#include "SWGCacheRequest.h"
#include <QString>
#include "SWGKeyBody.h"
#include "SWGCache.h"
#include "SWGCacheItem.h"

#include <QObject>

namespace Swagger {

class SWGCloudCacheApi: public QObject {
    Q_OBJECT

public:
    SWGCloudCacheApi();
    SWGCloudCacheApi(QString host, QString basePath);
    ~SWGCloudCacheApi();

    QString host;
    QString basePath;

    void clearCache(QString* appId, QString* cacheName, SWGKeyBody body);
    void createCache(QString* appId, QString* cacheName, SWGKeyBody body);
    void deleteAllCache(QString* appId, SWGKeyBody body);
    void deleteCache(QString* appId, QString* cacheName, SWGKeyBody body);
    void deleteItem(QString* appId, QString* cacheName, QString* dataKey, SWGKeyBody body);
    void getAllCache(QString* appId, SWGKeyBody body);
    void getAllItems(QString* appId, QString* cacheName, SWGKeyBody body);
    void getCacheInfo(QString* appId, QString* cacheName, SWGKeyBody body);
    void getItem(QString* appId, QString* cacheName, QString* dataKey, SWGKeyBody body);
    void getItemsCount(QString* appId, QString* cacheName, SWGKeyBody body);
    void set(QString* appId, QString* cacheName, QString* dataKey, SWGCacheRequest body);
    
private:
    void clearCacheCallback (HttpRequestWorker * worker);
    void createCacheCallback (HttpRequestWorker * worker);
    void deleteAllCacheCallback (HttpRequestWorker * worker);
    void deleteCacheCallback (HttpRequestWorker * worker);
    void deleteItemCallback (HttpRequestWorker * worker);
    void getAllCacheCallback (HttpRequestWorker * worker);
    void getAllItemsCallback (HttpRequestWorker * worker);
    void getCacheInfoCallback (HttpRequestWorker * worker);
    void getItemCallback (HttpRequestWorker * worker);
    void getItemsCountCallback (HttpRequestWorker * worker);
    void setCallback (HttpRequestWorker * worker);
    
signals:
    void clearCacheSignal(QList<SWGCacheRequest*>* summary);
    void createCacheSignal(SWGCache* summary);
    void deleteAllCacheSignal(QList<SWGCacheRequest*>* summary);
    void deleteCacheSignal(SWGCacheRequest* summary);
    void deleteItemSignal(QString* summary);
    void getAllCacheSignal(QList<SWGCache*>* summary);
    void getAllItemsSignal(QList<SWGCacheItem*>* summary);
    void getCacheInfoSignal(SWGCache* summary);
    void getItemSignal(QString* summary);
    void getItemsCountSignal(qint32 summary);
    void setSignal(QString* summary);
    
};
}
#endif