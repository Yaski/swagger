/*
 * SWGCache.h
 * 
 * 
 */

#ifndef SWGCache_H_
#define SWGCache_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCache: public SWGObject {
public:
    SWGCache();
    SWGCache(QString* json);
    virtual ~SWGCache();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCache* fromJson(QString &jsonString);

    QString* getType();
    void setType(QString* _type);
    QString* getName();
    void setName(QString* name);
    QString* getSize();
    void setSize(QString* size);
    

private:
    QString* _type;
    QString* name;
    QString* size;
    
};

} /* namespace Swagger */

#endif /* SWGCache_H_ */
