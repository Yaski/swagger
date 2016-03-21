/*
 * SWGCloudObjectSaveRequest.h
 * 
 * 
 */

#ifndef SWGCloudObjectSaveRequest_H_
#define SWGCloudObjectSaveRequest_H_

#include <QJsonObject>


#include "SWGCloudObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudObjectSaveRequest: public SWGObject {
public:
    SWGCloudObjectSaveRequest();
    SWGCloudObjectSaveRequest(QString* json);
    virtual ~SWGCloudObjectSaveRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudObjectSaveRequest* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    SWGCloudObject* getDocument();
    void setDocument(SWGCloudObject* document);
    

private:
    QString* key;
    SWGCloudObject* document;
    
};

} /* namespace Swagger */

#endif /* SWGCloudObjectSaveRequest_H_ */
