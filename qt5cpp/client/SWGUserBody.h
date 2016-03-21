/*
 * SWGUserBody.h
 * 
 * 
 */

#ifndef SWGUserBody_H_
#define SWGUserBody_H_

#include <QJsonObject>


#include "SWGCloudUser.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserBody: public SWGObject {
public:
    SWGUserBody();
    SWGUserBody(QString* json);
    virtual ~SWGUserBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserBody* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    SWGCloudUser* getDocument();
    void setDocument(SWGCloudUser* document);
    

private:
    QString* key;
    SWGCloudUser* document;
    
};

} /* namespace Swagger */

#endif /* SWGUserBody_H_ */
