package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.CloudQueryCount;
import io.cloudboost.model.CloudQueryDistinct;
import io.cloudboost.model.CloudObject;
import io.cloudboost.model.CloudQuery;
import io.cloudboost.model.CloudQueryFindById;
import io.cloudboost.model.CloudQueryFindOne;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudQueryApi {
  private ApiClient apiClient;

  public CloudQueryApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudQueryApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * count items in a table that match this query criteria
   * count items in a table that match this query criteria
   * @param appId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body query body (required)
   * @return Integer
   * @throws ApiException if fails to make API call
   */
  public Integer count(String appId, String tableName, CloudQueryCount body) throws ApiException {
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
    String localVarPath = "data/{app_id}/{table_name}/count".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()));

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

    
    GenericType<Integer> localVarReturnType = new GenericType<Integer>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * distinct query criteria
   * 
   * @param appId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body query body (required)
   * @return List<CloudObject>
   * @throws ApiException if fails to make API call
   */
  public List<CloudObject> distinct(String appId, String tableName, CloudQueryDistinct body) throws ApiException {
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
    String localVarPath = "data/{app_id}/{table_name}/distinct".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()));

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

    
    GenericType<List<CloudObject>> localVarReturnType = new GenericType<List<CloudObject>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * find CloudObject meeting this query criteria
   * 
   * @param appId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body query object (required)
   * @return List<CloudObject>
   * @throws ApiException if fails to make API call
   */
  public List<CloudObject> find(String appId, String tableName, CloudQuery body) throws ApiException {
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
    String localVarPath = "data/{app_id}/{table_name}/find".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()));

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

    
    GenericType<List<CloudObject>> localVarReturnType = new GenericType<List<CloudObject>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * find CloudObject with specific _id
   * 
   * @param cloudAppId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body query body (required)
   * @return CloudObject
   * @throws ApiException if fails to make API call
   */
  public CloudObject findById(String cloudAppId, String tableName, CloudQueryFindById body) throws ApiException {
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
    String localVarPath = "data/{cloud_app_id}/{table_name}/find".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "cloud_app_id" + "\\}", apiClient.escapeString(cloudAppId.toString()))
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()));

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

    
    GenericType<CloudObject> localVarReturnType = new GenericType<CloudObject>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * find a single CloudObject
   * 
   * @param appId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body query body (required)
   * @return CloudObject
   * @throws ApiException if fails to make API call
   */
  public CloudObject findOne(String appId, String tableName, CloudQueryFindOne body) throws ApiException {
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
    String localVarPath = "data/{app_id}/{table_name}/findOne".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()));

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

    
    GenericType<CloudObject> localVarReturnType = new GenericType<CloudObject>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
}
