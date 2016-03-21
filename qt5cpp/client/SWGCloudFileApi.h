#ifndef _SWG_SWGCloudFileApi_H_
#define _SWG_SWGCloudFileApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGKeyBody.h"
#include "SWGHttpRequest.h"
#include "SWGFileBody.h"

#include <QObject>

namespace Swagger {

class SWGCloudFileApi: public QObject {
    Q_OBJECT

public:
    SWGCloudFileApi();
    SWGCloudFileApi(QString host, QString basePath);
    ~SWGCloudFileApi();

    QString host;
    QString basePath;

    void deleteFile(QString* appId, QString* fileId, SWGKeyBody body);
    void fetchFileContent(QString* appId, QString* fileId, SWGKeyBody body);
    void saveFile(QString* appId, QString* fileObj, QString* key, SWGHttpRequestInputFileElement* fileToUpload);
    void saveFileData(QString* myAppId, SWGFileBody fileObj);
    
private:
    void deleteFileCallback (HttpRequestWorker * worker);
    void fetchFileContentCallback (HttpRequestWorker * worker);
    void saveFileCallback (HttpRequestWorker * worker);
    void saveFileDataCallback (HttpRequestWorker * worker);
    
signals:
    void deleteFileSignal(QString* summary);
    void fetchFileContentSignal(QString* summary);
    void saveFileSignal(QString* summary);
    void saveFileDataSignal(QString* summary);
    
};
}
#endif