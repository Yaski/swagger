/*
 * SWGPasswordChangeBody.h
 * 
 * 
 */

#ifndef SWGPasswordChangeBody_H_
#define SWGPasswordChangeBody_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPasswordChangeBody: public SWGObject {
public:
    SWGPasswordChangeBody();
    SWGPasswordChangeBody(QString* json);
    virtual ~SWGPasswordChangeBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPasswordChangeBody* fromJson(QString &jsonString);

    QString* getOldPassword();
    void setOldPassword(QString* oldPassword);
    QString* getNewPassword();
    void setNewPassword(QString* newPassword);
    QString* getKey();
    void setKey(QString* key);
    

private:
    QString* oldPassword;
    QString* newPassword;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGPasswordChangeBody_H_ */
