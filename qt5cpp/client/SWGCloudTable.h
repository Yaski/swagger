/*
 * SWGCloudTable.h
 * 
 * 
 */

#ifndef SWGCloudTable_H_
#define SWGCloudTable_H_

#include <QJsonObject>


#include "SWGColumn.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCloudTable: public SWGObject {
public:
    SWGCloudTable();
    SWGCloudTable(QString* json);
    virtual ~SWGCloudTable();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCloudTable* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    QString* getAppId();
    void setAppId(QString* appId);
    QString* getType();
    void setType(QString* type);
    QList<SWGColumn*>* getColumns();
    void setColumns(QList<SWGColumn*>* columns);
    

private:
    QString* name;
    QString* appId;
    QString* type;
    QList<SWGColumn*>* columns;
    
};

} /* namespace Swagger */

#endif /* SWGCloudTable_H_ */
