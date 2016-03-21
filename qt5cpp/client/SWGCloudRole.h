/*
 * SWGCloudRole.h
 * 
 * 
 */

#ifndef SWGCloudRole_H_
#define SWGCloudRole_H_

#include <QJsonObject>


#include "SWGCloudObject.h"

#include "SWGObject.h"


namespace Swagger {

class SWGCloudRole: public SWGObject {
public:
    SWGCloudRole();
    SWGCloudRole(QString* json);
    virtual ~SWGCloudRole();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudRole* fromJson(QString &jsonString);

    

private:
    
};

} /* namespace Swagger */

#endif /* SWGCloudRole_H_ */
