/*
 * SWGACL.h
 * 
 * 
 */

#ifndef SWGACL_H_
#define SWGACL_H_

#include <QJsonObject>


#include "SWGRead.h"
#include "SWGWrite.h"

#include "SWGObject.h"


namespace Swagger {

class SWGACL: public SWGObject {
public:
    SWGACL();
    SWGACL(QString* json);
    virtual ~SWGACL();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGACL* fromJson(QString &jsonString);

    SWGRead* getRead();
    void setRead(SWGRead* read);
    SWGWrite* getWrite();
    void setWrite(SWGWrite* write);
    

private:
    SWGRead* read;
    SWGWrite* write;
    
};

} /* namespace Swagger */

#endif /* SWGACL_H_ */
