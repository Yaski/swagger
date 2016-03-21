/*
 * SWGDeny.h
 * 
 * 
 */

#ifndef SWGDeny_H_
#define SWGDeny_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGDeny: public SWGObject {
public:
    SWGDeny();
    SWGDeny(QString* json);
    virtual ~SWGDeny();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGDeny* fromJson(QString &jsonString);

    QList<QString*>* getUser();
    void setUser(QList<QString*>* user);
    QList<QString*>* getRole();
    void setRole(QList<QString*>* role);
    

private:
    QList<QString*>* user;
    QList<QString*>* role;
    
};

} /* namespace Swagger */

#endif /* SWGDeny_H_ */
