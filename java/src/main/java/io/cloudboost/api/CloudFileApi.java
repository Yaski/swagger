package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.KeyBody;
import java.io.File;
import io.cloudboost.model.FileBody;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudFileApi {
  private ApiClient apiClient;

  public CloudFileApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudFileApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * deletes file
   * 
   * @param appId ID of app (required)
   * @param fileId file id (required)
   * @param body request body (optional)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String deleteFile(String appId, String fileId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteFile");
    }
    
    // verify the required parameter 'fileId' is set
    if (fileId == null) {
      throw new ApiException(400, "Missing the required parameter 'fileId' when calling deleteFile");
    }
    
    // create path and map variables
    String localVarPath = "file/{app_id}/{file_id}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "file_id" + "\\}", apiClient.escapeString(fileId.toString()));

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

    
    GenericType<String> localVarReturnType = new GenericType<String>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * fetch file content
   * 
   * @param appId ID of app (required)
   * @param fileId file id (required)
   * @param body request body (optional)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String fetchFileContent(String appId, String fileId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling fetchFileContent");
    }
    
    // verify the required parameter 'fileId' is set
    if (fileId == null) {
      throw new ApiException(400, "Missing the required parameter 'fileId' when calling fetchFileContent");
    }
    
    // create path and map variables
    String localVarPath = "file/{app_id}/{file_id}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "file_id" + "\\}", apiClient.escapeString(fileId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json", "application/octet-stream"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<String> localVarReturnType = new GenericType<String>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * uploads a file
   * 
   * @param appId ID of app (required)
   * @param fileObj file extra data (required)
   * @param key app key (optional)
   * @param fileToUpload file to upload (optional)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String saveFile(String appId, String fileObj, String key, File fileToUpload) throws ApiException {
    Object localVarPostBody = null;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling saveFile");
    }
    
    // verify the required parameter 'fileObj' is set
    if (fileObj == null) {
      throw new ApiException(400, "Missing the required parameter 'fileObj' when calling saveFile");
    }
    
    // create path and map variables
    String localVarPath = "file/{app_id}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    if (key != null)
      localVarFormParams.put("key", key);
    if (fileObj != null)
      localVarFormParams.put("fileObj", fileObj);
    if (fileToUpload != null)
      localVarFormParams.put("fileToUpload", fileToUpload);
    

    final String[] localVarAccepts = {
      "application/json"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "multipart/form-data"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<String> localVarReturnType = new GenericType<String>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * uploads a file with data
   * 
   * @param myAppId ID of app (required)
   * @param fileObj file extra data (required)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String saveFileData(String myAppId, FileBody fileObj) throws ApiException {
    Object localVarPostBody = fileObj;
    
    // verify the required parameter 'myAppId' is set
    if (myAppId == null) {
      throw new ApiException(400, "Missing the required parameter 'myAppId' when calling saveFileData");
    }
    
    // verify the required parameter 'fileObj' is set
    if (fileObj == null) {
      throw new ApiException(400, "Missing the required parameter 'fileObj' when calling saveFileData");
    }
    
    // create path and map variables
    String localVarPath = "file/{my_app_id}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "my_app_id" + "\\}", apiClient.escapeString(myAppId.toString()));

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

    
    GenericType<String> localVarReturnType = new GenericType<String>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
}
