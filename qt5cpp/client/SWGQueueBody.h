/*
 * SWGQueueBody.h
 * 
 * 
 */

#ifndef SWGQueueBody_H_
#define SWGQueueBody_H_

#include <QJsonObject>


#include "SWGQueue.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGQueueBody: public SWGObject {
public:
    SWGQueueBody();
    SWGQueueBody(QString* json);
    virtual ~SWGQueueBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGQueueBody* fromJson(QString &jsonString);

    SWGQueue* getDocument();
    void setDocument(SWGQueue* document);
    QString* getKey();
    void setKey(QString* key);
    

private:
    SWGQueue* document;
    QString* key;
    
};

} /* namespace Swagger */

#endif /* SWGQueueBody_H_ */
