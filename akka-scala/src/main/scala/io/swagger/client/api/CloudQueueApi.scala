package io.swagger.client.api

import io.swagger.client.model.QueueMessage
import io.swagger.client.model.QueueBody
import io.swagger.client.model.Queue
import io.swagger.client.model.KeyBody
import io.swagger.client.model.QueuePayloadWithCount
import io.swagger.client.model.RefreshMessageTimeoutBody
import io.swagger.client.model.ModifiedQueue
import io.swagger.client.model.ModifiedQueueBody
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudQueueApi {

  /**
   * add message message to queue
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (push done)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def addMessage(appId: String, queueName: String, body: QueueBody): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.PUT, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/message", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * add a subscriber to this queue
   * 
   * Expected answers:
   *   code 200 : Queue (successfully added subscriber)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body payload
   */
  def addSubscriber(appId: String, queueName: String, body: QueueBody): ApiRequest[Queue] =
    ApiRequest[Queue](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/subscriber", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Queue](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * clear queue
   * 
   * Expected answers:
   *   code 200 : Queue (success)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def clear(appId: String, queueName: String, body: QueueBody): ApiRequest[Queue] =
    ApiRequest[Queue](ApiMethods.DELETE, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/clear", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Queue](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * add message message to queue
   * 
   * Expected answers:
   *   code 200 : Queue (push done)
   * 
   * @param appId Id of CloudApp
   * @param queueName name of queue
   * @param body client key of app
   */
  def createQueue(appId: String, queueName: String, body: QueueBody): ApiRequest[Queue] =
    ApiRequest[Queue](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/create", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Queue](200)
      
  /**
   * delete a message in this queue
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (successfully deleted message)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param messageId message id
   * @param body client key of app
   */
  def deleteMessage(appId: String, queueName: String, messageId: String, body: KeyBody): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.DELETE, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/message/{message_id}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withPathParam("message_id", messageId)
      .withSuccessResponse[Seq[QueueMessage]](200)
      
  /**
   * delete queue
   * 
   * Expected answers:
   *   code 200 : Queue (success)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def deleteQueue(appId: String, queueName: String, body: QueueBody): ApiRequest[Queue] =
    ApiRequest[Queue](ApiMethods.DELETE, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Queue](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * delete a subscriber to this queue
   * 
   * Expected answers:
   *   code 200 : Queue (successfully deleted subscriber)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body payload
   */
  def deleteSubscriber(appId: String, queueName: String, body: QueueBody): ApiRequest[Queue] =
    ApiRequest[Queue](ApiMethods.DELETE, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/subscriber", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Queue](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * add message message to queue
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (push done)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param body client key of app
   */
  def getAllMessages(appId: String, body: KeyBody): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/messages", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get all queues
   * 
   * Expected answers:
   *   code 200 : Seq[Queue] (success)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param body client key of app
   */
  def getAllQueues(appId: String, body: KeyBody): ApiRequest[Seq[Queue]] =
    ApiRequest[Seq[Queue]](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[Seq[Queue]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get messages in queue
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (peek done)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def getMessage(appId: String, queueName: String, body: QueuePayloadWithCount): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/getMessage", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get a message in this queue by its id
   * 
   * Expected answers:
   *   code 200 : QueueMessage (successfully got message)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param messageId message id
   * @param body client key of app
   */
  def getMessageById(appId: String, queueName: String, messageId: String, body: KeyBody): ApiRequest[QueueMessage] =
    ApiRequest[QueueMessage](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/message/{message_id}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withPathParam("message_id", messageId)
      .withSuccessResponse[QueueMessage](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get queue
   * 
   * Expected answers:
   *   code 200 : Queue (success)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def getQueue(appId: String, queueName: String, body: KeyBody): ApiRequest[Queue] =
    ApiRequest[Queue](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Queue](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * peek messages in queue without removing them
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (peek done)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def peek(appId: String, queueName: String, body: QueuePayloadWithCount): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/peek", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * peek messages in queue without removing them
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (peek done)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def peekMessage(appId: String, queueName: String, body: QueuePayloadWithCount): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/peekMessage", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * pull messages from queue
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (success)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def pull(appId: String, queueName: String, body: QueuePayloadWithCount): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.POST, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/pull", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * refresh timeout of a message in this queue
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (successfully refreshed timeout)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param messageId message id
   * @param body client key of app
   */
  def refreshMessageTimeout(appId: String, queueName: String, messageId: String, body: RefreshMessageTimeoutBody): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.PUT, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withPathParam("message_id", messageId)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * add message message to queue
   * 
   * Expected answers:
   *   code 200 : Seq[QueueMessage] (push done)
   *   code 0 :  (unexpected error)
   * 
   * @param myAppId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def updateMessage(myAppId: String, queueName: String, body: QueueBody): ApiRequest[Seq[QueueMessage]] =
    ApiRequest[Seq[QueueMessage]](ApiMethods.PUT, "http://api.cloudboost.io/", "queue/{my_app_id}/{queue_name}/message", "application/json")
      .withBody(body)
      .withPathParam("my_app_id", myAppId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[Seq[QueueMessage]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * update queue
   * 
   * Expected answers:
   *   code 200 : ModifiedQueue (success)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   */
  def updateQueue(appId: String, queueName: String, body: ModifiedQueueBody): ApiRequest[ModifiedQueue] =
    ApiRequest[ModifiedQueue](ApiMethods.PUT, "http://api.cloudboost.io/", "queue/{app_id}/{queue_name}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("queue_name", queueName)
      .withSuccessResponse[ModifiedQueue](200)
      .withDefaultErrorResponse[Unit]
      


}

