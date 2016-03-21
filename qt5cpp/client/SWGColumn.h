/*
 * SWGColumn.h
 * 
 * 
 */

#ifndef SWGColumn_H_
#define SWGColumn_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGColumn: public SWGObject {
public:
    SWGColumn();
    SWGColumn(QString* json);
    virtual ~SWGColumn();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGColumn* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    QString* getDataType();
    void setDataType(QString* dataType);
    QString* getType();
    void setType(QString* _type);
    bool getRequired();
    void setRequired(bool required);
    bool getUnique();
    void setUnique(bool unique);
    QString* getRelatedTo();
    void setRelatedTo(QString* relatedTo);
    QString* getRelationType();
    void setRelationType(QString* relationType);
    bool getIsDeletable();
    void setIsDeletable(bool isDeletable);
    bool getIsEditable();
    void setIsEditable(bool isEditable);
    bool getIsRenamable();
    void setIsRenamable(bool isRenamable);
    

private:
    QString* name;
    QString* dataType;
    QString* _type;
    bool required;
    bool unique;
    QString* relatedTo;
    QString* relationType;
    bool isDeletable;
    bool isEditable;
    bool isRenamable;
    
};

} /* namespace Swagger */

#endif /* SWGColumn_H_ */
