/*
 * SWGSearchQuery.h
 * 
 * 
 */

#ifndef SWGSearchQuery_H_
#define SWGSearchQuery_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSearchQuery: public SWGObject {
public:
    SWGSearchQuery();
    SWGSearchQuery(QString* json);
    virtual ~SWGSearchQuery();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSearchQuery* fromJson(QString &jsonString);

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

#endif /* SWGSearchQuery_H_ */
