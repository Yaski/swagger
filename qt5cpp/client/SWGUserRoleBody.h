/*
 * SWGUserRoleBody.h
 * 
 * 
 */

#ifndef SWGUserRoleBody_H_
#define SWGUserRoleBody_H_

#include <QJsonObject>


#include "SWGCloudRole.h"
#include "SWGCloudUser.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserRoleBody: public SWGObject {
public:
    SWGUserRoleBody();
    SWGUserRoleBody(QString* json);
    virtual ~SWGUserRoleBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserRoleBody* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    SWGCloudRole* getRole();
    void setRole(SWGCloudRole* role);
    SWGCloudUser* getUser();
    void setUser(SWGCloudUser* user);
    

private:
    QString* key;
    SWGCloudRole* role;
    SWGCloudUser* user;
    
};

} /* namespace Swagger */

#endif /* SWGUserRoleBody_H_ */
