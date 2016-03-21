/*
 * SWGFiltered.h
 * 
 * 
 */

#ifndef SWGFiltered_H_
#define SWGFiltered_H_

#include <QJsonObject>


#include "SWGBoolFilter.h"
#include "SWGBoolQuery.h"

#include "SWGObject.h"


namespace Swagger {

class SWGFiltered: public SWGObject {
public:
    SWGFiltered();
    SWGFiltered(QString* json);
    virtual ~SWGFiltered();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGFiltered* fromJson(QString &jsonString);

    SWGBoolQuery* getQuery();
    void setQuery(SWGBoolQuery* query);
    SWGBoolFilter* getFilter();
    void setFilter(SWGBoolFilter* filter);
    

private:
    SWGBoolQuery* query;
    SWGBoolFilter* filter;
    
};

} /* namespace Swagger */

#endif /* SWGFiltered_H_ */
