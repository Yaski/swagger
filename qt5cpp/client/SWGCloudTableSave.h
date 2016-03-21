/*
 * SWGCloudTableSave.h
 * 
 * 
 */

#ifndef SWGCloudTableSave_H_
#define SWGCloudTableSave_H_

#include <QJsonObject>


#include "SWGCloudTable.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudTableSave: public SWGObject {
public:
    SWGCloudTableSave();
    SWGCloudTableSave(QString* json);
    virtual ~SWGCloudTableSave();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudTableSave* fromJson(QString &jsonString);

    SWGCloudTable* getData();
    void setData(SWGCloudTable* data);
    QString* getKey();
    void setKey(QString* key);
    

private:
    SWGCloudTable* data;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGCloudTableSave_H_ */
