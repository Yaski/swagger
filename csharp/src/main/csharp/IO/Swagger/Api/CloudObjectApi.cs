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
    public interface ICloudObjectApi
    {
        #region Synchronous Operations
        
        /// <summary>
        /// deletes a cloud object from cloudapp
        /// </summary>
        /// <remarks>
        /// deletes a cloud object from cloudapp
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param>
        /// <returns>CloudObject</returns>
        CloudObject Delete (string appId, string tableName, CloudObjectSaveRequest body);
  
        /// <summary>
        /// deletes a cloud object from cloudapp
        /// </summary>
        /// <remarks>
        /// deletes a cloud object from cloudapp
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param>
        /// <returns>ApiResponse of CloudObject</returns>
        ApiResponse<CloudObject> DeleteWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body);
        
        /// <summary>
        /// saves a cloud object to cloudboost
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to cloudboost</param>
        /// <returns>CloudObject</returns>
        CloudObject Save (string appId, string tableName, CloudObjectSaveRequest body);
  
        /// <summary>
        /// saves a cloud object to cloudboost
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to cloudboost</param>
        /// <returns>ApiResponse of CloudObject</returns>
        ApiResponse<CloudObject> SaveWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body);
        
        #endregion Synchronous Operations
        
        #region Asynchronous Operations
        
        /// <summary>
        /// deletes a cloud object from cloudapp
        /// </summary>
        /// <remarks>
        /// deletes a cloud object from cloudapp
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param>
        /// <returns>Task of CloudObject</returns>
        System.Threading.Tasks.Task<CloudObject> DeleteAsync (string appId, string tableName, CloudObjectSaveRequest body);

        /// <summary>
        /// deletes a cloud object from cloudapp
        /// </summary>
        /// <remarks>
        /// deletes a cloud object from cloudapp
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        System.Threading.Tasks.Task<ApiResponse<CloudObject>> DeleteAsyncWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body);
        
        /// <summary>
        /// saves a cloud object to cloudboost
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to cloudboost</param>
        /// <returns>Task of CloudObject</returns>
        System.Threading.Tasks.Task<CloudObject> SaveAsync (string appId, string tableName, CloudObjectSaveRequest body);

        /// <summary>
        /// saves a cloud object to cloudboost
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to cloudboost</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        System.Threading.Tasks.Task<ApiResponse<CloudObject>> SaveAsyncWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body);
        
        #endregion Asynchronous Operations
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class CloudObjectApi : ICloudObjectApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudObjectApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CloudObjectApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudObjectApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CloudObjectApi(Configuration configuration = null)
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
        /// deletes a cloud object from cloudapp deletes a cloud object from cloudapp
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param> 
        /// <returns>CloudObject</returns>
        public CloudObject Delete (string appId, string tableName, CloudObjectSaveRequest body)
        {
             ApiResponse<CloudObject> localVarResponse = DeleteWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// deletes a cloud object from cloudapp deletes a cloud object from cloudapp
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param> 
        /// <returns>ApiResponse of CloudObject</returns>
        public ApiResponse< CloudObject > DeleteWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudObjectApi->Delete");
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudObjectApi->Delete");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudObjectApi->Delete");
            
    
            var localVarPath = "data/{app_id}/{table_name}";
    
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
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Delete: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Delete: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }

        
        /// <summary>
        /// deletes a cloud object from cloudapp deletes a cloud object from cloudapp
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param>
        /// <returns>Task of CloudObject</returns>
        public async System.Threading.Tasks.Task<CloudObject> DeleteAsync (string appId, string tableName, CloudObjectSaveRequest body)
        {
             ApiResponse<CloudObject> localVarResponse = await DeleteAsyncWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// deletes a cloud object from cloudapp deletes a cloud object from cloudapp
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to the cloudboost</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CloudObject>> DeleteAsyncWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Delete");
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling Delete");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Delete");
            
    
            var localVarPath = "data/{app_id}/{table_name}";
    
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
                Method.DELETE, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Delete: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Delete: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }
        
        /// <summary>
        /// saves a cloud object to cloudboost 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">CloudObject that needs to be added to cloudboost</param> 
        /// <returns>CloudObject</returns>
        public CloudObject Save (string appId, string tableName, CloudObjectSaveRequest body)
        {
             ApiResponse<CloudObject> localVarResponse = SaveWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// saves a cloud object to cloudboost 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param> 
        /// <param name="tableName">cloud table name</param> 
        /// <param name="body">CloudObject that needs to be added to cloudboost</param> 
        /// <returns>ApiResponse of CloudObject</returns>
        public ApiResponse< CloudObject > SaveWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudObjectApi->Save");
            
            // verify the required parameter 'tableName' is set
            if (tableName == null)
                throw new ApiException(400, "Missing required parameter 'tableName' when calling CloudObjectApi->Save");
            
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling CloudObjectApi->Save");
            
    
            var localVarPath = "data/{app_id}/{table_name}";
    
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
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }

        
        /// <summary>
        /// saves a cloud object to cloudboost 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to cloudboost</param>
        /// <returns>Task of CloudObject</returns>
        public async System.Threading.Tasks.Task<CloudObject> SaveAsync (string appId, string tableName, CloudObjectSaveRequest body)
        {
             ApiResponse<CloudObject> localVarResponse = await SaveAsyncWithHttpInfo(appId, tableName, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// saves a cloud object to cloudboost 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">CloudApp id</param>
        /// <param name="tableName">cloud table name</param>
        /// <param name="body">CloudObject that needs to be added to cloudboost</param>
        /// <returns>Task of ApiResponse (CloudObject)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<CloudObject>> SaveAsyncWithHttpInfo (string appId, string tableName, CloudObjectSaveRequest body)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling Save");
            // verify the required parameter 'tableName' is set
            if (tableName == null) throw new ApiException(400, "Missing required parameter 'tableName' when calling Save");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling Save");
            
    
            var localVarPath = "data/{app_id}/{table_name}";
    
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
                Method.PUT, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling Save: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<CloudObject>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (CloudObject) Configuration.ApiClient.Deserialize(localVarResponse, typeof(CloudObject)));
            
        }
        
    }
    
}
