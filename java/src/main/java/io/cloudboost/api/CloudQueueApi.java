package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.QueueMessage;
import io.cloudboost.model.QueueBody;
import io.cloudboost.model.Queue;
import io.cloudboost.model.KeyBody;
import io.cloudboost.model.QueuePayloadWithCount;
import io.cloudboost.model.RefreshMessageTimeoutBody;
import io.cloudboost.model.ModifiedQueue;
import io.cloudboost.model.ModifiedQueueBody;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudQueueApi {
  private ApiClient apiClient;

  public CloudQueueApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudQueueApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * push message to queue
   * add message message to queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> addMessage(String appId, String queueName, QueueBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/message".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * add a subscriber to this queue
   * add a subscriber to this queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body payload (required)
   * @return Queue
   * @throws ApiException if fails to make API call
   */
  public Queue addSubscriber(String appId, String queueName, QueueBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/subscriber".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<Queue> localVarReturnType = new GenericType<Queue>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * clear queue
   * clear queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return Queue
   * @throws ApiException if fails to make API call
   */
  public Queue clear(String appId, String queueName, QueueBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/clear".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<Queue> localVarReturnType = new GenericType<Queue>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * create a new queue
   * add message message to queue
   * @param appId Id of CloudApp (required)
   * @param queueName name of queue (required)
   * @param body client key of app (required)
   * @return Queue
   * @throws ApiException if fails to make API call
   */
  public Queue createQueue(String appId, String queueName, QueueBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/create".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<Queue> localVarReturnType = new GenericType<Queue>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * delete a message in this queue
   * delete a message in this queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param messageId message id (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> deleteMessage(String appId, String queueName, String messageId, KeyBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()))
      .replaceAll("\\{" + "message_id" + "\\}", apiClient.escapeString(messageId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * delete a queue
   * delete queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return Queue
   * @throws ApiException if fails to make API call
   */
  public Queue deleteQueue(String appId, String queueName, QueueBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<Queue> localVarReturnType = new GenericType<Queue>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * delete a subscriber to this queue
   * delete a subscriber to this queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body payload (required)
   * @return Queue
   * @throws ApiException if fails to make API call
   */
  public Queue deleteSubscriber(String appId, String queueName, QueueBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/subscriber".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<Queue> localVarReturnType = new GenericType<Queue>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * push message to queue
   * add message message to queue
   * @param appId Id of CloudApp (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> getAllMessages(String appId, KeyBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/messages".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * get all queues
   * get all queues
   * @param appId Id of CloudApp (required)
   * @param body client key of app (required)
   * @return List<Queue>
   * @throws ApiException if fails to make API call
   */
  public List<Queue> getAllQueues(String appId, KeyBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json", "text/plain;charset=utf-8"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<Queue>> localVarReturnType = new GenericType<List<Queue>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * get messages in queue
   * get messages in queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> getMessage(String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/getMessage".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * get a message in this queue by its id
   * get a message in this queue by its id
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param messageId message id (required)
   * @param body client key of app (required)
   * @return QueueMessage
   * @throws ApiException if fails to make API call
   */
  public QueueMessage getMessageById(String appId, String queueName, String messageId, KeyBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()))
      .replaceAll("\\{" + "message_id" + "\\}", apiClient.escapeString(messageId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<QueueMessage> localVarReturnType = new GenericType<QueueMessage>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * get queue
   * get queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return Queue
   * @throws ApiException if fails to make API call
   */
  public Queue getQueue(String appId, String queueName, KeyBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<Queue> localVarReturnType = new GenericType<Queue>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * peek messages in queue without removing them
   * peek messages in queue without removing them
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> peek(String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/peek".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * peek messages in queue without removing them
   * peek messages in queue without removing them
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> peekMessage(String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/peekMessage".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * pull messages from queue
   * pull messages from queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> pull(String appId, String queueName, QueuePayloadWithCount body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/pull".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * refresh timeout of a message in this queue
   * refresh timeout of a message in this queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param messageId message id (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> refreshMessageTimeout(String appId, String queueName, String messageId, RefreshMessageTimeoutBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()))
      .replaceAll("\\{" + "message_id" + "\\}", apiClient.escapeString(messageId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * push message to queue
   * add message message to queue
   * @param myAppId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return List<QueueMessage>
   * @throws ApiException if fails to make API call
   */
  public List<QueueMessage> updateMessage(String myAppId, String queueName, QueueBody body) throws ApiException {
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
    String localVarPath = "queue/{my_app_id}/{queue_name}/message".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "my_app_id" + "\\}", apiClient.escapeString(myAppId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<List<QueueMessage>> localVarReturnType = new GenericType<List<QueueMessage>>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * update queue
   * update queue
   * @param appId Id of CloudApp (required)
   * @param queueName Name of queue (required)
   * @param body client key of app (required)
   * @return ModifiedQueue
   * @throws ApiException if fails to make API call
   */
  public ModifiedQueue updateQueue(String appId, String queueName, ModifiedQueueBody body) throws ApiException {
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
    String localVarPath = "queue/{app_id}/{queue_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "queue_name" + "\\}", apiClient.escapeString(queueName.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<ModifiedQueue> localVarReturnType = new GenericType<ModifiedQueue>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
}
