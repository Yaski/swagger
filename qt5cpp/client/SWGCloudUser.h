/*
 * SWGCloudUser.h
 * 
 * 
 */

#ifndef SWGCloudUser_H_
#define SWGCloudUser_H_

#include <QJsonObject>


#include "SWGCloudObject.h"

#include "SWGObject.h"


namespace Swagger {

class SWGCloudUser: public SWGObject {
public:
    SWGCloudUser();
    SWGCloudUser(QString* json);
    virtual ~SWGCloudUser();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudUser* fromJson(QString &jsonString);

    

private:
    
};

} /* namespace Swagger */

#endif /* SWGCloudUser_H_ */
