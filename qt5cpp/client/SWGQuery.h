/*
 * SWGQuery.h
 * 
 * 
 */

#ifndef SWGQuery_H_
#define SWGQuery_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGQuery: public SWGObject {
public:
    SWGQuery();
    SWGQuery(QString* json);
    virtual ~SWGQuery();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGQuery* fromJson(QString &jsonString);

    QList<QString*>* get$IncludeList();
    void set$IncludeList(QList<QString*>* $includeList);
    QList<QString*>* get$Include();
    void set$Include(QList<QString*>* $include);
    

private:
    QList<QString*>* $includeList;
    QList<QString*>* $include;
    
};

} /* namespace Swagger */

#endif /* SWGQuery_H_ */
