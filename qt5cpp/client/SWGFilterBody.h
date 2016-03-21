/*
 * SWGFilterBody.h
 * 
 * 
 */

#ifndef SWGFilterBody_H_
#define SWGFilterBody_H_

#include <QJsonObject>


#include "SWGFiltered.h"

#include "SWGObject.h"


namespace Swagger {

class SWGFilterBody: public SWGObject {
public:
    SWGFilterBody();
    SWGFilterBody(QString* json);
    virtual ~SWGFilterBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGFilterBody* fromJson(QString &jsonString);

    SWGFiltered* getFiltered();
    void setFiltered(SWGFiltered* filtered);
    

private:
    SWGFiltered* filtered;
    
};

} /* namespace Swagger */

#endif /* SWGFilterBody_H_ */
