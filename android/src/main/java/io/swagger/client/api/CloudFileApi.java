package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.KeyBody;
import java.io.File;
import io.swagger.client.model.FileBody;

import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class CloudFileApi {
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
   * deletes file
   * 
   * @param appId ID of app
   * @param fileId file id
   * @param body request body
   * @return String
   */
  public String  deleteFile (String appId, String fileId, KeyBody body) throws ApiException {
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
    String localVarPath = "file/{app_id}/{file_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "file_id" + "\\}", apiInvoker.escapeString(fileId.toString()));

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
        return (String) ApiInvoker.deserialize(localVarResponse, "", String.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * fetch file content
   * 
   * @param appId ID of app
   * @param fileId file id
   * @param body request body
   * @return String
   */
  public String  fetchFileContent (String appId, String fileId, KeyBody body) throws ApiException {
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
    String localVarPath = "file/{app_id}/{file_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "file_id" + "\\}", apiInvoker.escapeString(fileId.toString()));

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
        return (String) ApiInvoker.deserialize(localVarResponse, "", String.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * uploads a file
   * 
   * @param appId ID of app
   * @param fileObj file extra data
   * @param key app key
   * @param fileToUpload file to upload
   * @return String
   */
  public String  saveFile (String appId, String fileObj, String key, File fileToUpload) throws ApiException {
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
    String localVarPath = "file/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    

    

    String[] localVarContentTypes = {
      "multipart/form-data"
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      
      if (key != null) {
        localVarBuilder.addTextBody("key", ApiInvoker.parameterToString(key), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (fileObj != null) {
        localVarBuilder.addTextBody("fileObj", ApiInvoker.parameterToString(fileObj), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (fileToUpload != null) {
        localVarBuilder.addBinaryBody("fileToUpload", fileToUpload);
      }
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
      localVarFormParams.put("key", ApiInvoker.parameterToString(key));
      localVarFormParams.put("fileObj", ApiInvoker.parameterToString(fileObj));
      
      
    }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (String) ApiInvoker.deserialize(localVarResponse, "", String.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * uploads a file with data
   * 
   * @param myAppId ID of app
   * @param fileObj file extra data
   * @return String
   */
  public String  saveFileData (String myAppId, FileBody fileObj) throws ApiException {
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
    String localVarPath = "file/{my_app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "my_app_id" + "\\}", apiInvoker.escapeString(myAppId.toString()));

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
        return (String) ApiInvoker.deserialize(localVarResponse, "", String.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
