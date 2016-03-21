#ifndef _SWG_SWGCloudSearchApi_H_
#define _SWG_SWGCloudSearchApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCloudObject.h"
#include "SWGCloudSearch.h"

#include <QObject>

namespace Swagger {

class SWGCloudSearchApi: public QObject {
    Q_OBJECT

public:
    SWGCloudSearchApi();
    SWGCloudSearchApi(QString host, QString basePath);
    ~SWGCloudSearchApi();

    QString host;
    QString basePath;

    void search(QString* appId, QString* tableName, SWGCloudSearch body);
    
private:
    void searchCallback (HttpRequestWorker * worker);
    
signals:
    void searchSignal(QList<SWGCloudObject*>* summary);
    
};
}
#endif