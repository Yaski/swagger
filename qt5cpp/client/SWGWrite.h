/*
 * SWGWrite.h
 * 
 * 
 */

#ifndef SWGWrite_H_
#define SWGWrite_H_

#include <QJsonObject>


#include "SWGAllow.h"
#include "SWGDeny.h"

#include "SWGObject.h"


namespace Swagger {

class SWGWrite: public SWGObject {
public:
    SWGWrite();
    SWGWrite(QString* json);
    virtual ~SWGWrite();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGWrite* fromJson(QString &jsonString);

    SWGAllow* getAllow();
    void setAllow(SWGAllow* allow);
    SWGDeny* getDeny();
    void setDeny(SWGDeny* deny);
    

private:
    SWGAllow* allow;
    SWGDeny* deny;
    
};

} /* namespace Swagger */

#endif /* SWGWrite_H_ */
