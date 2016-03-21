/*
 * SWGRoleBody.h
 * 
 * 
 */

#ifndef SWGRoleBody_H_
#define SWGRoleBody_H_

#include <QJsonObject>


#include "SWGCloudRole.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGRoleBody: public SWGObject {
public:
    SWGRoleBody();
    SWGRoleBody(QString* json);
    virtual ~SWGRoleBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRoleBody* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    SWGCloudRole* getDocument();
    void setDocument(SWGCloudRole* document);
    

private:
    QString* key;
    SWGCloudRole* document;
    
};

} /* namespace Swagger */

#endif /* SWGRoleBody_H_ */
