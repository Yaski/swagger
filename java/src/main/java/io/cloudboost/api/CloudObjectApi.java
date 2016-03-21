package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.CloudObject;
import io.cloudboost.model.CloudObjectSaveRequest;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudObjectApi {
  private ApiClient apiClient;

  public CloudObjectApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudObjectApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * deletes a cloud object from cloudapp
   * deletes a cloud object from cloudapp
   * @param appId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body CloudObject that needs to be added to the cloudboost (required)
   * @return CloudObject
   * @throws ApiException if fails to make API call
   */
  public CloudObject delete(String appId, String tableName, CloudObjectSaveRequest body) throws ApiException {
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
    String localVarPath = "data/{app_id}/{table_name}".replaceAll("\\{format\\}","json")
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
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * saves a cloud object to cloudboost
   * 
   * @param appId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body CloudObject that needs to be added to cloudboost (required)
   * @return CloudObject
   * @throws ApiException if fails to make API call
   */
  public CloudObject save(String appId, String tableName, CloudObjectSaveRequest body) throws ApiException {
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
    String localVarPath = "data/{app_id}/{table_name}".replaceAll("\\{format\\}","json")
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
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
}
