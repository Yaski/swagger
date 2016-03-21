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
    public interface ICloudTableApi
    {
        #region Synchronous Operations
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// delete a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>CloudTable</returns>
        CloudTable DeleteTable (string tableName, string appId, CloudTableSave body);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// delete a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>ApiResponse of CloudTable</returns>
        ApiResponse<CloudTable> DeleteTableWithHttpInfo (string tableName, string appId, CloudTableSave body);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get a table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">id of app</param>
        /// <param name="body">master key and app id</param>
        /// <returns>CloudTable</returns>
        CloudTable Get (string tableName, string appId, KeyBody body);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get a table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">id of app</param>
        /// <param name="body">master key and app id</param>
        /// <returns>ApiResponse of CloudTable</returns>
        ApiResponse<CloudTable> GetWithHttpInfo (string tableName, string appId, KeyBody body);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get all tables in app
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param>
        /// <param name="body">master key</param>
        /// <returns></returns>
        void GetAll (string appId, KeyBody body);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get all tables in app
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param>
        /// <param name="body">master key</param>
        /// <returns>ApiResponse of Object(void)</returns>
        ApiResponse<Object> GetAllWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// save a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>CloudTable</returns>
        CloudTable Save (string tableName, string appId, CloudTableSave body);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// save a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>ApiResponse of CloudTable</returns>
        ApiResponse<CloudTable> SaveWithHttpInfo (string tableName, string appId, CloudTableSave body);
        
        #endregion Synchronous Operations
        
        #region Asynchronous Operations
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// delete a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of CloudTable</returns>
        System.Threading.Tasks.Task<CloudTable> DeleteTableAsync (string tableName, string appId, CloudTableSave body);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// delete a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of ApiResponse (CloudTable)</returns>
        System.Threading.Tasks.Task<ApiResponse<CloudTable>> DeleteTableAsyncWithHttpInfo (string tableName, string appId, CloudTableSave body);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get a table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">id of app</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of CloudTable</returns>
        System.Threading.Tasks.Task<CloudTable> GetAsync (string tableName, string appId, KeyBody body);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get a table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">id of app</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of ApiResponse (CloudTable)</returns>
        System.Threading.Tasks.Task<ApiResponse<CloudTable>> GetAsyncWithHttpInfo (string tableName, string appId, KeyBody body);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get all tables in app
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param>
        /// <param name="body">master key</param>
        /// <returns>Task of void</returns>
        System.Threading.Tasks.Task GetAllAsync (string appId, KeyBody body);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// get all tables in app
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param>
        /// <param name="body">master key</param>
        /// <returns>Task of ApiResponse</returns>
        System.Threading.Tasks.Task<ApiResponse<Object>> GetAllAsyncWithHttpInfo (string appId, KeyBody body);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// save a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of CloudTable</returns>
        System.Threading.Tasks.Task<CloudTable> SaveAsync (string tableName, string appId, CloudTableSave body);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// save a cloud table
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of ApiResponse (CloudTable)</returns>
        System.Threading.Tasks.Task<ApiResponse<CloudTable>> SaveAsyncWithHttpInfo (string tableName, string appId, CloudTableSave body);
        
        #endregion Asynchronous Operations
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class CloudTableApi : ICloudTableApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudTableApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CloudTableApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudTableApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CloudTableApi(Configuration configuration = null)
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
        ///  delete a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param> 
        /// <param name="appId">cloud app id</param> 
        /// <param name="body">master key and app id</param> 
        /// <returns>CloudTable</returns>
        public CloudTable DeleteTable (string tableName, string appId, CloudTableSave body)
        {
             ApiResponse<CloudTable> localVarResponse = DeleteTableWithHttpInfo(tableName, appId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        ///  delete a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param> 
        /// <param name="appId">cloud app id</param> 
        /// <param name="body">master key and app id</param> 
        /// <returns>ApiResponse of CloudTable</returns>
        public ApiResponse< CloudTable > DeleteTableWithHttpInfo (string tableName, string appId, CloudTableSave body)
        {
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudTableApi->DeleteTable");
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudTableApi->DeleteTable");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudTableApi->DeleteTable");
            
    
            var localVarPath = "app/{app_id}/{table_name}";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteTable: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteTable: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CloudTable>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudTable) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudTable)));
            
        }

        
        /// <summary>
        ///  delete a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of CloudTable</returns>
        public async System.Threading.Tasks.Task<CloudTable> DeleteTableAsync (string tableName, string appId, CloudTableSave body)
        {
             ApiResponse<CloudTable> localVarResponse = await DeleteTableAsyncWithHttpInfo(tableName, appId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        ///  delete a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of ApiResponse (CloudTable)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CloudTable>> DeleteTableAsyncWithHttpInfo (string tableName, string appId, CloudTableSave body)
        {
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling DeleteTable");
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteTable");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteTable");
            
    
            var localVarPath = "app/{app_id}/{table_name}";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteTable: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteTable: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CloudTable>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudTable) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudTable)));
            
        }
        
        /// <summary>
        ///  get a table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param> 
        /// <param name="appId">id of app</param> 
        /// <param name="body">master key and app id</param> 
        /// <returns>CloudTable</returns>
        public CloudTable Get (string tableName, string appId, KeyBody body)
        {
             ApiResponse<CloudTable> localVarResponse = GetWithHttpInfo(tableName, appId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        ///  get a table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param> 
        /// <param name="appId">id of app</param> 
        /// <param name="body">master key and app id</param> 
        /// <returns>ApiResponse of CloudTable</returns>
        public ApiResponse< CloudTable > GetWithHttpInfo (string tableName, string appId, KeyBody body)
        {
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudTableApi->Get");
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudTableApi->Get");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudTableApi->Get");
            
    
            var localVarPath = "app/{app_id}/{table_name}";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
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
                throw new ApiException (localVarStatusCode, "Error calling Get: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Get: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CloudTable>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudTable) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudTable)));
            
        }

        
        /// <summary>
        ///  get a table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">id of app</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of CloudTable</returns>
        public async System.Threading.Tasks.Task<CloudTable> GetAsync (string tableName, string appId, KeyBody body)
        {
             ApiResponse<CloudTable> localVarResponse = await GetAsyncWithHttpInfo(tableName, appId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        ///  get a table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">id of app</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of ApiResponse (CloudTable)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CloudTable>> GetAsyncWithHttpInfo (string tableName, string appId, KeyBody body)
        {
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling Get");
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Get");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Get");
            
    
            var localVarPath = "app/{app_id}/{table_name}";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
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
                throw new ApiException (localVarStatusCode, "Error calling Get: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Get: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CloudTable>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudTable) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudTable)));
            
        }
        
        /// <summary>
        ///  get all tables in app
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param> 
        /// <param name="body">master key</param> 
        /// <returns></returns>
        public void GetAll (string appId, KeyBody body)
        {
             GetAllWithHttpInfo(appId, body);
        }

        /// <summary>
        ///  get all tables in app
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param> 
        /// <param name="body">master key</param> 
        /// <returns>ApiResponse of Object(void)</returns>
        public ApiResponse<Object> GetAllWithHttpInfo (string appId, KeyBody body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudTableApi->GetAll");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudTableApi->GetAll");
            
    
            var localVarPath = "/app/{app_id}/_getAll";
    
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
                throw new ApiException (localVarStatusCode, "Error calling GetAll: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAll: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            
            return new ApiResponse<Object>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                null);
        }

        
        /// <summary>
        ///  get all tables in app
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param>
        /// <param name="body">master key</param>
        /// <returns>Task of void</returns>
        public async System.Threading.Tasks.Task GetAllAsync (string appId, KeyBody body)
        {
             await GetAllAsyncWithHttpInfo(appId, body);

        }

        /// <summary>
        ///  get all tables in app
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">app id</param>
        /// <param name="body">master key</param>
        /// <returns>Task of ApiResponse</returns>
        public async System.Threading.Tasks.Task<ApiResponse<Object>> GetAllAsyncWithHttpInfo (string appId, KeyBody body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling GetAll");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling GetAll");
            
    
            var localVarPath = "/app/{app_id}/_getAll";
    
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
                throw new ApiException (localVarStatusCode, "Error calling GetAll: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling GetAll: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            
            return new ApiResponse<Object>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                null);
        }
        
        /// <summary>
        ///  save a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param> 
        /// <param name="appId">cloud app id</param> 
        /// <param name="body">master key and app id</param> 
        /// <returns>CloudTable</returns>
        public CloudTable Save (string tableName, string appId, CloudTableSave body)
        {
             ApiResponse<CloudTable> localVarResponse = SaveWithHttpInfo(tableName, appId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        ///  save a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param> 
        /// <param name="appId">cloud app id</param> 
        /// <param name="body">master key and app id</param> 
        /// <returns>ApiResponse of CloudTable</returns>
        public ApiResponse< CloudTable > SaveWithHttpInfo (string tableName, string appId, CloudTableSave body)
        {
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudTableApi->Save");
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudTableApi->Save");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudTableApi->Save");
            
    
            var localVarPath = "app/{app_id}/{table_name}";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
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
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CloudTable>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudTable) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudTable)));
            
        }

        
        /// <summary>
        ///  save a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of CloudTable</returns>
        public async System.Threading.Tasks.Task<CloudTable> SaveAsync (string tableName, string appId, CloudTableSave body)
        {
             ApiResponse<CloudTable> localVarResponse = await SaveAsyncWithHttpInfo(tableName, appId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        ///  save a cloud table
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tableName">name of cloud table</param>
        /// <param name="appId">cloud app id</param>
        /// <param name="body">master key and app id</param>
        /// <returns>Task of ApiResponse (CloudTable)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CloudTable>> SaveAsyncWithHttpInfo (string tableName, string appId, CloudTableSave body)
        {
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling Save");
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Save");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Save");
            
    
            var localVarPath = "app/{app_id}/{table_name}";
    
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
            if (tableName != null) localVarPathParams.Add("table_name", Configuration.ApiClient.ParameterToString(tableName)); // path parameter
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
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CloudTable>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudTable) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudTable)));
            
        }
        
    }
    
}
