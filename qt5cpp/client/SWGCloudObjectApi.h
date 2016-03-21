#ifndef _SWG_SWGCloudObjectApi_H_
#define _SWG_SWGCloudObjectApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCloudObject.h"
#include "SWGCloudObjectSaveRequest.h"

#include <QObject>

namespace Swagger {

class SWGCloudObjectApi: public QObject {
    Q_OBJECT

public:
    SWGCloudObjectApi();
    SWGCloudObjectApi(QString host, QString basePath);
    ~SWGCloudObjectApi();

    QString host;
    QString basePath;

    void delete(QString* appId, QString* tableName, SWGCloudObjectSaveRequest body);
    void save(QString* appId, QString* tableName, SWGCloudObjectSaveRequest body);
    
private:
    void deleteCallback (HttpRequestWorker * worker);
    void saveCallback (HttpRequestWorker * worker);
    
signals:
    void deleteSignal(SWGCloudObject* summary);
    void saveSignal(SWGCloudObject* summary);
    
};
}
#endif