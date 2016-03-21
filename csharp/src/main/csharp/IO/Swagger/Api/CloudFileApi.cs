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
    public interface ICloudFileApi
    {
        #region Synchronous Operations
        
        /// <summary>
        /// deletes file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>string</returns>
        string DeleteFile (string appId, string fileId, KeyBody body = null);
  
        /// <summary>
        /// deletes file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>ApiResponse of string</returns>
        ApiResponse<string> DeleteFileWithHttpInfo (string appId, string fileId, KeyBody body = null);
        
        /// <summary>
        /// fetch file content
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>string</returns>
        string FetchFileContent (string appId, string fileId, KeyBody body = null);
  
        /// <summary>
        /// fetch file content
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>ApiResponse of string</returns>
        ApiResponse<string> FetchFileContentWithHttpInfo (string appId, string fileId, KeyBody body = null);
        
        /// <summary>
        /// uploads a file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <param name="key">app key (optional)</param>
        /// <param name="fileToUpload">file to upload (optional)</param>
        /// <returns>string</returns>
        string SaveFile (string appId, string fileObj, string key = null, Stream fileToUpload = null);
  
        /// <summary>
        /// uploads a file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <param name="key">app key (optional)</param>
        /// <param name="fileToUpload">file to upload (optional)</param>
        /// <returns>ApiResponse of string</returns>
        ApiResponse<string> SaveFileWithHttpInfo (string appId, string fileObj, string key = null, Stream fileToUpload = null);
        
        /// <summary>
        /// uploads a file with data
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <returns>string</returns>
        string SaveFileData (string myAppId, FileBody fileObj);
  
        /// <summary>
        /// uploads a file with data
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <returns>ApiResponse of string</returns>
        ApiResponse<string> SaveFileDataWithHttpInfo (string myAppId, FileBody fileObj);
        
        #endregion Synchronous Operations
        
        #region Asynchronous Operations
        
        /// <summary>
        /// deletes file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of string</returns>
        System.Threading.Tasks.Task<string> DeleteFileAsync (string appId, string fileId, KeyBody body = null);

        /// <summary>
        /// deletes file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of ApiResponse (string)</returns>
        System.Threading.Tasks.Task<ApiResponse<string>> DeleteFileAsyncWithHttpInfo (string appId, string fileId, KeyBody body = null);
        
        /// <summary>
        /// fetch file content
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of string</returns>
        System.Threading.Tasks.Task<string> FetchFileContentAsync (string appId, string fileId, KeyBody body = null);

        /// <summary>
        /// fetch file content
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of ApiResponse (string)</returns>
        System.Threading.Tasks.Task<ApiResponse<string>> FetchFileContentAsyncWithHttpInfo (string appId, string fileId, KeyBody body = null);
        
        /// <summary>
        /// uploads a file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <param name="key">app key (optional)</param>
        /// <param name="fileToUpload">file to upload (optional)</param>
        /// <returns>Task of string</returns>
        System.Threading.Tasks.Task<string> SaveFileAsync (string appId, string fileObj, string key = null, Stream fileToUpload = null);

        /// <summary>
        /// uploads a file
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <param name="key">app key (optional)</param>
        /// <param name="fileToUpload">file to upload (optional)</param>
        /// <returns>Task of ApiResponse (string)</returns>
        System.Threading.Tasks.Task<ApiResponse<string>> SaveFileAsyncWithHttpInfo (string appId, string fileObj, string key = null, Stream fileToUpload = null);
        
        /// <summary>
        /// uploads a file with data
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <returns>Task of string</returns>
        System.Threading.Tasks.Task<string> SaveFileDataAsync (string myAppId, FileBody fileObj);

        /// <summary>
        /// uploads a file with data
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <returns>Task of ApiResponse (string)</returns>
        System.Threading.Tasks.Task<ApiResponse<string>> SaveFileDataAsyncWithHttpInfo (string myAppId, FileBody fileObj);
        
        #endregion Asynchronous Operations
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class CloudFileApi : ICloudFileApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudFileApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CloudFileApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudFileApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CloudFileApi(Configuration configuration = null)
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
        /// deletes file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param> 
        /// <param name="fileId">file id</param> 
        /// <param name="body">request body (optional)</param> 
        /// <returns>string</returns>
        public string DeleteFile (string appId, string fileId, KeyBody body = null)
        {
             ApiResponse<string> localVarResponse = DeleteFileWithHttpInfo(appId, fileId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// deletes file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param> 
        /// <param name="fileId">file id</param> 
        /// <param name="body">request body (optional)</param> 
        /// <returns>ApiResponse of string</returns>
        public ApiResponse< string > DeleteFileWithHttpInfo (string appId, string fileId, KeyBody body = null)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudFileApi->DeleteFile");
            
            // verify the required parameter 'fileId' is set
            if (fileId == null)
                throw new ApiException(400, "Missing required parameter 'fileId' when calling CloudFileApi->DeleteFile");
            
    
            var localVarPath = "file/{app_id}/{file_id}";
    
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
            if (fileId != null) localVarPathParams.Add("file_id", Configuration.ApiClient.ParameterToString(fileId)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteFile: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteFile: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }

        
        /// <summary>
        /// deletes file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of string</returns>
        public async System.Threading.Tasks.Task<string> DeleteFileAsync (string appId, string fileId, KeyBody body = null)
        {
             ApiResponse<string> localVarResponse = await DeleteFileAsyncWithHttpInfo(appId, fileId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// deletes file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of ApiResponse (string)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<string>> DeleteFileAsyncWithHttpInfo (string appId, string fileId, KeyBody body = null)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling DeleteFile");
            // verify the required parameter 'fileId' is set
            if (fileId == null) throw new ApiException(400, "Missing required parameter 'fileId' when calling DeleteFile");
            
    
            var localVarPath = "file/{app_id}/{file_id}";
    
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
            if (fileId != null) localVarPathParams.Add("file_id", Configuration.ApiClient.ParameterToString(fileId)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling DeleteFile: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling DeleteFile: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }
        
        /// <summary>
        /// fetch file content 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param> 
        /// <param name="fileId">file id</param> 
        /// <param name="body">request body (optional)</param> 
        /// <returns>string</returns>
        public string FetchFileContent (string appId, string fileId, KeyBody body = null)
        {
             ApiResponse<string> localVarResponse = FetchFileContentWithHttpInfo(appId, fileId, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// fetch file content 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param> 
        /// <param name="fileId">file id</param> 
        /// <param name="body">request body (optional)</param> 
        /// <returns>ApiResponse of string</returns>
        public ApiResponse< string > FetchFileContentWithHttpInfo (string appId, string fileId, KeyBody body = null)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudFileApi->FetchFileContent");
            
            // verify the required parameter 'fileId' is set
            if (fileId == null)
                throw new ApiException(400, "Missing required parameter 'fileId' when calling CloudFileApi->FetchFileContent");
            
    
            var localVarPath = "file/{app_id}/{file_id}";
    
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
                "application/json", "application/octet-stream"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (fileId != null) localVarPathParams.Add("file_id", Configuration.ApiClient.ParameterToString(fileId)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling FetchFileContent: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling FetchFileContent: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }

        
        /// <summary>
        /// fetch file content 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of string</returns>
        public async System.Threading.Tasks.Task<string> FetchFileContentAsync (string appId, string fileId, KeyBody body = null)
        {
             ApiResponse<string> localVarResponse = await FetchFileContentAsyncWithHttpInfo(appId, fileId, body);
             return localVarResponse.Data;

        }

        /// <summary>
        /// fetch file content 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileId">file id</param>
        /// <param name="body">request body (optional)</param>
        /// <returns>Task of ApiResponse (string)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<string>> FetchFileContentAsyncWithHttpInfo (string appId, string fileId, KeyBody body = null)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling FetchFileContent");
            // verify the required parameter 'fileId' is set
            if (fileId == null) throw new ApiException(400, "Missing required parameter 'fileId' when calling FetchFileContent");
            
    
            var localVarPath = "file/{app_id}/{file_id}";
    
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
                "application/json", "application/octet-stream"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (appId != null) localVarPathParams.Add("app_id", Configuration.ApiClient.ParameterToString(appId)); // path parameter
            if (fileId != null) localVarPathParams.Add("file_id", Configuration.ApiClient.ParameterToString(fileId)); // path parameter
            
            
            
            
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
                throw new ApiException (localVarStatusCode, "Error calling FetchFileContent: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling FetchFileContent: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }
        
        /// <summary>
        /// uploads a file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param> 
        /// <param name="fileObj">file extra data</param> 
        /// <param name="key">app key (optional)</param> 
        /// <param name="fileToUpload">file to upload (optional)</param> 
        /// <returns>string</returns>
        public string SaveFile (string appId, string fileObj, string key = null, Stream fileToUpload = null)
        {
             ApiResponse<string> localVarResponse = SaveFileWithHttpInfo(appId, fileObj, key, fileToUpload);
             return localVarResponse.Data;
        }

        /// <summary>
        /// uploads a file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param> 
        /// <param name="fileObj">file extra data</param> 
        /// <param name="key">app key (optional)</param> 
        /// <param name="fileToUpload">file to upload (optional)</param> 
        /// <returns>ApiResponse of string</returns>
        public ApiResponse< string > SaveFileWithHttpInfo (string appId, string fileObj, string key = null, Stream fileToUpload = null)
        {
            
            // verify the required parameter 'appId' is set
            if (appId == null)
                throw new ApiException(400, "Missing required parameter 'appId' when calling CloudFileApi->SaveFile");
            
            // verify the required parameter 'fileObj' is set
            if (fileObj == null)
                throw new ApiException(400, "Missing required parameter 'fileObj' when calling CloudFileApi->SaveFile");
            
    
            var localVarPath = "file/{app_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "multipart/form-data"
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
            
            
            
            if (key != null) localVarFormParams.Add("key", Configuration.ApiClient.ParameterToString(key)); // form parameter
            if (fileObj != null) localVarFormParams.Add("fileObj", Configuration.ApiClient.ParameterToString(fileObj)); // form parameter
            if (fileToUpload != null) localVarFileParams.Add("fileToUpload", Configuration.ApiClient.ParameterToFile("fileToUpload", fileToUpload));
            
            

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling SaveFile: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling SaveFile: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }

        
        /// <summary>
        /// uploads a file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <param name="key">app key (optional)</param>
        /// <param name="fileToUpload">file to upload (optional)</param>
        /// <returns>Task of string</returns>
        public async System.Threading.Tasks.Task<string> SaveFileAsync (string appId, string fileObj, string key = null, Stream fileToUpload = null)
        {
             ApiResponse<string> localVarResponse = await SaveFileAsyncWithHttpInfo(appId, fileObj, key, fileToUpload);
             return localVarResponse.Data;

        }

        /// <summary>
        /// uploads a file 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="appId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <param name="key">app key (optional)</param>
        /// <param name="fileToUpload">file to upload (optional)</param>
        /// <returns>Task of ApiResponse (string)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<string>> SaveFileAsyncWithHttpInfo (string appId, string fileObj, string key = null, Stream fileToUpload = null)
        {
            // verify the required parameter 'appId' is set
            if (appId == null) throw new ApiException(400, "Missing required parameter 'appId' when calling SaveFile");
            // verify the required parameter 'fileObj' is set
            if (fileObj == null) throw new ApiException(400, "Missing required parameter 'fileObj' when calling SaveFile");
            
    
            var localVarPath = "file/{app_id}";
    
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "multipart/form-data"
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
            
            
            
            if (key != null) localVarFormParams.Add("key", Configuration.ApiClient.ParameterToString(key)); // form parameter
            if (fileObj != null) localVarFormParams.Add("fileObj", Configuration.ApiClient.ParameterToString(fileObj)); // form parameter
            if (fileToUpload != null) localVarFileParams.Add("fileToUpload", Configuration.ApiClient.ParameterToFile("fileToUpload", fileToUpload));
            
            

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling SaveFile: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling SaveFile: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }
        
        /// <summary>
        /// uploads a file with data 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param> 
        /// <param name="fileObj">file extra data</param> 
        /// <returns>string</returns>
        public string SaveFileData (string myAppId, FileBody fileObj)
        {
             ApiResponse<string> localVarResponse = SaveFileDataWithHttpInfo(myAppId, fileObj);
             return localVarResponse.Data;
        }

        /// <summary>
        /// uploads a file with data 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param> 
        /// <param name="fileObj">file extra data</param> 
        /// <returns>ApiResponse of string</returns>
        public ApiResponse< string > SaveFileDataWithHttpInfo (string myAppId, FileBody fileObj)
        {
            
            // verify the required parameter 'myAppId' is set
            if (myAppId == null)
                throw new ApiException(400, "Missing required parameter 'myAppId' when calling CloudFileApi->SaveFileData");
            
            // verify the required parameter 'fileObj' is set
            if (fileObj == null)
                throw new ApiException(400, "Missing required parameter 'fileObj' when calling CloudFileApi->SaveFileData");
            
    
            var localVarPath = "file/{my_app_id}";
    
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
            
            
            
            
            if (fileObj.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(fileObj); // http body (model) parameter
            }
            else
            {
                localVarPostBody = fileObj; // byte array
            }

            
    
            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
    
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling SaveFileData: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling SaveFileData: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);
    
            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }

        
        /// <summary>
        /// uploads a file with data 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <returns>Task of string</returns>
        public async System.Threading.Tasks.Task<string> SaveFileDataAsync (string myAppId, FileBody fileObj)
        {
             ApiResponse<string> localVarResponse = await SaveFileDataAsyncWithHttpInfo(myAppId, fileObj);
             return localVarResponse.Data;

        }

        /// <summary>
        /// uploads a file with data 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="myAppId">ID of app</param>
        /// <param name="fileObj">file extra data</param>
        /// <returns>Task of ApiResponse (string)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<string>> SaveFileDataAsyncWithHttpInfo (string myAppId, FileBody fileObj)
        {
            // verify the required parameter 'myAppId' is set
            if (myAppId == null) throw new ApiException(400, "Missing required parameter 'myAppId' when calling SaveFileData");
            // verify the required parameter 'fileObj' is set
            if (fileObj == null) throw new ApiException(400, "Missing required parameter 'fileObj' when calling SaveFileData");
            
    
            var localVarPath = "file/{my_app_id}";
    
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
            
            
            
            
            if (fileObj.GetType() != typeof(byte[]))
            {
                localVarPostBody = Configuration.ApiClient.Serialize(fileObj); // http body (model) parameter
            }
            else
            {
                localVarPostBody = fileObj; // byte array
            }

            

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath, 
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams, 
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;
 
            if (localVarStatusCode >= 400)
                throw new ApiException (localVarStatusCode, "Error calling SaveFileData: " + localVarResponse.Content, localVarResponse.Content);
            else if (localVarStatusCode == 0)
                throw new ApiException (localVarStatusCode, "Error calling SaveFileData: " + localVarResponse.ErrorMessage, localVarResponse.ErrorMessage);

            return new ApiResponse<string>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (string) Configuration.ApiClient.Deserialize(localVarResponse, typeof(string)));
            
        }
        
    }
    
}
