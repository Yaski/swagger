#ifndef _SWG_SWGCloudRoleApi_H_
#define _SWG_SWGCloudRoleApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCloudRole.h"
#include "SWGRoleBody.h"

#include <QObject>

namespace Swagger {

class SWGCloudRoleApi: public QObject {
    Q_OBJECT

public:
    SWGCloudRoleApi();
    SWGCloudRoleApi(QString host, QString basePath);
    ~SWGCloudRoleApi();

    QString host;
    QString basePath;

    void createRole(QString* appId, SWGRoleBody body);
    
private:
    void createRoleCallback (HttpRequestWorker * worker);
    
signals:
    void createRoleSignal(SWGCloudRole* summary);
    
};
}
#endif