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
    public interface ICloudCacheApi
    {
        #region Synchronous Operations
        
        /// <summary>
        /// clear all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// clear all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>List&lt;CacheRequest&gt;</returns>
        List<CacheRequest> ClearCache (string appId, string cacheName, KeyBody body);
  
        /// <summary>
        /// clear all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// clear all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of List&lt;CacheRequest&gt;</returns>
        ApiResponse<List<CacheRequest>> ClearCacheWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// create a cloud cache
        /// </summary>
        /// <remarks>
        /// create a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Cache</returns>
        Cache CreateCache (string appId, string cacheName, KeyBody body);
  
        /// <summary>
        /// create a cloud cache
        /// </summary>
        /// <remarks>
        /// create a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of Cache</returns>
        ApiResponse<Cache> CreateCacheWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// delete all CloudCaches
        /// </summary>
        /// <remarks>
        /// delete all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>List&lt;CacheRequest&gt;</returns>
        List<CacheRequest> DeleteAllCache (string appId, KeyBody body);
  
        /// <summary>
        /// delete all CloudCaches
        /// </summary>
        /// <remarks>
        /// delete all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of List&lt;CacheRequest&gt;</returns>
        ApiResponse<List<CacheRequest>> DeleteAllCacheWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// delete a CloudCache
        /// </summary>
        /// <remarks>
        /// delete a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>CacheRequest</returns>
        CacheRequest DeleteCache (string appId, string cacheName, KeyBody body);
  
        /// <summary>
        /// delete a CloudCache
        /// </summary>
        /// <remarks>
        /// delete a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of CacheRequest</returns>
        ApiResponse<CacheRequest> DeleteCacheWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// delete item from a cloud cache
        /// </summary>
        /// <remarks>
        /// delete item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data to delete is cached</param>
        /// <param name="body">master key of app</param>
        /// <returns>string</returns>
        string DeleteItem (string appId, string cacheName, string dataKey, KeyBody body);
  
        /// <summary>
        /// delete item from a cloud cache
        /// </summary>
        /// <remarks>
        /// delete item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data to delete is cached</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of string</returns>
        ApiResponse<string> DeleteItemWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body);
        
        /// <summary>
        /// get all CloudCaches
        /// </summary>
        /// <remarks>
        /// get all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>List&lt;Cache&gt;</returns>
        List<Cache> GetAllCache (string appId, KeyBody body);
  
        /// <summary>
        /// get all CloudCaches
        /// </summary>
        /// <remarks>
        /// get all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of List&lt;Cache&gt;</returns>
        ApiResponse<List<Cache>> GetAllCacheWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// get all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// get all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>List&lt;CacheItem&gt;</returns>
        List<CacheItem> GetAllItems (string appId, string cacheName, KeyBody body);
  
        /// <summary>
        /// get all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// get all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of List&lt;CacheItem&gt;</returns>
        ApiResponse<List<CacheItem>> GetAllItemsWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// get info about a CloudCache
        /// </summary>
        /// <remarks>
        /// get info about a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Cache</returns>
        Cache GetCacheInfo (string appId, string cacheName, KeyBody body);
  
        /// <summary>
        /// get info about a CloudCache
        /// </summary>
        /// <remarks>
        /// get info about a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of Cache</returns>
        ApiResponse<Cache> GetCacheInfoWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// get item from a cloud cache
        /// </summary>
        /// <remarks>
        /// get item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be got in cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>string</returns>
        string GetItem (string appId, string cacheName, string dataKey, KeyBody body);
  
        /// <summary>
        /// get item from a cloud cache
        /// </summary>
        /// <remarks>
        /// get item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be got in cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of string</returns>
        ApiResponse<string> GetItemWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body);
        
        /// <summary>
        /// count items in a cloud cache
        /// </summary>
        /// <remarks>
        /// count items in a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>int?</returns>
        int? GetItemsCount (string appId, string cacheName, KeyBody body);
  
        /// <summary>
        /// count items in a cloud cache
        /// </summary>
        /// <remarks>
        /// count items in a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>ApiResponse of int?</returns>
        ApiResponse<int?> GetItemsCountWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// add item to a cloud cache
        /// </summary>
        /// <remarks>
        /// add item to a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be store in cache</param>
        /// <param name="body">cache data and master key included got from this object</param>
        /// <returns>string</returns>
        string Set (string appId, string cacheName, string dataKey, CacheRequest body);
  
        /// <summary>
        /// add item to a cloud cache
        /// </summary>
        /// <remarks>
        /// add item to a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be store in cache</param>
        /// <param name="body">cache data and master key included got from this object</param>
        /// <returns>ApiResponse of string</returns>
        ApiResponse<string> SetWithHttpInfo (string appId, string cacheName, string dataKey, CacheRequest body);
        
        #endregion Synchronous Operations
        
        #region Asynchronous Operations
        
        /// <summary>
        /// clear all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// clear all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;CacheRequest&gt;</returns>
        System.Threading.Tasks.Task<List<CacheRequest>> ClearCacheAsync (string appId, string cacheName, KeyBody body);

        /// <summary>
        /// clear all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// clear all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;CacheRequest&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<CacheRequest>>> ClearCacheAsyncWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// create a cloud cache
        /// </summary>
        /// <remarks>
        /// create a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of Cache</returns>
        System.Threading.Tasks.Task<Cache> CreateCacheAsync (string appId, string cacheName, KeyBody body);

        /// <summary>
        /// create a cloud cache
        /// </summary>
        /// <remarks>
        /// create a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (Cache)</returns>
        System.Threading.Tasks.Task<ApiResponse<Cache>> CreateCacheAsyncWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// delete all CloudCaches
        /// </summary>
        /// <remarks>
        /// delete all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;CacheRequest&gt;</returns>
        System.Threading.Tasks.Task<List<CacheRequest>> DeleteAllCacheAsync (string appId, KeyBody body);

        /// <summary>
        /// delete all CloudCaches
        /// </summary>
        /// <remarks>
        /// delete all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;CacheRequest&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<CacheRequest>>> DeleteAllCacheAsyncWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// delete a CloudCache
        /// </summary>
        /// <remarks>
        /// delete a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of CacheRequest</returns>
        System.Threading.Tasks.Task<CacheRequest> DeleteCacheAsync (string appId, string cacheName, KeyBody body);

        /// <summary>
        /// delete a CloudCache
        /// </summary>
        /// <remarks>
        /// delete a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (CacheRequest)</returns>
        System.Threading.Tasks.Task<ApiResponse<CacheRequest>> DeleteCacheAsyncWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// delete item from a cloud cache
        /// </summary>
        /// <remarks>
        /// delete item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data to delete is cached</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of string</returns>
        System.Threading.Tasks.Task<string> DeleteItemAsync (string appId, string cacheName, string dataKey, KeyBody body);

        /// <summary>
        /// delete item from a cloud cache
        /// </summary>
        /// <remarks>
        /// delete item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data to delete is cached</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (string)</returns>
        System.Threading.Tasks.Task<ApiResponse<string>> DeleteItemAsyncWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body);
        
        /// <summary>
        /// get all CloudCaches
        /// </summary>
        /// <remarks>
        /// get all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;Cache&gt;</returns>
        System.Threading.Tasks.Task<List<Cache>> GetAllCacheAsync (string appId, KeyBody body);

        /// <summary>
        /// get all CloudCaches
        /// </summary>
        /// <remarks>
        /// get all CloudCaches
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;Cache&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<Cache>>> GetAllCacheAsyncWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// get all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// get all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;CacheItem&gt;</returns>
        System.Threading.Tasks.Task<List<CacheItem>> GetAllItemsAsync (string appId, string cacheName, KeyBody body);

        /// <summary>
        /// get all items from a cloud cache
        /// </summary>
        /// <remarks>
        /// get all items from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;CacheItem&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<CacheItem>>> GetAllItemsAsyncWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// get info about a CloudCache
        /// </summary>
        /// <remarks>
        /// get info about a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of Cache</returns>
        System.Threading.Tasks.Task<Cache> GetCacheInfoAsync (string appId, string cacheName, KeyBody body);

        /// <summary>
        /// get info about a CloudCache
        /// </summary>
        /// <remarks>
        /// get info about a CloudCache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (Cache)</returns>
        System.Threading.Tasks.Task<ApiResponse<Cache>> GetCacheInfoAsyncWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// get item from a cloud cache
        /// </summary>
        /// <remarks>
        /// get item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be got in cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of string</returns>
        System.Threading.Tasks.Task<string> GetItemAsync (string appId, string cacheName, string dataKey, KeyBody body);

        /// <summary>
        /// get item from a cloud cache
        /// </summary>
        /// <remarks>
        /// get item from a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be got in cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (string)</returns>
        System.Threading.Tasks.Task<ApiResponse<string>> GetItemAsyncWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body);
        
        /// <summary>
        /// count items in a cloud cache
        /// </summary>
        /// <remarks>
        /// count items in a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of int?</returns>
        System.Threading.Tasks.Task<int?> GetItemsCountAsync (string appId, string cacheName, KeyBody body);

        /// <summary>
        /// count items in a cloud cache
        /// </summary>
        /// <remarks>
        /// count items in a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (int?)</returns>
        System.Threading.Tasks.Task<ApiResponse<int?>> GetItemsCountAsyncWithHttpInfo (string appId, string cacheName, KeyBody body);
        
        /// <summary>
        /// add item to a cloud cache
        /// </summary>
        /// <remarks>
        /// add item to a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be store in cache</param>
        /// <param name="body">cache data and master key included got from this object</param>
        /// <returns>Task of string</returns>
        System.Threading.Tasks.Task<string> SetAsync (string appId, string cacheName, string dataKey, CacheRequest body);

        /// <summary>
        /// add item to a cloud cache
        /// </summary>
        /// <remarks>
        /// add item to a cloud cache
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be store in cache</param>
        /// <param name="body">cache data and master key included got from this object</param>
        /// <returns>Task of ApiResponse (string)</returns>
        System.Threading.Tasks.Task<ApiResponse<string>> SetAsyncWithHttpInfo (string appId, string cacheName, string dataKey, CacheRequest body);
        
        #endregion Asynchronous Operations
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class CloudCacheApi : ICloudCacheApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudCacheApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CloudCacheApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudCacheApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CloudCacheApi(Configuration configuration = null)
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
        /// clear all items from a cloud cache clear all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>List&lt;CacheRequest&gt;</returns>
        public List<CacheRequest> ClearCache (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<List<CacheRequest>> localVarResponse = ClearCacheWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// clear all items from a cloud cache clear all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of List&lt;CacheRequest&gt;</returns>
        public ApiResponse< List<CacheRequest> > ClearCacheWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->ClearCache");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->ClearCache");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->ClearCache");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/clear";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling ClearCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling ClearCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<CacheRequest>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CacheRequest>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CacheRequest>)));
            
        }

        
        /// <summary>
        /// clear all items from a cloud cache clear all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;CacheRequest&gt;</returns>
        public async System.Threading.Tasks.Task<List<CacheRequest>> ClearCacheAsync (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<List<CacheRequest>> localVarResponse = await ClearCacheAsyncWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// clear all items from a cloud cache clear all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;CacheRequest&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<CacheRequest>>> ClearCacheAsyncWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling ClearCache");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling ClearCache");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling ClearCache");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/clear";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling ClearCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling ClearCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<CacheRequest>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CacheRequest>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CacheRequest>)));
            
        }
        
        /// <summary>
        /// create a cloud cache create a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>Cache</returns>
        public Cache CreateCache (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<Cache> localVarResponse = CreateCacheWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// create a cloud cache create a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of Cache</returns>
        public ApiResponse< Cache > CreateCacheWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->CreateCache");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->CreateCache");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->CreateCache");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/create";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling CreateCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling CreateCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Cache>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Cache) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Cache)));
            
        }

        
        /// <summary>
        /// create a cloud cache create a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of Cache</returns>
        public async System.Threading.Tasks.Task<Cache> CreateCacheAsync (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<Cache> localVarResponse = await CreateCacheAsyncWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// create a cloud cache create a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (Cache)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Cache>> CreateCacheAsyncWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling CreateCache");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling CreateCache");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling CreateCache");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/create";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling CreateCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling CreateCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Cache>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Cache) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Cache)));
            
        }
        
        /// <summary>
        /// delete all CloudCaches delete all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>List&lt;CacheRequest&gt;</returns>
        public List<CacheRequest> DeleteAllCache (string appId, KeyBody body)
        {
             ApiResponse<List<CacheRequest>> localVarResponse = DeleteAllCacheWithHttpInfo(appId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// delete all CloudCaches delete all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of List&lt;CacheRequest&gt;</returns>
        public ApiResponse< List<CacheRequest> > DeleteAllCacheWithHttpInfo (string appId, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->DeleteAllCache");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->DeleteAllCache");
            
    
            var localVarPath = "cache/{app_id}";
    
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
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteAllCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteAllCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<CacheRequest>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CacheRequest>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CacheRequest>)));
            
        }

        
        /// <summary>
        /// delete all CloudCaches delete all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;CacheRequest&gt;</returns>
        public async System.Threading.Tasks.Task<List<CacheRequest>> DeleteAllCacheAsync (string appId, KeyBody body)
        {
             ApiResponse<List<CacheRequest>> localVarResponse = await DeleteAllCacheAsyncWithHttpInfo(appId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// delete all CloudCaches delete all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;CacheRequest&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<CacheRequest>>> DeleteAllCacheAsyncWithHttpInfo (string appId, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteAllCache");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteAllCache");
            
    
            var localVarPath = "cache/{app_id}";
    
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
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling DeleteAllCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteAllCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<CacheRequest>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CacheRequest>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CacheRequest>)));
            
        }
        
        /// <summary>
        /// delete a CloudCache delete a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>CacheRequest</returns>
        public CacheRequest DeleteCache (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<CacheRequest> localVarResponse = DeleteCacheWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// delete a CloudCache delete a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of CacheRequest</returns>
        public ApiResponse< CacheRequest > DeleteCacheWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->DeleteCache");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->DeleteCache");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->DeleteCache");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CacheRequest>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CacheRequest) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CacheRequest)));
            
        }

        
        /// <summary>
        /// delete a CloudCache delete a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of CacheRequest</returns>
        public async System.Threading.Tasks.Task<CacheRequest> DeleteCacheAsync (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<CacheRequest> localVarResponse = await DeleteCacheAsyncWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// delete a CloudCache delete a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (CacheRequest)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CacheRequest>> DeleteCacheAsyncWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteCache");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling DeleteCache");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteCache");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CacheRequest>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CacheRequest) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CacheRequest)));
            
        }
        
        /// <summary>
        /// delete item from a cloud cache delete item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="dataKey">key under which data to delete is cached</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>string</returns>
        public string DeleteItem (string appId, string cacheName, string dataKey, KeyBody body)
        {
             ApiResponse<string> localVarResponse = DeleteItemWithHttpInfo(appId, cacheName, dataKey, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// delete item from a cloud cache delete item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="dataKey">key under which data to delete is cached</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of string</returns>
        public ApiResponse< string > DeleteItemWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->DeleteItem");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->DeleteItem");
            
            // verify the required parameter 'dataKey' is set
            if (dataKey == null)
                throw new ApiException(400, "Missing required parameter 'dataKey' when calling CloudCacheApi->DeleteItem");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->DeleteItem");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/item/{data_key}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            if (dataKey != null) localVarPathParams.Add("data_key", Configuration.ApiClient.ParameterToString(dataKey)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteItem: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteItem: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }

        
        /// <summary>
        /// delete item from a cloud cache delete item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data to delete is cached</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of string</returns>
        public async System.Threading.Tasks.Task<string> DeleteItemAsync (string appId, string cacheName, string dataKey, KeyBody body)
        {
             ApiResponse<string> localVarResponse = await DeleteItemAsyncWithHttpInfo(appId, cacheName, dataKey, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// delete item from a cloud cache delete item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data to delete is cached</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (string)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<string>> DeleteItemAsyncWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteItem");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling DeleteItem");
            // verify the required parameter 'dataKey' is set
            if (dataKey == null) throw new ApiException(400, "Missing required parameter 'dataKey' when calling DeleteItem");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteItem");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/item/{data_key}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            if (dataKey != null) localVarPathParams.Add("data_key", Configuration.ApiClient.ParameterToString(dataKey)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteItem: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteItem: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }
        
        /// <summary>
        /// get all CloudCaches get all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>List&lt;Cache&gt;</returns>
        public List<Cache> GetAllCache (string appId, KeyBody body)
        {
             ApiResponse<List<Cache>> localVarResponse = GetAllCacheWithHttpInfo(appId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get all CloudCaches get all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of List&lt;Cache&gt;</returns>
        public ApiResponse< List<Cache> > GetAllCacheWithHttpInfo (string appId, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->GetAllCache");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->GetAllCache");
            
    
            var localVarPath = "cache/{app_id}";
    
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
                throw new ApiException (localVarStatusCode, "Error calling GetAllCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<Cache>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Cache>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Cache>)));
            
        }

        
        /// <summary>
        /// get all CloudCaches get all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;Cache&gt;</returns>
        public async System.Threading.Tasks.Task<List<Cache>> GetAllCacheAsync (string appId, KeyBody body)
        {
             ApiResponse<List<Cache>> localVarResponse = await GetAllCacheAsyncWithHttpInfo(appId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get all CloudCaches get all CloudCaches
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;Cache&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<Cache>>> GetAllCacheAsyncWithHttpInfo (string appId, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetAllCache");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetAllCache");
            
    
            var localVarPath = "cache/{app_id}";
    
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
                throw new ApiException (localVarStatusCode, "Error calling GetAllCache: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllCache: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<Cache>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Cache>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Cache>)));
            
        }
        
        /// <summary>
        /// get all items from a cloud cache get all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>List&lt;CacheItem&gt;</returns>
        public List<CacheItem> GetAllItems (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<List<CacheItem>> localVarResponse = GetAllItemsWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get all items from a cloud cache get all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of List&lt;CacheItem&gt;</returns>
        public ApiResponse< List<CacheItem> > GetAllItemsWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->GetAllItems");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->GetAllItems");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->GetAllItems");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/items";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetAllItems: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllItems: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<CacheItem>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CacheItem>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CacheItem>)));
            
        }

        
        /// <summary>
        /// get all items from a cloud cache get all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of List&lt;CacheItem&gt;</returns>
        public async System.Threading.Tasks.Task<List<CacheItem>> GetAllItemsAsync (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<List<CacheItem>> localVarResponse = await GetAllItemsAsyncWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get all items from a cloud cache get all items from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (List&lt;CacheItem&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<CacheItem>>> GetAllItemsAsyncWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetAllItems");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling GetAllItems");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetAllItems");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/items";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetAllItems: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAllItems: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<CacheItem>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CacheItem>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CacheItem>)));
            
        }
        
        /// <summary>
        /// get info about a CloudCache get info about a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>Cache</returns>
        public Cache GetCacheInfo (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<Cache> localVarResponse = GetCacheInfoWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get info about a CloudCache get info about a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of Cache</returns>
        public ApiResponse< Cache > GetCacheInfoWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->GetCacheInfo");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->GetCacheInfo");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->GetCacheInfo");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetCacheInfo: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetCacheInfo: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<Cache>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Cache) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Cache)));
            
        }

        
        /// <summary>
        /// get info about a CloudCache get info about a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of Cache</returns>
        public async System.Threading.Tasks.Task<Cache> GetCacheInfoAsync (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<Cache> localVarResponse = await GetCacheInfoAsyncWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get info about a CloudCache get info about a CloudCache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (Cache)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Cache>> GetCacheInfoAsyncWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetCacheInfo");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling GetCacheInfo");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetCacheInfo");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetCacheInfo: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetCacheInfo: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<Cache>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (Cache) Configuration.ApiClient.Deserialize(localVarResponse, typeof(Cache)));
            
        }
        
        /// <summary>
        /// get item from a cloud cache get item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="dataKey">key under which data should be got in cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>string</returns>
        public string GetItem (string appId, string cacheName, string dataKey, KeyBody body)
        {
             ApiResponse<string> localVarResponse = GetItemWithHttpInfo(appId, cacheName, dataKey, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// get item from a cloud cache get item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="dataKey">key under which data should be got in cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of string</returns>
        public ApiResponse< string > GetItemWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->GetItem");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->GetItem");
            
            // verify the required parameter 'dataKey' is set
            if (dataKey == null)
                throw new ApiException(400, "Missing required parameter 'dataKey' when calling CloudCacheApi->GetItem");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->GetItem");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/{data_key}/item";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            if (dataKey != null) localVarPathParams.Add("data_key", Configuration.ApiClient.ParameterToString(dataKey)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetItem: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetItem: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }

        
        /// <summary>
        /// get item from a cloud cache get item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be got in cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of string</returns>
        public async System.Threading.Tasks.Task<string> GetItemAsync (string appId, string cacheName, string dataKey, KeyBody body)
        {
             ApiResponse<string> localVarResponse = await GetItemAsyncWithHttpInfo(appId, cacheName, dataKey, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// get item from a cloud cache get item from a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be got in cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (string)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<string>> GetItemAsyncWithHttpInfo (string appId, string cacheName, string dataKey, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetItem");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling GetItem");
            // verify the required parameter 'dataKey' is set
            if (dataKey == null) throw new ApiException(400, "Missing required parameter 'dataKey' when calling GetItem");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetItem");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/{data_key}/item";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            if (dataKey != null) localVarPathParams.Add("data_key", Configuration.ApiClient.ParameterToString(dataKey)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetItem: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetItem: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }
        
        /// <summary>
        /// count items in a cloud cache count items in a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>int?</returns>
        public int? GetItemsCount (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<int?> localVarResponse = GetItemsCountWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// count items in a cloud cache count items in a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="body">master key of app</param> 
        /// <returns>ApiResponse of int?</returns>
        public ApiResponse< int? > GetItemsCountWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->GetItemsCount");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->GetItemsCount");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->GetItemsCount");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/items/count";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetItemsCount: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetItemsCount: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<int?>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (int?) Configuration.ApiClient.Deserialize(localVarResponse, typeof(int?)));
            
        }

        
        /// <summary>
        /// count items in a cloud cache count items in a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of int?</returns>
        public async System.Threading.Tasks.Task<int?> GetItemsCountAsync (string appId, string cacheName, KeyBody body)
        {
             ApiResponse<int?> localVarResponse = await GetItemsCountAsyncWithHttpInfo(appId, cacheName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// count items in a cloud cache count items in a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="body">master key of app</param>
        /// <returns>Task of ApiResponse (int?)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<int?>> GetItemsCountAsyncWithHttpInfo (string appId, string cacheName, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetItemsCount");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling GetItemsCount");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetItemsCount");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/items/count";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling GetItemsCount: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetItemsCount: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<int?>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (int?) Configuration.ApiClient.Deserialize(localVarResponse, typeof(int?)));
            
        }
        
        /// <summary>
        /// add item to a cloud cache add item to a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="dataKey">key under which data should be store in cache</param> 
        /// <param name="body">cache data and master key included got from this object</param> 
        /// <returns>string</returns>
        public string Set (string appId, string cacheName, string dataKey, CacheRequest body)
        {
             ApiResponse<string> localVarResponse = SetWithHttpInfo(appId, cacheName, dataKey, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// add item to a cloud cache add item to a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param> 
        /// <param name="cacheName">Name of cache</param> 
        /// <param name="dataKey">key under which data should be store in cache</param> 
        /// <param name="body">cache data and master key included got from this object</param> 
        /// <returns>ApiResponse of string</returns>
        public ApiResponse< string > SetWithHttpInfo (string appId, string cacheName, string dataKey, CacheRequest body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudCacheApi->Set");
            
            // verify the required parameter 'cacheName' is set
            if (cacheName == null)
                throw new ApiException(400, "Missing required parameter 'cacheName' when calling CloudCacheApi->Set");
            
            // verify the required parameter 'dataKey' is set
            if (dataKey == null)
                throw new ApiException(400, "Missing required parameter 'dataKey' when calling CloudCacheApi->Set");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudCacheApi->Set");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/{data_key}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            if (dataKey != null) localVarPathParams.Add("data_key", Configuration.ApiClient.ParameterToString(dataKey)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Set: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Set: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }

        
        /// <summary>
        /// add item to a cloud cache add item to a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be store in cache</param>
        /// <param name="body">cache data and master key included got from this object</param>
        /// <returns>Task of string</returns>
        public async System.Threading.Tasks.Task<string> SetAsync (string appId, string cacheName, string dataKey, CacheRequest body)
        {
             ApiResponse<string> localVarResponse = await SetAsyncWithHttpInfo(appId, cacheName, dataKey, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// add item to a cloud cache add item to a cloud cache
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">Id of CloudApp</param>
        /// <param name="cacheName">Name of cache</param>
        /// <param name="dataKey">key under which data should be store in cache</param>
        /// <param name="body">cache data and master key included got from this object</param>
        /// <returns>Task of ApiResponse (string)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<string>> SetAsyncWithHttpInfo (string appId, string cacheName, string dataKey, CacheRequest body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Set");
            // verify the required parameter 'cacheName' is set
            if (cacheName == null) throw new ApiException(400, "Missing required parameter 'cacheName' when calling Set");
            // verify the required parameter 'dataKey' is set
            if (dataKey == null) throw new ApiException(400, "Missing required parameter 'dataKey' when calling Set");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Set");
            
    
            var localVarPath = "cache/{app_id}/{cache_name}/{data_key}";
    
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
            if (cacheName != null) localVarPathParams.Add("cache_name", Configuration.ApiClient.ParameterToString(cacheName)); // path parameter
            if (dataKey != null) localVarPathParams.Add("data_key", Configuration.ApiClient.ParameterToString(dataKey)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Set: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Set: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }
        
    }
    
}
