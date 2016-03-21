#ifndef _SWG_SWGCloudTableApi_H_
#define _SWG_SWGCloudTableApi_H_

#include "SWGHttpRequest.h"

#include "SWGCloudTable.h"
#include "SWGCloudTableSave.h"
#include <QString>
#include "SWGKeyBody.h"

#include <QObject>

namespace Swagger {

class SWGCloudTableApi: public QObject {
    Q_OBJECT

public:
    SWGCloudTableApi();
    SWGCloudTableApi(QString host, QString basePath);
    ~SWGCloudTableApi();

    QString host;
    QString basePath;

    void deleteTable(QString* tableName, QString* appId, SWGCloudTableSave body);
    void get(QString* tableName, QString* appId, SWGKeyBody body);
    void getAll(QString* appId, SWGKeyBody body);
    void save(QString* tableName, QString* appId, SWGCloudTableSave body);
    
private:
    void deleteTableCallback (HttpRequestWorker * worker);
    void getCallback (HttpRequestWorker * worker);
    void getAllCallback (HttpRequestWorker * worker);
    void saveCallback (HttpRequestWorker * worker);
    
signals:
    void deleteTableSignal(SWGCloudTable* summary);
    void getSignal(SWGCloudTable* summary);
    void getAllSignal();
    void saveSignal(SWGCloudTable* summary);
    
};
}
#endif