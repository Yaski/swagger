#ifndef _SWG_SWGCloudUserApi_H_
#define _SWG_SWGCloudUserApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGUserRoleBody.h"
#include "SWGCloudUser.h"
#include "SWGPasswordChangeBody.h"
#include "SWGUserBody.h"
#include "SWGEmailBody.h"

#include <QObject>

namespace Swagger {

class SWGCloudUserApi: public QObject {
    Q_OBJECT

public:
    SWGCloudUserApi();
    SWGCloudUserApi(QString host, QString basePath);
    ~SWGCloudUserApi();

    QString host;
    QString basePath;

    void addToRole(QString* appId, SWGUserRoleBody body);
    void changePassword(QString* appId, SWGPasswordChangeBody body);
    void login(QString* appId, SWGUserBody body);
    void logout(QString* appId, SWGUserBody body);
    void removeFromRole(QString* appId, SWGUserRoleBody body);
    void resetPassword(QString* appId, SWGEmailBody body);
    void signUp(QString* appId, SWGUserBody body);
    
private:
    void addToRoleCallback (HttpRequestWorker * worker);
    void changePasswordCallback (HttpRequestWorker * worker);
    void loginCallback (HttpRequestWorker * worker);
    void logoutCallback (HttpRequestWorker * worker);
    void removeFromRoleCallback (HttpRequestWorker * worker);
    void resetPasswordCallback (HttpRequestWorker * worker);
    void signUpCallback (HttpRequestWorker * worker);
    
signals:
    void addToRoleSignal(SWGCloudUser* summary);
    void changePasswordSignal(SWGCloudUser* summary);
    void loginSignal(SWGCloudUser* summary);
    void logoutSignal(SWGCloudUser* summary);
    void removeFromRoleSignal(SWGCloudUser* summary);
    void resetPasswordSignal(QString* summary);
    void signUpSignal(SWGCloudUser* summary);
    
};
}
#endif