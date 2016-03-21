/*
 * SWGCloudObject.h
 * 
 * 
 */

#ifndef SWGCloudObject_H_
#define SWGCloudObject_H_

#include <QJsonObject>


#include "QMap.h"
#include "SWGObject.h"

#include "SWGObject.h"


namespace Swagger {

class SWGCloudObject: public SWGObject {
public:
    SWGCloudObject();
    SWGCloudObject(QString* json);
    virtual ~SWGCloudObject();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudObject* fromJson(QString &jsonString);

    

private:
    
};

} /* namespace Swagger */

#endif /* SWGCloudObject_H_ */
