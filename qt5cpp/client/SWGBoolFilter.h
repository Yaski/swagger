/*
 * SWGBoolFilter.h
 * 
 * 
 */

#ifndef SWGBoolFilter_H_
#define SWGBoolFilter_H_

#include <QJsonObject>


#include "SWGSearchFilter.h"

#include "SWGObject.h"


namespace Swagger {

class SWGBoolFilter: public SWGObject {
public:
    SWGBoolFilter();
    SWGBoolFilter(QString* json);
    virtual ~SWGBoolFilter();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBoolFilter* fromJson(QString &jsonString);

    SWGSearchFilter* getBool();
    void setBool(SWGSearchFilter* bool);
    

private:
    SWGSearchFilter* bool;
    
};

} /* namespace Swagger */

#endif /* SWGBoolFilter_H_ */
