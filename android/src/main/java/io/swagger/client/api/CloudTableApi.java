package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.CloudTableSave;
import io.swagger.client.model.CloudTable;
import io.swagger.client.model.KeyBody;

import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class CloudTableApi {
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
   * 
   * delete a cloud table
   * @param tableName name of cloud table
   * @param appId cloud app id
   * @param body master key and app id
   * @return CloudTable
   */
  public CloudTable  deleteTable (String tableName, String appId, CloudTableSave body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling deleteTable");
    }
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteTable");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling deleteTable");
    }
    

    // create path and map variables
    String localVarPath = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString())).replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

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
        return (CloudTable) ApiInvoker.deserialize(localVarResponse, "", CloudTable.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * 
   * get a table
   * @param tableName name of cloud table
   * @param appId id of app
   * @param body master key and app id
   * @return CloudTable
   */
  public CloudTable  get (String tableName, String appId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling get");
    }
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling get");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling get");
    }
    

    // create path and map variables
    String localVarPath = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString())).replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

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
        return (CloudTable) ApiInvoker.deserialize(localVarResponse, "", CloudTable.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * 
   * get all tables in app
   * @param appId app id
   * @param body master key
   * @return void
   */
  public void  getAll (String appId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling getAll");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling getAll");
    }
    

    // create path and map variables
    String localVarPath = "/app/{app_id}/_getAll".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

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
        return ;
      }
      else {
        return ;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * 
   * save a cloud table
   * @param tableName name of cloud table
   * @param appId cloud app id
   * @param body master key and app id
   * @return CloudTable
   */
  public CloudTable  save (String tableName, String appId, CloudTableSave body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
       throw new ApiException(400, "Missing the required parameter 'tableName' when calling save");
    }
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
       throw new ApiException(400, "Missing the required parameter 'appId' when calling save");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
       throw new ApiException(400, "Missing the required parameter 'body' when calling save");
    }
    

    // create path and map variables
    String localVarPath = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "table_name" + "\\}", apiInvoker.escapeString(tableName.toString())).replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

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
        return (CloudTable) ApiInvoker.deserialize(localVarResponse, "", CloudTable.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
