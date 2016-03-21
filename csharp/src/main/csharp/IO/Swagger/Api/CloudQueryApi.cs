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
    public interface ICloudQueryApi
    {
        #region Synchronous Operations
        
        /// <summary>
        /// count items in a table that match this query criteria
        /// </summary>
        /// <remarks>
        /// count items in a table that match this query criteria
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>int?</returns>
        int? Count (string appId, string tableName, CloudQueryCount body);
  
        /// <summary>
        /// count items in a table that match this query criteria
        /// </summary>
        /// <remarks>
        /// count items in a table that match this query criteria
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>ApiResponse of int?</returns>
        ApiResponse<int?> CountWithHttpInfo (string appId, string tableName, CloudQueryCount body);
        
        /// <summary>
        /// distinct query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>List&lt;CloudObject&gt;</returns>
        List<CloudObject> Distinct (string appId, string tableName, CloudQueryDistinct body);
  
        /// <summary>
        /// distinct query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>ApiResponse of List&lt;CloudObject&gt;</returns>
        ApiResponse<List<CloudObject>> DistinctWithHttpInfo (string appId, string tableName, CloudQueryDistinct body);
        
        /// <summary>
        /// find CloudObject meeting this query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query object</param>
        /// <returns>List&lt;CloudObject&gt;</returns>
        List<CloudObject> Find (string appId, string tableName, CloudQuery body);
  
        /// <summary>
        /// find CloudObject meeting this query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query object</param>
        /// <returns>ApiResponse of List&lt;CloudObject&gt;</returns>
        ApiResponse<List<CloudObject>> FindWithHttpInfo (string appId, string tableName, CloudQuery body);
        
        /// <summary>
        /// find CloudObject with specific _id
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>CloudObject</returns>
        CloudObject FindById (string cloudAppId, string tableName, CloudQueryFindById body);
  
        /// <summary>
        /// find CloudObject with specific _id
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>ApiResponse of CloudObject</returns>
        ApiResponse<CloudObject> FindByIdWithHttpInfo (string cloudAppId, string tableName, CloudQueryFindById body);
        
        /// <summary>
        /// find a single CloudObject
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>CloudObject</returns>
        CloudObject FindOne (string appId, string tableName, CloudQueryFindOne body);
  
        /// <summary>
        /// find a single CloudObject
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>ApiResponse of CloudObject</returns>
        ApiResponse<CloudObject> FindOneWithHttpInfo (string appId, string tableName, CloudQueryFindOne body);
        
        #endregion Synchronous Operations
        
        #region Asynchronous Operations
        
        /// <summary>
        /// count items in a table that match this query criteria
        /// </summary>
        /// <remarks>
        /// count items in a table that match this query criteria
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of int?</returns>
        System.Threading.Tasks.Task<int?> CountAsync (string appId, string tableName, CloudQueryCount body);

        /// <summary>
        /// count items in a table that match this query criteria
        /// </summary>
        /// <remarks>
        /// count items in a table that match this query criteria
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (int?)</returns>
        System.Threading.Tasks.Task<ApiResponse<int?>> CountAsyncWithHttpInfo (string appId, string tableName, CloudQueryCount body);
        
        /// <summary>
        /// distinct query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of List&lt;CloudObject&gt;</returns>
        System.Threading.Tasks.Task<List<CloudObject>> DistinctAsync (string appId, string tableName, CloudQueryDistinct body);

        /// <summary>
        /// distinct query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (List&lt;CloudObject&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<CloudObject>>> DistinctAsyncWithHttpInfo (string appId, string tableName, CloudQueryDistinct body);
        
        /// <summary>
        /// find CloudObject meeting this query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query object</param>
        /// <returns>Task of List&lt;CloudObject&gt;</returns>
        System.Threading.Tasks.Task<List<CloudObject>> FindAsync (string appId, string tableName, CloudQuery body);

        /// <summary>
        /// find CloudObject meeting this query criteria
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query object</param>
        /// <returns>Task of ApiResponse (List&lt;CloudObject&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<CloudObject>>> FindAsyncWithHttpInfo (string appId, string tableName, CloudQuery body);
        
        /// <summary>
        /// find CloudObject with specific _id
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of CloudObject</returns>
        System.Threading.Tasks.Task<CloudObject> FindByIdAsync (string cloudAppId, string tableName, CloudQueryFindById body);

        /// <summary>
        /// find CloudObject with specific _id
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        System.Threading.Tasks.Task<ApiResponse<CloudObject>> FindByIdAsyncWithHttpInfo (string cloudAppId, string tableName, CloudQueryFindById body);
        
        /// <summary>
        /// find a single CloudObject
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of CloudObject</returns>
        System.Threading.Tasks.Task<CloudObject> FindOneAsync (string appId, string tableName, CloudQueryFindOne body);

        /// <summary>
        /// find a single CloudObject
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        System.Threading.Tasks.Task<ApiResponse<CloudObject>> FindOneAsyncWithHttpInfo (string appId, string tableName, CloudQueryFindOne body);
        
        #endregion Asynchronous Operations
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class CloudQueryApi : ICloudQueryApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudQueryApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CloudQueryApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudQueryApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CloudQueryApi(Configuration configuration = null)
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
        /// count items in a table that match this query criteria count items in a table that match this query criteria
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>int?</returns>
        public int? Count (string appId, string tableName, CloudQueryCount body)
        {
             ApiResponse<int?> localVarResponse = CountWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// count items in a table that match this query criteria count items in a table that match this query criteria
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>ApiResponse of int?</returns>
        public ApiResponse< int? > CountWithHttpInfo (string appId, string tableName, CloudQueryCount body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueryApi->Count");
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudQueryApi->Count");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueryApi->Count");
            
    
            var localVarPath = "data/{app_id}/{table_name}/count";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Count: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Count: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<int?>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (int?) Configuration.ApiClient.Deserialize(localVarResponse, typeof(int?)));
            
        }

        
        /// <summary>
        /// count items in a table that match this query criteria count items in a table that match this query criteria
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of int?</returns>
        public async System.Threading.Tasks.Task<int?> CountAsync (string appId, string tableName, CloudQueryCount body)
        {
             ApiResponse<int?> localVarResponse = await CountAsyncWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// count items in a table that match this query criteria count items in a table that match this query criteria
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (int?)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<int?>> CountAsyncWithHttpInfo (string appId, string tableName, CloudQueryCount body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Count");
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling Count");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Count");
            
    
            var localVarPath = "data/{app_id}/{table_name}/count";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Count: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Count: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<int?>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (int?) Configuration.ApiClient.Deserialize(localVarResponse, typeof(int?)));
            
        }
        
        /// <summary>
        /// distinct query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>List&lt;CloudObject&gt;</returns>
        public List<CloudObject> Distinct (string appId, string tableName, CloudQueryDistinct body)
        {
             ApiResponse<List<CloudObject>> localVarResponse = DistinctWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// distinct query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>ApiResponse of List&lt;CloudObject&gt;</returns>
        public ApiResponse< List<CloudObject> > DistinctWithHttpInfo (string appId, string tableName, CloudQueryDistinct body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueryApi->Distinct");
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudQueryApi->Distinct");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueryApi->Distinct");
            
    
            var localVarPath = "data/{app_id}/{table_name}/distinct";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Distinct: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Distinct: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<CloudObject>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CloudObject>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CloudObject>)));
            
        }

        
        /// <summary>
        /// distinct query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of List&lt;CloudObject&gt;</returns>
        public async System.Threading.Tasks.Task<List<CloudObject>> DistinctAsync (string appId, string tableName, CloudQueryDistinct body)
        {
             ApiResponse<List<CloudObject>> localVarResponse = await DistinctAsyncWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// distinct query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (List&lt;CloudObject&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<CloudObject>>> DistinctAsyncWithHttpInfo (string appId, string tableName, CloudQueryDistinct body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Distinct");
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling Distinct");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Distinct");
            
    
            var localVarPath = "data/{app_id}/{table_name}/distinct";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Distinct: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Distinct: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<CloudObject>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CloudObject>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CloudObject>)));
            
        }
        
        /// <summary>
        /// find CloudObject meeting this query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query object</param> 
        /// <returns>List&lt;CloudObject&gt;</returns>
        public List<CloudObject> Find (string appId, string tableName, CloudQuery body)
        {
             ApiResponse<List<CloudObject>> localVarResponse = FindWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// find CloudObject meeting this query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query object</param> 
        /// <returns>ApiResponse of List&lt;CloudObject&gt;</returns>
        public ApiResponse< List<CloudObject> > FindWithHttpInfo (string appId, string tableName, CloudQuery body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueryApi->Find");
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudQueryApi->Find");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueryApi->Find");
            
    
            var localVarPath = "data/{app_id}/{table_name}/find";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Find: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Find: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<List<CloudObject>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CloudObject>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CloudObject>)));
            
        }

        
        /// <summary>
        /// find CloudObject meeting this query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query object</param>
        /// <returns>Task of List&lt;CloudObject&gt;</returns>
        public async System.Threading.Tasks.Task<List<CloudObject>> FindAsync (string appId, string tableName, CloudQuery body)
        {
             ApiResponse<List<CloudObject>> localVarResponse = await FindAsyncWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// find CloudObject meeting this query criteria 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query object</param>
        /// <returns>Task of ApiResponse (List&lt;CloudObject&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<CloudObject>>> FindAsyncWithHttpInfo (string appId, string tableName, CloudQuery body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Find");
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling Find");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Find");
            
    
            var localVarPath = "data/{app_id}/{table_name}/find";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling Find: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Find: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<List<CloudObject>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<CloudObject>) Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CloudObject>)));
            
        }
        
        /// <summary>
        /// find CloudObject with specific _id 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>CloudObject</returns>
        public CloudObject FindById (string cloudAppId, string tableName, CloudQueryFindById body)
        {
             ApiResponse<CloudObject> localVarResponse = FindByIdWithHttpInfo(cloudAppId, tableName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// find CloudObject with specific _id 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>ApiResponse of CloudObject</returns>
        public ApiResponse< CloudObject > FindByIdWithHttpInfo (string cloudAppId, string tableName, CloudQueryFindById body)
        {
            
            // verify the required parameter 'cloudAppId' is set
            if (cloudAppId == null)
                throw new ApiException(400, "Missing required parameter 'cloudAppId' when calling CloudQueryApi->FindById");
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudQueryApi->FindById");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueryApi->FindById");
            
    
            var localVarPath = "data/{cloud_app_id}/{table_name}/find";
    
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
            if (cloudAppId != null) localVarPathParams.Add("cloud_app_id", Configuration.ApiClient.ParameterToString(cloudAppId)); // path parameter
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling FindById: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling FindById: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }

        
        /// <summary>
        /// find CloudObject with specific _id 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of CloudObject</returns>
        public async System.Threading.Tasks.Task<CloudObject> FindByIdAsync (string cloudAppId, string tableName, CloudQueryFindById body)
        {
             ApiResponse<CloudObject> localVarResponse = await FindByIdAsyncWithHttpInfo(cloudAppId, tableName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// find CloudObject with specific _id 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="cloudAppId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CloudObject>> FindByIdAsyncWithHttpInfo (string cloudAppId, string tableName, CloudQueryFindById body)
        {
            // verify the required parameter 'cloudAppId' is set
            if (cloudAppId == null) throw new ApiException(400, "Missing required parameter 'cloudAppId' when calling FindById");
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling FindById");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling FindById");
            
    
            var localVarPath = "data/{cloud_app_id}/{table_name}/find";
    
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
            if (cloudAppId != null) localVarPathParams.Add("cloud_app_id", Configuration.ApiClient.ParameterToString(cloudAppId)); // path parameter
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling FindById: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling FindById: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }
        
        /// <summary>
        /// find a single CloudObject 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>CloudObject</returns>
        public CloudObject FindOne (string appId, string tableName, CloudQueryFindOne body)
        {
             ApiResponse<CloudObject> localVarResponse = FindOneWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// find a single CloudObject 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">query body</param> 
        /// <returns>ApiResponse of CloudObject</returns>
        public ApiResponse< CloudObject > FindOneWithHttpInfo (string appId, string tableName, CloudQueryFindOne body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudQueryApi->FindOne");
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudQueryApi->FindOne");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudQueryApi->FindOne");
            
    
            var localVarPath = "data/{app_id}/{table_name}/findOne";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling FindOne: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling FindOne: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }

        
        /// <summary>
        /// find a single CloudObject 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of CloudObject</returns>
        public async System.Threading.Tasks.Task<CloudObject> FindOneAsync (string appId, string tableName, CloudQueryFindOne body)
        {
             ApiResponse<CloudObject> localVarResponse = await FindOneAsyncWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// find a single CloudObject 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">query body</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CloudObject>> FindOneAsyncWithHttpInfo (string appId, string tableName, CloudQueryFindOne body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling FindOne");
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling FindOne");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling FindOne");
            
    
            var localVarPath = "data/{app_id}/{table_name}/findOne";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling FindOne: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling FindOne: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }
        
    }
    
}
