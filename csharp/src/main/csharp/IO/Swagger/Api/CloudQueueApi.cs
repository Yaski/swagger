using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface ICloudQueueApi
    {
        #region Synchronous Operations
        
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> AddMessage (string appId, string queueName, QueueBody body);
  
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> AddMessageWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// add a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// add a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Queue</returns>
        Queue AddSubscriber (string appId, string queueName, QueueBody body);
  
        /// <summary>
        /// add a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// add a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>ApiResponse of Queue</returns>
        ApiResponse<Queue> AddSubscriberWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// clear queue
        /// </summary>
        /// <remarks>
        /// clear queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Queue</returns>
        Queue Clear (string appId, string queueName, QueueBody body);
  
        /// <summary>
        /// clear queue
        /// </summary>
        /// <remarks>
        /// clear queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of Queue</returns>
        ApiResponse<Queue> ClearWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// create a new queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Queue</returns>
        Queue CreateQueue (string appId, string queueName, QueueBody body);
  
        /// <summary>
        /// create a new queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of Queue</returns>
        ApiResponse<Queue> CreateQueueWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// delete a message in this queue
        /// </summary>
        /// <remarks>
        /// delete a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> DeleteMessage (string appId, string queueName, string messageId, KeyBody body);
  
        /// <summary>
        /// delete a message in this queue
        /// </summary>
        /// <remarks>
        /// delete a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> DeleteMessageWithHttpInfo (string appId, string queueName, string messageId, KeyBody body);
        
        /// <summary>
        /// delete a queue
        /// </summary>
        /// <remarks>
        /// delete queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Queue</returns>
        Queue DeleteQueue (string appId, string queueName, QueueBody body);
  
        /// <summary>
        /// delete a queue
        /// </summary>
        /// <remarks>
        /// delete queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of Queue</returns>
        ApiResponse<Queue> DeleteQueueWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// delete a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// delete a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Queue</returns>
        Queue DeleteSubscriber (string appId, string queueName, QueueBody body);
  
        /// <summary>
        /// delete a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// delete a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>ApiResponse of Queue</returns>
        ApiResponse<Queue> DeleteSubscriberWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> GetAllMessages (string appId, KeyBody body);
  
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> GetAllMessagesWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// get all queues
        /// </summary>
        /// <remarks>
        /// get all queues
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;Queue&gt;</returns>
        List<Queue> GetAllQueues (string appId, KeyBody body);
  
        /// <summary>
        /// get all queues
        /// </summary>
        /// <remarks>
        /// get all queues
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;Queue&gt;</returns>
        ApiResponse<List<Queue>> GetAllQueuesWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// get messages in queue
        /// </summary>
        /// <remarks>
        /// get messages in queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> GetMessage (string appId, string queueName, QueuePayloadWithCount body);
  
        /// <summary>
        /// get messages in queue
        /// </summary>
        /// <remarks>
        /// get messages in queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> GetMessageWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// get a message in this queue by its id
        /// </summary>
        /// <remarks>
        /// get a message in this queue by its id
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>QueueMessage</returns>
        QueueMessage GetMessageById (string appId, string queueName, string messageId, KeyBody body);
  
        /// <summary>
        /// get a message in this queue by its id
        /// </summary>
        /// <remarks>
        /// get a message in this queue by its id
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of QueueMessage</returns>
        ApiResponse<QueueMessage> GetMessageByIdWithHttpInfo (string appId, string queueName, string messageId, KeyBody body);
        
        /// <summary>
        /// get queue
        /// </summary>
        /// <remarks>
        /// get queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Queue</returns>
        Queue GetQueue (string appId, string queueName, KeyBody body);
  
        /// <summary>
        /// get queue
        /// </summary>
        /// <remarks>
        /// get queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of Queue</returns>
        ApiResponse<Queue> GetQueueWithHttpInfo (string appId, string queueName, KeyBody body);
        
        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> Peek (string appId, string queueName, QueuePayloadWithCount body);
  
        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> PeekWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> PeekMessage (string appId, string queueName, QueuePayloadWithCount body);
  
        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> PeekMessageWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// pull messages from queue
        /// </summary>
        /// <remarks>
        /// pull messages from queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> Pull (string appId, string queueName, QueuePayloadWithCount body);
  
        /// <summary>
        /// pull messages from queue
        /// </summary>
        /// <remarks>
        /// pull messages from queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> PullWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// refresh timeout of a message in this queue
        /// </summary>
        /// <remarks>
        /// refresh timeout of a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> RefreshMessageTimeout (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body);
  
        /// <summary>
        /// refresh timeout of a message in this queue
        /// </summary>
        /// <remarks>
        /// refresh timeout of a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> RefreshMessageTimeoutWithHttpInfo (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body);
        
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>List&lt;QueueMessage&gt;</returns>
        List<QueueMessage> UpdateMessage (string myAppId, string queueName, QueueBody body);
  
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        ApiResponse<List<QueueMessage>> UpdateMessageWithHttpInfo (string myAppId, string queueName, QueueBody body);
        
        /// <summary>
        /// update queue
        /// </summary>
        /// <remarks>
        /// update queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ModifiedQueue</returns>
        ModifiedQueue UpdateQueue (string appId, string queueName, ModifiedQueueBody body);
  
        /// <summary>
        /// update queue
        /// </summary>
        /// <remarks>
        /// update queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>ApiResponse of ModifiedQueue</returns>
        ApiResponse<ModifiedQueue> UpdateQueueWithHttpInfo (string appId, string queueName, ModifiedQueueBody body);
        
        #endregion Synchronous Operations
        
        #region Asynchronous Operations
        
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> AddMessageAsync (string appId, string queueName, QueueBody body);

        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> AddMessageAsyncWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// add a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// add a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of Queue</returns>
        System.Threading.Tasks.Task<Queue> AddSubscriberAsync (string appId, string queueName, QueueBody body);

        /// <summary>
        /// add a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// add a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        System.Threading.Tasks.Task<ApiResponse<Queue>> AddSubscriberAsyncWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// clear queue
        /// </summary>
        /// <remarks>
        /// clear queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        System.Threading.Tasks.Task<Queue> ClearAsync (string appId, string queueName, QueueBody body);

        /// <summary>
        /// clear queue
        /// </summary>
        /// <remarks>
        /// clear queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        System.Threading.Tasks.Task<ApiResponse<Queue>> ClearAsyncWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// create a new queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        System.Threading.Tasks.Task<Queue> CreateQueueAsync (string appId, string queueName, QueueBody body);

        /// <summary>
        /// create a new queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        System.Threading.Tasks.Task<ApiResponse<Queue>> CreateQueueAsyncWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// delete a message in this queue
        /// </summary>
        /// <remarks>
        /// delete a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> DeleteMessageAsync (string appId, string queueName, string messageId, KeyBody body);

        /// <summary>
        /// delete a message in this queue
        /// </summary>
        /// <remarks>
        /// delete a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> DeleteMessageAsyncWithHttpInfo (string appId, string queueName, string messageId, KeyBody body);
        
        /// <summary>
        /// delete a queue
        /// </summary>
        /// <remarks>
        /// delete queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        System.Threading.Tasks.Task<Queue> DeleteQueueAsync (string appId, string queueName, QueueBody body);

        /// <summary>
        /// delete a queue
        /// </summary>
        /// <remarks>
        /// delete queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        System.Threading.Tasks.Task<ApiResponse<Queue>> DeleteQueueAsyncWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// delete a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// delete a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of Queue</returns>
        System.Threading.Tasks.Task<Queue> DeleteSubscriberAsync (string appId, string queueName, QueueBody body);

        /// <summary>
        /// delete a subscriber to this queue
        /// </summary>
        /// <remarks>
        /// delete a subscriber to this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        System.Threading.Tasks.Task<ApiResponse<Queue>> DeleteSubscriberAsyncWithHttpInfo (string appId, string queueName, QueueBody body);
        
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> GetAllMessagesAsync (string appId, KeyBody body);

        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> GetAllMessagesAsyncWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// get all queues
        /// </summary>
        /// <remarks>
        /// get all queues
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;Queue&gt;</returns>
        System.Threading.Tasks.Task<List<Queue>> GetAllQueuesAsync (string appId, KeyBody body);

        /// <summary>
        /// get all queues
        /// </summary>
        /// <remarks>
        /// get all queues
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;Queue&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<Queue>>> GetAllQueuesAsyncWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// get messages in queue
        /// </summary>
        /// <remarks>
        /// get messages in queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> GetMessageAsync (string appId, string queueName, QueuePayloadWithCount body);

        /// <summary>
        /// get messages in queue
        /// </summary>
        /// <remarks>
        /// get messages in queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> GetMessageAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// get a message in this queue by its id
        /// </summary>
        /// <remarks>
        /// get a message in this queue by its id
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of QueueMessage</returns>
        System.Threading.Tasks.Task<QueueMessage> GetMessageByIdAsync (string appId, string queueName, string messageId, KeyBody body);

        /// <summary>
        /// get a message in this queue by its id
        /// </summary>
        /// <remarks>
        /// get a message in this queue by its id
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (QueueMessage)</returns>
        System.Threading.Tasks.Task<ApiResponse<QueueMessage>> GetMessageByIdAsyncWithHttpInfo (string appId, string queueName, string messageId, KeyBody body);
        
        /// <summary>
        /// get queue
        /// </summary>
        /// <remarks>
        /// get queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        System.Threading.Tasks.Task<Queue> GetQueueAsync (string appId, string queueName, KeyBody body);

        /// <summary>
        /// get queue
        /// </summary>
        /// <remarks>
        /// get queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        System.Threading.Tasks.Task<ApiResponse<Queue>> GetQueueAsyncWithHttpInfo (string appId, string queueName, KeyBody body);
        
        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> PeekAsync (string appId, string queueName, QueuePayloadWithCount body);

        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> PeekAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> PeekMessageAsync (string appId, string queueName, QueuePayloadWithCount body);

        /// <summary>
        /// peek messages in queue without removing them
        /// </summary>
        /// <remarks>
        /// peek messages in queue without removing them
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> PeekMessageAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// pull messages from queue
        /// </summary>
        /// <remarks>
        /// pull messages from queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> PullAsync (string appId, string queueName, QueuePayloadWithCount body);

        /// <summary>
        /// pull messages from queue
        /// </summary>
        /// <remarks>
        /// pull messages from queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> PullAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body);
        
        /// <summary>
        /// refresh timeout of a message in this queue
        /// </summary>
        /// <remarks>
        /// refresh timeout of a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> RefreshMessageTimeoutAsync (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body);

        /// <summary>
        /// refresh timeout of a message in this queue
        /// </summary>
        /// <remarks>
        /// refresh timeout of a message in this queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> RefreshMessageTimeoutAsyncWithHttpInfo (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body);
        
        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        System.Threading.Tasks.Task<List<QueueMessage>> UpdateMessageAsync (string myAppId, string queueName, QueueBody body);

        /// <summary>
        /// push message to queue
        /// </summary>
        /// <remarks>
        /// add message message to queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> UpdateMessageAsyncWithHttpInfo (string myAppId, string queueName, QueueBody body);
        
        /// <summary>
        /// update queue
        /// </summary>
        /// <remarks>
        /// update queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ModifiedQueue</returns>
        System.Threading.Tasks.Task<ModifiedQueue> UpdateQueueAsync (string appId, string queueName, ModifiedQueueBody body);

        /// <summary>
        /// update queue
        /// </summary>
        /// <remarks>
        /// update queue
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (ModifiedQueue)</returns>
        System.Threading.Tasks.Task<ApiResponse<ModifiedQueue>> UpdateQueueAsyncWithHttpInfo (string appId, string queueName, ModifiedQueueBody body);
        
        #endregion Asynchronous Operations
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class CloudQueueApi : ICloudQueueApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudQueueApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CloudQueueApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudQueueApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CloudQueueApi(Configuration configuration = null)
        {
            if (configuration == null) // use the default one in Configuration
                this.Configuration = Configuration.Default; 
            else
                this.Configuration = configuration;

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }

        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.Configuration.ApiClient.RestClient.BaseUrl.ToString();
        }

        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        [Obsolete("SetBasePath is deprecated, please do 'Configuraiton.ApiClient = new ApiClient(\"http://new-path\")' instead.")]
        public void SetBasePath(String basePath)
        {
            // do nothing
        }
    
        /// <summary>
        /// Gets or sets the configuration object
        /// </summary>
        /// <value>An instance of the Configuration</value>
        public Configuration Configuration {get; set;}

        /// <summary>
        /// Gets the default header.
        /// </summary>
        /// <returns>Dictionary of HTTP header</returns>
        [Obsolete("DefaultHeader is deprecated, please use Configuration.DefaultHeader instead.")]
        public Dictionary<String, String> DefaultHeader()
        {
            return this.Configuration.DefaultHeader;
        }

        /// <summary>
        /// Add default header.
        /// </summary>
        /// <param name="key">Header field name.</param>
        /// <param name="value">Header field value.</param>
        /// <returns></returns>
        [Obsolete("AddDefaultHeader is deprecated, please use Configuration.AddDefaultHeader instead.")]
        public void AddDefaultHeader(string key, string value)
        {
            this.Configuration.AddDefaultHeader(key, value);
        }
   
        
        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> AddMessage (string appId, string queueName, QueueBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = AddMessageWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > AddMessageWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->AddMessage");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->AddMessage");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->AddMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/message";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling AddMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling AddMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> AddMessageAsync (string appId, string queueName, QueueBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await AddMessageAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> AddMessageAsyncWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling AddMessage");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling AddMessage");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/message";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling AddMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling AddMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// add a subscriber to this queue add a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">payload</param> 
        /// <returns>Queue</returns>
        public Queue AddSubscriber (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = AddSubscriberWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// add a subscriber to this queue add a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">payload</param> 
        /// <returns>ApiResponse of Queue</returns>
        public ApiResponse< Queue > AddSubscriberWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->AddSubscriber");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->AddSubscriber");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->AddSubscriber");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/subscriber";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling AddSubscriber: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling AddSubscriber: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }

        
        /// <summary>
        /// add a subscriber to this queue add a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of Queue</returns>
        public async System.Threading.Tasks.Task<Queue> AddSubscriberAsync (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = await AddSubscriberAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// add a subscriber to this queue add a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Queue>> AddSubscriberAsyncWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling AddSubscriber");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling AddSubscriber");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddSubscriber");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/subscriber";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling AddSubscriber: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling AddSubscriber: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }
        
        /// <summary>
        /// clear queue clear queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>Queue</returns>
        public Queue Clear (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = ClearWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// clear queue clear queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of Queue</returns>
        public ApiResponse< Queue > ClearWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->Clear");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->Clear");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->Clear");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/clear";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Clear: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Clear: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }

        
        /// <summary>
        /// clear queue clear queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        public async System.Threading.Tasks.Task<Queue> ClearAsync (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = await ClearAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// clear queue clear queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Queue>> ClearAsyncWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Clear");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling Clear");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Clear");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/clear";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Clear: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Clear: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }
        
        /// <summary>
        /// create a new queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>Queue</returns>
        public Queue CreateQueue (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = CreateQueueWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// create a new queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of Queue</returns>
        public ApiResponse< Queue > CreateQueueWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->CreateQueue");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->CreateQueue");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->CreateQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/create";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling CreateQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling CreateQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }

        
        /// <summary>
        /// create a new queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        public async System.Threading.Tasks.Task<Queue> CreateQueueAsync (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = await CreateQueueAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// create a new queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Queue>> CreateQueueAsyncWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling CreateQueue");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling CreateQueue");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling CreateQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/create";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling CreateQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling CreateQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }
        
        /// <summary>
        /// delete a message in this queue delete a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="messageId">message id</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> DeleteMessage (string appId, string queueName, string messageId, KeyBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = DeleteMessageWithHttpInfo(appId, queueName, messageId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// delete a message in this queue delete a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="messageId">message id</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > DeleteMessageWithHttpInfo (string appId, string queueName, string messageId, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->DeleteMessage");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->DeleteMessage");
            
            // verify the required parameter 'messageId' is set
            if (messageId == null)
                throw new ApiException(400, "Missing required parameter 'messageId' when calling CloudQueueApi->DeleteMessage");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->DeleteMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            if (messageId != null) localVarPathParams.Add("message_id", Configuration.ApiClient.ParameterToString(messageId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// delete a message in this queue delete a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> DeleteMessageAsync (string appId, string queueName, string messageId, KeyBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await DeleteMessageAsyncWithHttpInfo(appId, queueName, messageId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// delete a message in this queue delete a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> DeleteMessageAsyncWithHttpInfo (string appId, string queueName, string messageId, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteMessage");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling DeleteMessage");
            // verify the required parameter 'messageId' is set
            if (messageId == null) throw new ApiException(400, "Missing required parameter 'messageId' when calling DeleteMessage");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            if (messageId != null) localVarPathParams.Add("message_id", Configuration.ApiClient.ParameterToString(messageId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// delete a queue delete queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>Queue</returns>
        public Queue DeleteQueue (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = DeleteQueueWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// delete a queue delete queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of Queue</returns>
        public ApiResponse< Queue > DeleteQueueWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->DeleteQueue");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->DeleteQueue");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->DeleteQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }

        
        /// <summary>
        /// delete a queue delete queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        public async System.Threading.Tasks.Task<Queue> DeleteQueueAsync (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = await DeleteQueueAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// delete a queue delete queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Queue>> DeleteQueueAsyncWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteQueue");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling DeleteQueue");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }
        
        /// <summary>
        /// delete a subscriber to this queue delete a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">payload</param> 
        /// <returns>Queue</returns>
        public Queue DeleteSubscriber (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = DeleteSubscriberWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// delete a subscriber to this queue delete a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">payload</param> 
        /// <returns>ApiResponse of Queue</returns>
        public ApiResponse< Queue > DeleteSubscriberWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->DeleteSubscriber");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->DeleteSubscriber");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->DeleteSubscriber");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/subscriber";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteSubscriber: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteSubscriber: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }

        
        /// <summary>
        /// delete a subscriber to this queue delete a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of Queue</returns>
        public async System.Threading.Tasks.Task<Queue> DeleteSubscriberAsync (string appId, string queueName, QueueBody body)
        {
             ApiResponse<Queue> localVarResponse = await DeleteSubscriberAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// delete a subscriber to this queue delete a subscriber to this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">payload</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Queue>> DeleteSubscriberAsyncWithHttpInfo (string appId, string queueName, QueueBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteSubscriber");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling DeleteSubscriber");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteSubscriber");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/subscriber";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteSubscriber: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteSubscriber: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }
        
        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> GetAllMessages (string appId, KeyBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = GetAllMessagesWithHttpInfo(appId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > GetAllMessagesWithHttpInfo (string appId, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->GetAllMessages");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->GetAllMessages");
            
    
            var localVarPath = "queue/{app_id}/messages";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetAllMessages: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllMessages: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> GetAllMessagesAsync (string appId, KeyBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await GetAllMessagesAsyncWithHttpInfo(appId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> GetAllMessagesAsyncWithHttpInfo (string appId, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetAllMessages");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetAllMessages");
            
    
            var localVarPath = "queue/{app_id}/messages";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetAllMessages: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllMessages: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// get all queues get all queues
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;Queue&gt;</returns>
        public List<Queue> GetAllQueues (string appId, KeyBody body)
        {
             ApiResponse<List<Queue>> localVarResponse = GetAllQueuesWithHttpInfo(appId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get all queues get all queues
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;Queue&gt;</returns>
        public ApiResponse< List<Queue> > GetAllQueuesWithHttpInfo (string appId, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->GetAllQueues");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->GetAllQueues");
            
    
            var localVarPath = "queue/{app_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json", "text/plain;charset=utf-8"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetAllQueues: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllQueues: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<Queue>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Queue>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Queue>)));
            
        }

        
        /// <summary>
        /// get all queues get all queues
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;Queue&gt;</returns>
        public async System.Threading.Tasks.Task<List<Queue>> GetAllQueuesAsync (string appId, KeyBody body)
        {
             ApiResponse<List<Queue>> localVarResponse = await GetAllQueuesAsyncWithHttpInfo(appId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get all queues get all queues
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;Queue&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<Queue>>> GetAllQueuesAsyncWithHttpInfo (string appId, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetAllQueues");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetAllQueues");
            
    
            var localVarPath = "queue/{app_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json", "text/plain;charset=utf-8"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetAllQueues: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllQueues: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<Queue>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Queue>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Queue>)));
            
        }
        
        /// <summary>
        /// get messages in queue get messages in queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> GetMessage (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = GetMessageWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get messages in queue get messages in queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > GetMessageWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->GetMessage");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->GetMessage");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->GetMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/getMessage";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// get messages in queue get messages in queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> GetMessageAsync (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await GetMessageAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get messages in queue get messages in queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> GetMessageAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetMessage");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling GetMessage");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/getMessage";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// get a message in this queue by its id get a message in this queue by its id
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="messageId">message id</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>QueueMessage</returns>
        public QueueMessage GetMessageById (string appId, string queueName, string messageId, KeyBody body)
        {
             ApiResponse<QueueMessage> localVarResponse = GetMessageByIdWithHttpInfo(appId, queueName, messageId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get a message in this queue by its id get a message in this queue by its id
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="messageId">message id</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of QueueMessage</returns>
        public ApiResponse< QueueMessage > GetMessageByIdWithHttpInfo (string appId, string queueName, string messageId, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->GetMessageById");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->GetMessageById");
            
            // verify the required parameter 'messageId' is set
            if (messageId == null)
                throw new ApiException(400, "Missing required parameter 'messageId' when calling CloudQueueApi->GetMessageById");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->GetMessageById");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            if (messageId != null) localVarPathParams.Add("message_id", Configuration.ApiClient.ParameterToString(messageId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetMessageById: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetMessageById: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<QueueMessage>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (QueueMessage) Configuration.ApiClient.Deserialize(localVarResponse, typeof(QueueMessage)));
            
        }

        
        /// <summary>
        /// get a message in this queue by its id get a message in this queue by its id
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of QueueMessage</returns>
        public async System.Threading.Tasks.Task<QueueMessage> GetMessageByIdAsync (string appId, string queueName, string messageId, KeyBody body)
        {
             ApiResponse<QueueMessage> localVarResponse = await GetMessageByIdAsyncWithHttpInfo(appId, queueName, messageId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get a message in this queue by its id get a message in this queue by its id
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (QueueMessage)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<QueueMessage>> GetMessageByIdAsyncWithHttpInfo (string appId, string queueName, string messageId, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetMessageById");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling GetMessageById");
            // verify the required parameter 'messageId' is set
            if (messageId == null) throw new ApiException(400, "Missing required parameter 'messageId' when calling GetMessageById");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetMessageById");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/message/{message_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            if (messageId != null) localVarPathParams.Add("message_id", Configuration.ApiClient.ParameterToString(messageId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetMessageById: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetMessageById: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<QueueMessage>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (QueueMessage) Configuration.ApiClient.Deserialize(localVarResponse, typeof(QueueMessage)));
            
        }
        
        /// <summary>
        /// get queue get queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>Queue</returns>
        public Queue GetQueue (string appId, string queueName, KeyBody body)
        {
             ApiResponse<Queue> localVarResponse = GetQueueWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get queue get queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of Queue</returns>
        public ApiResponse< Queue > GetQueueWithHttpInfo (string appId, string queueName, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->GetQueue");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->GetQueue");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->GetQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }

        
        /// <summary>
        /// get queue get queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of Queue</returns>
        public async System.Threading.Tasks.Task<Queue> GetQueueAsync (string appId, string queueName, KeyBody body)
        {
             ApiResponse<Queue> localVarResponse = await GetQueueAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get queue get queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (Queue)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Queue>> GetQueueAsyncWithHttpInfo (string appId, string queueName, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetQueue");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling GetQueue");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling GetQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Queue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Queue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Queue)));
            
        }
        
        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> Peek (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = PeekWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > PeekWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->Peek");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->Peek");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->Peek");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/peek";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Peek: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Peek: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> PeekAsync (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await PeekAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> PeekAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Peek");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling Peek");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Peek");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/peek";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Peek: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Peek: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> PeekMessage (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = PeekMessageWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > PeekMessageWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->PeekMessage");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->PeekMessage");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->PeekMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/peekMessage";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling PeekMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling PeekMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> PeekMessageAsync (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await PeekMessageAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// peek messages in queue without removing them peek messages in queue without removing them
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> PeekMessageAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling PeekMessage");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling PeekMessage");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PeekMessage");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/peekMessage";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling PeekMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling PeekMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// pull messages from queue pull messages from queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> Pull (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = PullWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// pull messages from queue pull messages from queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > PullWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->Pull");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->Pull");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->Pull");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/pull";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Pull: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Pull: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// pull messages from queue pull messages from queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> PullAsync (string appId, string queueName, QueuePayloadWithCount body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await PullAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// pull messages from queue pull messages from queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> PullAsyncWithHttpInfo (string appId, string queueName, QueuePayloadWithCount body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Pull");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling Pull");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Pull");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/pull";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Pull: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Pull: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// refresh timeout of a message in this queue refresh timeout of a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="messageId">message id</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> RefreshMessageTimeout (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = RefreshMessageTimeoutWithHttpInfo(appId, queueName, messageId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// refresh timeout of a message in this queue refresh timeout of a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="messageId">message id</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > RefreshMessageTimeoutWithHttpInfo (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->RefreshMessageTimeout");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->RefreshMessageTimeout");
            
            // verify the required parameter 'messageId' is set
            if (messageId == null)
                throw new ApiException(400, "Missing required parameter 'messageId' when calling CloudQueueApi->RefreshMessageTimeout");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->RefreshMessageTimeout");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            if (messageId != null) localVarPathParams.Add("message_id", Configuration.ApiClient.ParameterToString(messageId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling RefreshMessageTimeout: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling RefreshMessageTimeout: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// refresh timeout of a message in this queue refresh timeout of a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> RefreshMessageTimeoutAsync (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await RefreshMessageTimeoutAsyncWithHttpInfo(appId, queueName, messageId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// refresh timeout of a message in this queue refresh timeout of a message in this queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="messageId">message id</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> RefreshMessageTimeoutAsyncWithHttpInfo (string appId, string queueName, string messageId, RefreshMessageTimeoutBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling RefreshMessageTimeout");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling RefreshMessageTimeout");
            // verify the required parameter 'messageId' is set
            if (messageId == null) throw new ApiException(400, "Missing required parameter 'messageId' when calling RefreshMessageTimeout");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling RefreshMessageTimeout");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            if (messageId != null) localVarPathParams.Add("message_id", Configuration.ApiClient.ParameterToString(messageId)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling RefreshMessageTimeout: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling RefreshMessageTimeout: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>List&lt;QueueMessage&gt;</returns>
        public List<QueueMessage> UpdateMessage (string myAppId, string queueName, QueueBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = UpdateMessageWithHttpInfo(myAppId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of List&lt;QueueMessage&gt;</returns>
        public ApiResponse< List<QueueMessage> > UpdateMessageWithHttpInfo (string myAppId, string queueName, QueueBody body)
        {
            
            // verify the required parameter 'myAppId' is set
            if (myAppId == null)
                throw new ApiException(400, "Missing required parameter 'myAppId' when calling CloudQueueApi->UpdateMessage");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->UpdateMessage");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->UpdateMessage");
            
    
            var localVarPath = "queue/{my_app_id}/{queue_name}/message";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (myAppId != null) localVarPathParams.Add("my_app_id", Configuration.ApiClient.ParameterToString(myAppId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling UpdateMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling UpdateMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }

        
        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of List&lt;QueueMessage&gt;</returns>
        public async System.Threading.Tasks.Task<List<QueueMessage>> UpdateMessageAsync (string myAppId, string queueName, QueueBody body)
        {
             ApiResponse<List<QueueMessage>> localVarResponse = await UpdateMessageAsyncWithHttpInfo(myAppId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// push message to queue add message message to queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (List&lt;QueueMessage&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<QueueMessage>>> UpdateMessageAsyncWithHttpInfo (string myAppId, string queueName, QueueBody body)
        {
            // verify the required parameter 'myAppId' is set
            if (myAppId == null) throw new ApiException(400, "Missing required parameter 'myAppId' when calling UpdateMessage");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling UpdateMessage");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateMessage");
            
    
            var localVarPath = "queue/{my_app_id}/{queue_name}/message";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (myAppId != null) localVarPathParams.Add("my_app_id", Configuration.ApiClient.ParameterToString(myAppId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling UpdateMessage: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling UpdateMessage: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<QueueMessage>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<QueueMessage>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<QueueMessage>)));
            
        }
        
        /// <summary>
        /// update queue update queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ModifiedQueue</returns>
        public ModifiedQueue UpdateQueue (string appId, string queueName, ModifiedQueueBody body)
        {
             ApiResponse<ModifiedQueue> localVarResponse = UpdateQueueWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// update queue update queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="queueName">Name of queue</param> 
        /// <param name="body">client key of app</param> 
        /// <returns>ApiResponse of ModifiedQueue</returns>
        public ApiResponse< ModifiedQueue > UpdateQueueWithHttpInfo (string appId, string queueName, ModifiedQueueBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueueApi->UpdateQueue");
            
            // verify the required parameter 'queueName' is set
            if (queueName == null)
                throw new ApiException(400, "Missing required parameter 'queueName' when calling CloudQueueApi->UpdateQueue");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueueApi->UpdateQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling UpdateQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling UpdateQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<ModifiedQueue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (ModifiedQueue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(ModifiedQueue)));
            
        }

        
        /// <summary>
        /// update queue update queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ModifiedQueue</returns>
        public async System.Threading.Tasks.Task<ModifiedQueue> UpdateQueueAsync (string appId, string queueName, ModifiedQueueBody body)
        {
             ApiResponse<ModifiedQueue> localVarResponse = await UpdateQueueAsyncWithHttpInfo(appId, queueName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// update queue update queue
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="queueName">Name of queue</param>
        /// <param name="body">client key of app</param>
        /// <returns>Task of ApiResponse (ModifiedQueue)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<ModifiedQueue>> UpdateQueueAsyncWithHttpInfo (string appId, string queueName, ModifiedQueueBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling UpdateQueue");
            // verify the required parameter 'queueName' is set
            if (queueName == null) throw new ApiException(400, "Missing required parameter 'queueName' when calling UpdateQueue");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateQueue");
            
    
            var localVarPath = "queue/{app_id}/{queue_name}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (queueName != null) localVarPathParams.Add("queue_name", Configuration.ApiClient.ParameterToString(queueName)); // path parameter
            
            
            
            
            if (body.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling UpdateQueue: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling UpdateQueue: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<ModifiedQueue>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (ModifiedQueue) Configuration.ApiClient.Deserialize(localVarResponse, typeof(ModifiedQueue)));
            
        }
        
    }
    
}
