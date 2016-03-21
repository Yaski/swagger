/*
 * SWGCloudQueryId.h
 * 
 * 
 */

#ifndef SWGCloudQueryId_H_
#define SWGCloudQueryId_H_

#include <QJsonObject>


#include "SWGQuery.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudQueryId: public SWGObject {
public:
    SWGCloudQueryId();
    SWGCloudQueryId(QString* json);
    virtual ~SWGCloudQueryId();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudQueryId* fromJson(QString &jsonString);

    QList<QString*>* get$IncludeList();
    void set$IncludeList(QList<QString*>* $includeList);
    QList<QString*>* get$Include();
    void set$Include(QList<QString*>* $include);
    QString* getId();
    void setId(QString* _id);
    

private:
    QList<QString*>* $includeList;
    QList<QString*>* $include;
    QString* _id;
    
};

} /* namespace Swagger */

#endif /* SWGCloudQueryId_H_ */
