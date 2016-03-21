/*
 * SWGKeyBody.h
 * 
 * 
 */

#ifndef SWGKeyBody_H_
#define SWGKeyBody_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGKeyBody: public SWGObject {
public:
    SWGKeyBody();
    SWGKeyBody(QString* json);
    virtual ~SWGKeyBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGKeyBody* fromJson(QString &jsonString);

    QString* getKey();
    void setKey(QString* key);
    

private:
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGKeyBody_H_ */
