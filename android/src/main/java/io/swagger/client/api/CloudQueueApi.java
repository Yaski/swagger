package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.QueueMessage;
import io.swagger.client.model.QueueBody;
import io.swagger.client.model.Queue;
import io.swagger.client.model.KeyBody;
import io.swagger.client.model.QueuePayloadWithCount;
import io.swagger.client.model.RefreshMessageTimeoutBody;
import io.swagger.client.model.ModifiedQueue;
import io.swagger.client.model.ModifiedQueueBody;

import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class CloudQueueApi {
  String basePath = "http://api.cloudboost.io/";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  
  /**
   * push message to queue
   * add message message to queue
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  addMessage (String appId, String queueName, QueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling addMessage");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling addMessage");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling addMessage");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/message".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public Queue  addSubscriber (String appId, String queueName, QueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling addSubscriber");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling addSubscriber");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling addSubscriber");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/subscriber".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Queue) ApiInvoker.deserialize(localVarResponse, "", Queue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public Queue  clear (String appId, String queueName, QueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling clear");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling clear");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling clear");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/clear".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Queue) ApiInvoker.deserialize(localVarResponse, "", Queue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public Queue  createQueue (String appId, String queueName, QueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling createQueue");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling createQueue");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling createQueue");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/create".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Queue) ApiInvoker.deserialize(localVarResponse, "", Queue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * delete a message in this queue
   * delete a message in this queue
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param messageId message id
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  deleteMessage (String appId, String queueName, String messageId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteMessage");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling deleteMessage");
    }
    
    // verify the required parameter 'messageId' is set
    if (messageId == null) {
       throw new ApiException(400, "Missing the required parameter 'messageId' when calling deleteMessage");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling deleteMessage");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString())).replaceAll("\\{" + "message_id" + "\\}", apiInvoker.escapeString(messageId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public Queue  deleteQueue (String appId, String queueName, QueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteQueue");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling deleteQueue");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling deleteQueue");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Queue) ApiInvoker.deserialize(localVarResponse, "", Queue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public Queue  deleteSubscriber (String appId, String queueName, QueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteSubscriber");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling deleteSubscriber");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling deleteSubscriber");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/subscriber".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Queue) ApiInvoker.deserialize(localVarResponse, "", Queue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * push message to queue
   * add message message to queue
   * @param appId Id of CloudApp
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  getAllMessages (String appId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling getAllMessages");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling getAllMessages");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/messages".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * get all queues
   * get all queues
   * @param appId Id of CloudApp
   * @param body client key of app
   * @return List<Queue>
   */
  public List<Queue>  getAllQueues (String appId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling getAllQueues");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling getAllQueues");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<Queue>) ApiInvoker.deserialize(localVarResponse, "array", Queue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * get messages in queue
   * get messages in queue
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  getMessage (String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling getMessage");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling getMessage");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling getMessage");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/getMessage".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public QueueMessage  getMessageById (String appId, String queueName, String messageId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling getMessageById");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling getMessageById");
    }
    
    // verify the required parameter 'messageId' is set
    if (messageId == null) {
       throw new ApiException(400, "Missing the required parameter 'messageId' when calling getMessageById");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling getMessageById");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString())).replaceAll("\\{" + "message_id" + "\\}", apiInvoker.escapeString(messageId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (QueueMessage) ApiInvoker.deserialize(localVarResponse, "", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public Queue  getQueue (String appId, String queueName, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling getQueue");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling getQueue");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling getQueue");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Queue) ApiInvoker.deserialize(localVarResponse, "", Queue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * peek messages in queue without removing them
   * peek messages in queue without removing them
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  peek (String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling peek");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling peek");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling peek");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/peek".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * peek messages in queue without removing them
   * peek messages in queue without removing them
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  peekMessage (String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling peekMessage");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling peekMessage");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling peekMessage");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/peekMessage".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * pull messages from queue
   * pull messages from queue
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  pull (String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling pull");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling pull");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling pull");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/pull".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * refresh timeout of a message in this queue
   * refresh timeout of a message in this queue
   * @param appId Id of CloudApp
   * @param queueName Name of queue
   * @param messageId message id
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  refreshMessageTimeout (String appId, String queueName, String messageId, RefreshMessageTimeoutBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling refreshMessageTimeout");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling refreshMessageTimeout");
    }
    
    // verify the required parameter 'messageId' is set
    if (messageId == null) {
       throw new ApiException(400, "Missing the required parameter 'messageId' when calling refreshMessageTimeout");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling refreshMessageTimeout");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString())).replaceAll("\\{" + "message_id" + "\\}", apiInvoker.escapeString(messageId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * push message to queue
   * add message message to queue
   * @param myAppId Id of CloudApp
   * @param queueName Name of queue
   * @param body client key of app
   * @return List<QueueMessage>
   */
  public List<QueueMessage>  updateMessage (String myAppId, String queueName, QueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'myAppId' is set
    if (myAppId == null) {
       throw new ApiException(400, "Missing the required parameter 'myAppId' when calling updateMessage");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling updateMessage");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling updateMessage");
    }
    

    // create path and map variables
    String localVarPath = "queue/{my_app_id}/{queue_name}/message".replaceAll("\\{format\\}","json").replaceAll("\\{" + "my_app_id" + "\\}", apiInvoker.escapeString(myAppId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (List<QueueMessage>) ApiInvoker.deserialize(localVarResponse, "array", QueueMessage.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
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
  public ModifiedQueue  updateQueue (String appId, String queueName, ModifiedQueueBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling updateQueue");
    }
    
    // verify the required parameter 'queueName' is set
    if (queueName == null) {
       throw new ApiException(400, "Missing the required parameter 'queueName' when calling updateQueue");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling updateQueue");
    }
    

    // create path and map variables
    String localVarPath = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "queue_name" + "\\}", apiInvoker.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "application/json"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (ModifiedQueue) ApiInvoker.deserialize(localVarResponse, "", ModifiedQueue.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
