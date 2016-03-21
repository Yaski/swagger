/*
 * SWGFileBody.h
 * 
 * 
 */

#ifndef SWGFileBody_H_
#define SWGFileBody_H_

#include <QJsonObject>


#include "SWGCloudFile.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGFileBody: public SWGObject {
public:
    SWGFileBody();
    SWGFileBody(QString* json);
    virtual ~SWGFileBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGFileBody* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    QString* getData();
    void setData(QString* data);
    SWGCloudFile* getFileObj();
    void setFileObj(SWGCloudFile* fileObj);
    

private:
    QString* key;
    QString* data;
    SWGCloudFile* fileObj;
    
};

} /* namespace Swagger */

#endif /* SWGFileBody_H_ */
