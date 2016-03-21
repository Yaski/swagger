package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.CloudQueryCount;
import io.swagger.client.model.CloudQueryDistinct;
import io.swagger.client.model.CloudObject;
import io.swagger.client.model.CloudQuery;
import io.swagger.client.model.CloudQueryFindById;
import io.swagger.client.model.CloudQueryFindOne;

import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class CloudQueryApi {
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
   * count items in a table that match this query criteria
   * count items in a table that match this query criteria
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   * @return Integer
   */
  public Integer  count (String appId, String tableName, CloudQueryCount body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling count");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling count");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling count");
    }
    

    // create path and map variables
    String localVarPath = "data/{app_id}/{table_name}/count".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString()));

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
        return (Integer) ApiInvoker.deserialize(localVarResponse, "", Integer.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * distinct query criteria
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   * @return List<CloudObject>
   */
  public List<CloudObject>  distinct (String appId, String tableName, CloudQueryDistinct body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling distinct");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling distinct");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling distinct");
    }
    

    // create path and map variables
    String localVarPath = "data/{app_id}/{table_name}/distinct".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString()));

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
        return (List<CloudObject>) ApiInvoker.deserialize(localVarResponse, "array", CloudObject.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * find CloudObject meeting this query criteria
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query object
   * @return List<CloudObject>
   */
  public List<CloudObject>  find (String appId, String tableName, CloudQuery body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling find");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling find");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling find");
    }
    

    // create path and map variables
    String localVarPath = "data/{app_id}/{table_name}/find".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString()));

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
        return (List<CloudObject>) ApiInvoker.deserialize(localVarResponse, "array", CloudObject.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * find CloudObject with specific _id
   * 
   * @param cloudAppId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   * @return CloudObject
   */
  public CloudObject  findById (String cloudAppId, String tableName, CloudQueryFindById body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'cloudAppId' is set
    if (cloudAppId == null) {
       throw new ApiException(400, "Missing the required parameter 'cloudAppId' when calling findById");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling findById");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling findById");
    }
    

    // create path and map variables
    String localVarPath = "data/{cloud_app_id}/{table_name}/find".replaceAll("\\{format\\}","json").replaceAll("\\{" + "cloud_app_id" + "\\}", apiInvoker.escapeString(cloudAppId.toString())).replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString()));

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
   * find a single CloudObject
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   * @return CloudObject
   */
  public CloudObject  findOne (String appId, String tableName, CloudQueryFindOne body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling findOne");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling findOne");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling findOne");
    }
    

    // create path and map variables
    String localVarPath = "data/{app_id}/{table_name}/findOne".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString()));

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
