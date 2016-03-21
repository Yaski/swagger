/*
 * SWGBoolQuery.h
 * 
 * 
 */

#ifndef SWGBoolQuery_H_
#define SWGBoolQuery_H_

#include <QJsonObject>


#include "SWGSearchQuery.h"

#include "SWGObject.h"


namespace Swagger {

class SWGBoolQuery: public SWGObject {
public:
    SWGBoolQuery();
    SWGBoolQuery(QString* json);
    virtual ~SWGBoolQuery();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBoolQuery* fromJson(QString &jsonString);

    SWGSearchQuery* getBool();
    void setBool(SWGSearchQuery* bool);
    

private:
    SWGSearchQuery* bool;
    
};

} /* namespace Swagger */

#endif /* SWGBoolQuery_H_ */
