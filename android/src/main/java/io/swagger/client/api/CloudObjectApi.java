package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.CloudObject;
import io.swagger.client.model.CloudObjectSaveRequest;

import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class CloudObjectApi {
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
   * deletes a cloud object from cloudapp
   * deletes a cloud object from cloudapp
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body CloudObject that needs to be added to the cloudboost
   * @return CloudObject
   */
  public CloudObject  delete (String appId, String tableName, CloudObjectSaveRequest body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling delete");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling delete");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling delete");
    }
    

    // create path and map variables
    String localVarPath = "data/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString()));

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
        return (CloudObject) ApiInvoker.deserialize(localVarResponse, "", CloudObject.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * saves a cloud object to cloudboost
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body CloudObject that needs to be added to cloudboost
   * @return CloudObject
   */
  public CloudObject  save (String appId, String tableName, CloudObjectSaveRequest body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling save");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling save");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling save");
    }
    

    // create path and map variables
    String localVarPath = "data/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString()));

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
        return (CloudObject) ApiInvoker.deserialize(localVarResponse, "", CloudObject.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
