/*
 * SWGAllow.h
 * 
 * 
 */

#ifndef SWGAllow_H_
#define SWGAllow_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAllow: public SWGObject {
public:
    SWGAllow();
    SWGAllow(QString* json);
    virtual ~SWGAllow();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAllow* fromJson(QString &jsonString);

    QList<QString*>* getUser();
    void setUser(QList<QString*>* user);
    QList<QString*>* getRole();
    void setRole(QList<QString*>* role);
    

private:
    QList<QString*>* user;
    QList<QString*>* role;
    
};

} /* namespace Swagger */

#endif /* SWGAllow_H_ */
