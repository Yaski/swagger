package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.CloudTableSave;
import io.cloudboost.model.CloudTable;
import io.cloudboost.model.KeyBody;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudTableApi {
  private ApiClient apiClient;

  public CloudTableApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudTableApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * 
   * delete a cloud table
   * @param tableName name of cloud table (required)
   * @param appId cloud app id (required)
   * @param body master key and app id (required)
   * @return CloudTable
   * @throws ApiException if fails to make API call
   */
  public CloudTable deleteTable(String tableName, String appId, CloudTableSave body) throws ApiException {
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
    String localVarPath = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()))
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()));

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

    
    GenericType<CloudTable> localVarReturnType = new GenericType<CloudTable>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * 
   * get a table
   * @param tableName name of cloud table (required)
   * @param appId id of app (required)
   * @param body master key and app id (required)
   * @return CloudTable
   * @throws ApiException if fails to make API call
   */
  public CloudTable get(String tableName, String appId, KeyBody body) throws ApiException {
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
    String localVarPath = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()))
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()));

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

    
    GenericType<CloudTable> localVarReturnType = new GenericType<CloudTable>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * 
   * get all tables in app
   * @param appId app id (required)
   * @param body master key (required)
   * @throws ApiException if fails to make API call
   */
  public void getAll(String appId, KeyBody body) throws ApiException {
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
    String localVarPath = "/app/{app_id}/_getAll".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()));

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

    
    apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, null);
    
  }
  
  /**
   * 
   * save a cloud table
   * @param tableName name of cloud table (required)
   * @param appId cloud app id (required)
   * @param body master key and app id (required)
   * @return CloudTable
   * @throws ApiException if fails to make API call
   */
  public CloudTable save(String tableName, String appId, CloudTableSave body) throws ApiException {
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
    String localVarPath = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "table_name" + "\\}", apiClient.escapeString(tableName.toString()))
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()));

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

    
    GenericType<CloudTable> localVarReturnType = new GenericType<CloudTable>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
}
