package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.UserRoleBody;
import io.cloudboost.model.CloudUser;
import io.cloudboost.model.PasswordChangeBody;
import io.cloudboost.model.UserBody;
import io.cloudboost.model.EmailBody;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudUserApi {
  private ApiClient apiClient;

  public CloudUserApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudUserApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * add a user to a role
   * 
   * @param appId ID of app (required)
   * @param body request body (required)
   * @return CloudUser
   * @throws ApiException if fails to make API call
   */
  public CloudUser addToRole(String appId, UserRoleBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling addToRole");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling addToRole");
    }
    
    // create path and map variables
    String localVarPath = "user/{app_id}/addToRole".replaceAll("\\{format\\}","json")
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

    
    GenericType<CloudUser> localVarReturnType = new GenericType<CloudUser>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * change a password
   * changes the password for a logged in user without logging them out
   * @param appId ID of app (required)
   * @param body request body (required)
   * @return CloudUser
   * @throws ApiException if fails to make API call
   */
  public CloudUser changePassword(String appId, PasswordChangeBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling changePassword");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling changePassword");
    }
    
    // create path and map variables
    String localVarPath = "user/{app_id}/changePassword".replaceAll("\\{format\\}","json")
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

    
    GenericType<CloudUser> localVarReturnType = new GenericType<CloudUser>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * login existing user
   * 
   * @param appId ID of app (required)
   * @param body request body (required)
   * @return CloudUser
   * @throws ApiException if fails to make API call
   */
  public CloudUser login(String appId, UserBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling login");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling login");
    }
    
    // create path and map variables
    String localVarPath = "user/{app_id}/login".replaceAll("\\{format\\}","json")
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

    
    GenericType<CloudUser> localVarReturnType = new GenericType<CloudUser>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * logout user
   * 
   * @param appId ID of app (required)
   * @param body request body (required)
   * @return CloudUser
   * @throws ApiException if fails to make API call
   */
  public CloudUser logout(String appId, UserBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling logout");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling logout");
    }
    
    // create path and map variables
    String localVarPath = "user/{app_id}/logout".replaceAll("\\{format\\}","json")
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

    
    GenericType<CloudUser> localVarReturnType = new GenericType<CloudUser>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * remove a user from a role
   * 
   * @param appId ID of app (required)
   * @param body request body (required)
   * @return CloudUser
   * @throws ApiException if fails to make API call
   */
  public CloudUser removeFromRole(String appId, UserRoleBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling removeFromRole");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling removeFromRole");
    }
    
    // create path and map variables
    String localVarPath = "user/{app_id}/removeFromRole".replaceAll("\\{format\\}","json")
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

    
    GenericType<CloudUser> localVarReturnType = new GenericType<CloudUser>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * reset a password
   * sends a password reset link to the given email
   * @param appId ID of app (required)
   * @param body request body (required)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String resetPassword(String appId, EmailBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling resetPassword");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling resetPassword");
    }
    
    // create path and map variables
    String localVarPath = "user/{app_id}/resetPassword".replaceAll("\\{format\\}","json")
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

    
    GenericType<String> localVarReturnType = new GenericType<String>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * create a new user
   * 
   * @param appId ID of app (required)
   * @param body request body (required)
   * @return CloudUser
   * @throws ApiException if fails to make API call
   */
  public CloudUser signUp(String appId, UserBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling signUp");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling signUp");
    }
    
    // create path and map variables
    String localVarPath = "user/{app_id}/signup".replaceAll("\\{format\\}","json")
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

    
    GenericType<CloudUser> localVarReturnType = new GenericType<CloudUser>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
}
