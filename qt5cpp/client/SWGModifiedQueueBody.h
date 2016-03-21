/*
 * SWGModifiedQueueBody.h
 * 
 * 
 */

#ifndef SWGModifiedQueueBody_H_
#define SWGModifiedQueueBody_H_

#include <QJsonObject>


#include "SWGModifiedQueue.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGModifiedQueueBody: public SWGObject {
public:
    SWGModifiedQueueBody();
    SWGModifiedQueueBody(QString* json);
    virtual ~SWGModifiedQueueBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGModifiedQueueBody* fromJson(QString &jsonString);

    SWGModifiedQueue* getDocument();
    void setDocument(SWGModifiedQueue* document);
    QString* getKey();
    void setKey(QString* key);
    

private:
    SWGModifiedQueue* document;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGModifiedQueueBody_H_ */
