package io.swagger.client.api

import io.swagger.client.model.QueueMessage
import io.swagger.client.model.QueueBody
import io.swagger.client.model.Queue
import io.swagger.client.model.KeyBody
import io.swagger.client.model.QueuePayloadWithCount
import io.swagger.client.model.RefreshMessageTimeoutBody
import io.swagger.client.model.ModifiedQueue
import io.swagger.client.model.ModifiedQueueBody
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class CloudQueueApi(val defBasePath: String = "http://api.cloudboost.io/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * push message to queue
   * add message message to queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def addMessage (appId: String, queueName: String, body: QueueBody) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/message".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * add a subscriber to this queue
   * add a subscriber to this queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body payload 
   * @return Queue
   */
  def addSubscriber (appId: String, queueName: String, body: QueueBody) : Option[Queue] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/subscriber".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Queue]).asInstanceOf[Queue])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * clear queue
   * clear queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return Queue
   */
  def clear (appId: String, queueName: String, body: QueueBody) : Option[Queue] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/clear".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Queue]).asInstanceOf[Queue])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * create a new queue
   * add message message to queue
   * @param appId Id of CloudApp 
   * @param queueName name of queue 
   * @param body client key of app 
   * @return Queue
   */
  def createQueue (appId: String, queueName: String, body: QueueBody) : Option[Queue] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/create".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Queue]).asInstanceOf[Queue])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * delete a message in this queue
   * delete a message in this queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param messageId message id 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def deleteMessage (appId: String, queueName: String, messageId: String, body: KeyBody) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/message/{message_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    .replaceAll("\\{" + "message_id" + "\\}",apiInvoker.escape(messageId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * delete a queue
   * delete queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return Queue
   */
  def deleteQueue (appId: String, queueName: String, body: QueueBody) : Option[Queue] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Queue]).asInstanceOf[Queue])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * delete a subscriber to this queue
   * delete a subscriber to this queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body payload 
   * @return Queue
   */
  def deleteSubscriber (appId: String, queueName: String, body: QueueBody) : Option[Queue] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/subscriber".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Queue]).asInstanceOf[Queue])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * push message to queue
   * add message message to queue
   * @param appId Id of CloudApp 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def getAllMessages (appId: String, body: KeyBody) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/messages".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * get all queues
   * get all queues
   * @param appId Id of CloudApp 
   * @param body client key of app 
   * @return List[Queue]
   */
  def getAllQueues (appId: String, body: KeyBody) : Option[List[Queue]] = {
    // create path and map variables
    val path = "queue/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[Queue]).asInstanceOf[List[Queue]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * get messages in queue
   * get messages in queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def getMessage (appId: String, queueName: String, body: QueuePayloadWithCount) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/getMessage".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * get a message in this queue by its id
   * get a message in this queue by its id
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param messageId message id 
   * @param body client key of app 
   * @return QueueMessage
   */
  def getMessageById (appId: String, queueName: String, messageId: String, body: KeyBody) : Option[QueueMessage] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/message/{message_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    .replaceAll("\\{" + "message_id" + "\\}",apiInvoker.escape(messageId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[QueueMessage]).asInstanceOf[QueueMessage])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * get queue
   * get queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return Queue
   */
  def getQueue (appId: String, queueName: String, body: KeyBody) : Option[Queue] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Queue]).asInstanceOf[Queue])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * peek messages in queue without removing them
   * peek messages in queue without removing them
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def peek (appId: String, queueName: String, body: QueuePayloadWithCount) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/peek".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * peek messages in queue without removing them
   * peek messages in queue without removing them
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def peekMessage (appId: String, queueName: String, body: QueuePayloadWithCount) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/peekMessage".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * pull messages from queue
   * pull messages from queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def pull (appId: String, queueName: String, body: QueuePayloadWithCount) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/pull".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * refresh timeout of a message in this queue
   * refresh timeout of a message in this queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param messageId message id 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def refreshMessageTimeout (appId: String, queueName: String, messageId: String, body: RefreshMessageTimeoutBody) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    .replaceAll("\\{" + "message_id" + "\\}",apiInvoker.escape(messageId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * push message to queue
   * add message message to queue
   * @param myAppId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return List[QueueMessage]
   */
  def updateMessage (myAppId: String, queueName: String, body: QueueBody) : Option[List[QueueMessage]] = {
    // create path and map variables
    val path = "queue/{my_app_id}/{queue_name}/message".replaceAll("\\{format\\}","json").replaceAll("\\{" + "my_app_id" + "\\}",apiInvoker.escape(myAppId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[QueueMessage]).asInstanceOf[List[QueueMessage]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * update queue
   * update queue
   * @param appId Id of CloudApp 
   * @param queueName Name of queue 
   * @param body client key of app 
   * @return ModifiedQueue
   */
  def updateQueue (appId: String, queueName: String, body: ModifiedQueueBody) : Option[ModifiedQueue] = {
    // create path and map variables
    val path = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "queue_name" + "\\}",apiInvoker.escape(queueName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[ModifiedQueue]).asInstanceOf[ModifiedQueue])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
