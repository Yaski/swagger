/*
 * SWGRead.h
 * 
 * 
 */

#ifndef SWGRead_H_
#define SWGRead_H_

#include <QJsonObject>


#include "SWGAllow.h"
#include "SWGDeny.h"

#include "SWGObject.h"


namespace Swagger {

class SWGRead: public SWGObject {
public:
    SWGRead();
    SWGRead(QString* json);
    virtual ~SWGRead();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRead* fromJson(QString &jsonString);

    SWGAllow* getAllow();
    void setAllow(SWGAllow* allow);
    SWGDeny* getDeny();
    void setDeny(SWGDeny* deny);
    

private:
    SWGAllow* allow;
    SWGDeny* deny;
    
};

} /* namespace Swagger */

#endif /* SWGRead_H_ */
