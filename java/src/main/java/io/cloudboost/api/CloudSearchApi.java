package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.CloudObject;
import io.cloudboost.model.CloudSearch;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudSearchApi {
  private ApiClient apiClient;

  public CloudSearchApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudSearchApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * search for cloudobjects following the criteria defined herein
   * 
   * @param appId CloudApp id (required)
   * @param tableName cloud table name (required)
   * @param body query body (required)
   * @return List<CloudObject>
   * @throws ApiException if fails to make API call
   */
  public List<CloudObject> search(String appId, String tableName, CloudSearch body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling search");
    }
    
    // verify the required parameter 'tableName' is set
    if (tableName == null) {
      throw new ApiException(400, "Missing the required parameter 'tableName' when calling search");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling search");
    }
    
    // create path and map variables
    String localVarPath = "data/{app_id}/{table_name}/search".replaceAll("\\{format\\}","json")
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
  
}
