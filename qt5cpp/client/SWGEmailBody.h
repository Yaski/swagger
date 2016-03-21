/*
 * SWGEmailBody.h
 * 
 * 
 */

#ifndef SWGEmailBody_H_
#define SWGEmailBody_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGEmailBody: public SWGObject {
public:
    SWGEmailBody();
    SWGEmailBody(QString* json);
    virtual ~SWGEmailBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGEmailBody* fromJson(QString &jsonString);

    QString* getEmail();
    void setEmail(QString* email);
    QString* getKey();
    void setKey(QString* key);
    

private:
    QString* email;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGEmailBody_H_ */
