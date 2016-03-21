#ifndef _SWG_SWGCloudQueueApi_H_
#define _SWG_SWGCloudQueueApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGQueueMessage.h"
#include "SWGQueueBody.h"
#include "SWGQueue.h"
#include "SWGKeyBody.h"
#include "SWGQueuePayloadWithCount.h"
#include "SWGRefreshMessageTimeoutBody.h"
#include "SWGModifiedQueueBody.h"
#include "SWGModifiedQueue.h"

#include <QObject>

namespace Swagger {

class SWGCloudQueueApi: public QObject {
    Q_OBJECT

public:
    SWGCloudQueueApi();
    SWGCloudQueueApi(QString host, QString basePath);
    ~SWGCloudQueueApi();

    QString host;
    QString basePath;

    void addMessage(QString* appId, QString* queueName, SWGQueueBody body);
    void addSubscriber(QString* appId, QString* queueName, SWGQueueBody body);
    void clear(QString* appId, QString* queueName, SWGQueueBody body);
    void createQueue(QString* appId, QString* queueName, SWGQueueBody body);
    void deleteMessage(QString* appId, QString* queueName, QString* messageId, SWGKeyBody body);
    void deleteQueue(QString* appId, QString* queueName, SWGQueueBody body);
    void deleteSubscriber(QString* appId, QString* queueName, SWGQueueBody body);
    void getAllMessages(QString* appId, SWGKeyBody body);
    void getAllQueues(QString* appId, SWGKeyBody body);
    void getMessage(QString* appId, QString* queueName, SWGQueuePayloadWithCount body);
    void getMessageById(QString* appId, QString* queueName, QString* messageId, SWGKeyBody body);
    void getQueue(QString* appId, QString* queueName, SWGKeyBody body);
    void peek(QString* appId, QString* queueName, SWGQueuePayloadWithCount body);
    void peekMessage(QString* appId, QString* queueName, SWGQueuePayloadWithCount body);
    void pull(QString* appId, QString* queueName, SWGQueuePayloadWithCount body);
    void refreshMessageTimeout(QString* appId, QString* queueName, QString* messageId, SWGRefreshMessageTimeoutBody body);
    void updateMessage(QString* myAppId, QString* queueName, SWGQueueBody body);
    void updateQueue(QString* appId, QString* queueName, SWGModifiedQueueBody body);
    
private:
    void addMessageCallback (HttpRequestWorker * worker);
    void addSubscriberCallback (HttpRequestWorker * worker);
    void clearCallback (HttpRequestWorker * worker);
    void createQueueCallback (HttpRequestWorker * worker);
    void deleteMessageCallback (HttpRequestWorker * worker);
    void deleteQueueCallback (HttpRequestWorker * worker);
    void deleteSubscriberCallback (HttpRequestWorker * worker);
    void getAllMessagesCallback (HttpRequestWorker * worker);
    void getAllQueuesCallback (HttpRequestWorker * worker);
    void getMessageCallback (HttpRequestWorker * worker);
    void getMessageByIdCallback (HttpRequestWorker * worker);
    void getQueueCallback (HttpRequestWorker * worker);
    void peekCallback (HttpRequestWorker * worker);
    void peekMessageCallback (HttpRequestWorker * worker);
    void pullCallback (HttpRequestWorker * worker);
    void refreshMessageTimeoutCallback (HttpRequestWorker * worker);
    void updateMessageCallback (HttpRequestWorker * worker);
    void updateQueueCallback (HttpRequestWorker * worker);
    
signals:
    void addMessageSignal(QList<SWGQueueMessage*>* summary);
    void addSubscriberSignal(SWGQueue* summary);
    void clearSignal(SWGQueue* summary);
    void createQueueSignal(SWGQueue* summary);
    void deleteMessageSignal(QList<SWGQueueMessage*>* summary);
    void deleteQueueSignal(SWGQueue* summary);
    void deleteSubscriberSignal(SWGQueue* summary);
    void getAllMessagesSignal(QList<SWGQueueMessage*>* summary);
    void getAllQueuesSignal(QList<SWGQueue*>* summary);
    void getMessageSignal(QList<SWGQueueMessage*>* summary);
    void getMessageByIdSignal(SWGQueueMessage* summary);
    void getQueueSignal(SWGQueue* summary);
    void peekSignal(QList<SWGQueueMessage*>* summary);
    void peekMessageSignal(QList<SWGQueueMessage*>* summary);
    void pullSignal(QList<SWGQueueMessage*>* summary);
    void refreshMessageTimeoutSignal(QList<SWGQueueMessage*>* summary);
    void updateMessageSignal(QList<SWGQueueMessage*>* summary);
    void updateQueueSignal(SWGModifiedQueue* summary);
    
};
}
#endif