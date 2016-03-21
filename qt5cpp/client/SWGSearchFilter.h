/*
 * SWGSearchFilter.h
 * 
 * 
 */

#ifndef SWGSearchFilter_H_
#define SWGSearchFilter_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSearchFilter: public SWGObject {
public:
    SWGSearchFilter();
    SWGSearchFilter(QString* json);
    virtual ~SWGSearchFilter();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSearchFilter* fromJson(QString &jsonString);

    QList<QString*>* getMustNot();
    void setMustNot(QList<QString*>* must_not);
    QList<QString*>* getShould();
    void setShould(QList<QString*>* should);
    QList<QString*>* getMust();
    void setMust(QList<QString*>* must);
    

private:
    QList<QString*>* must_not;
    QList<QString*>* should;
    QList<QString*>* must;
    
};

} /* namespace Swagger */

#endif /* SWGSearchFilter_H_ */
