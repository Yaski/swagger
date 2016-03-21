/*
 * SWGCloudFile.h
 * 
 * 
 */

#ifndef SWGCloudFile_H_
#define SWGCloudFile_H_

#include <QJsonObject>


#include "QDateTime.h"
#include "SWGACL.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudFile: public SWGObject {
public:
    SWGCloudFile();
    SWGCloudFile(QString* json);
    virtual ~SWGCloudFile();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudFile* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* _id);
    QString* getType();
    void setType(QString* _type);
    SWGACL* getACL();
    void setACL(SWGACL* ACL);
    QString* getName();
    void setName(QString* name);
    float getSize();
    void setSize(float size);
    QString* getUrl();
    void setUrl(QString* url);
    QDateTime* getExpires();
    void setExpires(QDateTime* expires);
    QString* getContentType();
    void setContentType(QString* contentType);
    

private:
    QString* _id;
    QString* _type;
    SWGACL* ACL;
    QString* name;
    float size;
    QString* url;
    QDateTime* expires;
    QString* contentType;
    
};

} /* namespace Swagger */

#endif /* SWGCloudFile_H_ */
