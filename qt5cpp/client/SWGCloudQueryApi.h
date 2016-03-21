#ifndef _SWG_SWGCloudQueryApi_H_
#define _SWG_SWGCloudQueryApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCloudQueryCount.h"
#include "SWGCloudObject.h"
#include "SWGCloudQueryDistinct.h"
#include "SWGCloudQuery.h"
#include "SWGCloudQueryFindById.h"
#include "SWGCloudQueryFindOne.h"

#include <QObject>

namespace Swagger {

class SWGCloudQueryApi: public QObject {
    Q_OBJECT

public:
    SWGCloudQueryApi();
    SWGCloudQueryApi(QString host, QString basePath);
    ~SWGCloudQueryApi();

    QString host;
    QString basePath;

    void count(QString* appId, QString* tableName, SWGCloudQueryCount body);
    void distinct(QString* appId, QString* tableName, SWGCloudQueryDistinct body);
    void find(QString* appId, QString* tableName, SWGCloudQuery body);
    void findById(QString* cloudAppId, QString* tableName, SWGCloudQueryFindById body);
    void findOne(QString* appId, QString* tableName, SWGCloudQueryFindOne body);
    
private:
    void countCallback (HttpRequestWorker * worker);
    void distinctCallback (HttpRequestWorker * worker);
    void findCallback (HttpRequestWorker * worker);
    void findByIdCallback (HttpRequestWorker * worker);
    void findOneCallback (HttpRequestWorker * worker);
    
signals:
    void countSignal(qint32 summary);
    void distinctSignal(QList<SWGCloudObject*>* summary);
    void findSignal(QList<SWGCloudObject*>* summary);
    void findByIdSignal(SWGCloudObject* summary);
    void findOneSignal(SWGCloudObject* summary);
    
};
}
#endif