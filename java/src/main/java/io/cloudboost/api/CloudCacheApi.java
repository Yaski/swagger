package io.cloudboost.api;

import com.sun.jersey.api.client.GenericType;

import io.cloudboost.ApiException;
import io.cloudboost.ApiClient;
import io.cloudboost.Configuration;
import io.cloudboost.Pair;

import io.cloudboost.model.KeyBody;
import io.cloudboost.model.CacheRequest;
import io.cloudboost.model.Cache;
import io.cloudboost.model.CacheItem;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudCacheApi {
  private ApiClient apiClient;

  public CloudCacheApi() {
    this(Configuration.getDefaultApiClient());
  }

  public CloudCacheApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * clear all items from a cloud cache
   * clear all items from a cloud cache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param body master key of app (required)
   * @return List<CacheRequest>
   * @throws ApiException if fails to make API call
   */
  public List<CacheRequest> clearCache(String appId, String cacheName, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling clearCache");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling clearCache");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling clearCache");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}/clear".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()));

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

    
    GenericType<List<CacheRequest>> localVarReturnType = new GenericType<List<CacheRequest>>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * create a cloud cache
   * create a cloud cache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param body master key of app (required)
   * @return Cache
   * @throws ApiException if fails to make API call
   */
  public Cache createCache(String appId, String cacheName, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling createCache");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling createCache");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling createCache");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}/create".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()));

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

    
    GenericType<Cache> localVarReturnType = new GenericType<Cache>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * delete all CloudCaches
   * delete all CloudCaches
   * @param appId Id of CloudApp (required)
   * @param body master key of app (required)
   * @return List<CacheRequest>
   * @throws ApiException if fails to make API call
   */
  public List<CacheRequest> deleteAllCache(String appId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteAllCache");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling deleteAllCache");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}".replaceAll("\\{format\\}","json")
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

    
    GenericType<List<CacheRequest>> localVarReturnType = new GenericType<List<CacheRequest>>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * delete a CloudCache
   * delete a CloudCache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param body master key of app (required)
   * @return CacheRequest
   * @throws ApiException if fails to make API call
   */
  public CacheRequest deleteCache(String appId, String cacheName, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteCache");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling deleteCache");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling deleteCache");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()));

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

    
    GenericType<CacheRequest> localVarReturnType = new GenericType<CacheRequest>() {};
    return apiClient.invokeAPI(localVarPath, "DELETE", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * delete item from a cloud cache
   * delete item from a cloud cache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param dataKey key under which data to delete is cached (required)
   * @param body master key of app (required)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String deleteItem(String appId, String cacheName, String dataKey, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling deleteItem");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling deleteItem");
    }
    
    // verify the required parameter 'dataKey' is set
    if (dataKey == null) {
      throw new ApiException(400, "Missing the required parameter 'dataKey' when calling deleteItem");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling deleteItem");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}/item/{data_key}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()))
      .replaceAll("\\{" + "data_key" + "\\}", apiClient.escapeString(dataKey.toString()));

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
   * get all CloudCaches
   * get all CloudCaches
   * @param appId Id of CloudApp (required)
   * @param body master key of app (required)
   * @return List<Cache>
   * @throws ApiException if fails to make API call
   */
  public List<Cache> getAllCache(String appId, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling getAllCache");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling getAllCache");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}".replaceAll("\\{format\\}","json")
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

    
    GenericType<List<Cache>> localVarReturnType = new GenericType<List<Cache>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * get all items from a cloud cache
   * get all items from a cloud cache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param body master key of app (required)
   * @return List<CacheItem>
   * @throws ApiException if fails to make API call
   */
  public List<CacheItem> getAllItems(String appId, String cacheName, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling getAllItems");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling getAllItems");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling getAllItems");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}/items".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()));

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

    
    GenericType<List<CacheItem>> localVarReturnType = new GenericType<List<CacheItem>>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * get info about a CloudCache
   * get info about a CloudCache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param body master key of app (required)
   * @return Cache
   * @throws ApiException if fails to make API call
   */
  public Cache getCacheInfo(String appId, String cacheName, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling getCacheInfo");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling getCacheInfo");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling getCacheInfo");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()));

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

    
    GenericType<Cache> localVarReturnType = new GenericType<Cache>() {};
    return apiClient.invokeAPI(localVarPath, "POST", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
  /**
   * get item from a cloud cache
   * get item from a cloud cache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param dataKey key under which data should be got in cache (required)
   * @param body master key of app (required)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String getItem(String appId, String cacheName, String dataKey, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling getItem");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling getItem");
    }
    
    // verify the required parameter 'dataKey' is set
    if (dataKey == null) {
      throw new ApiException(400, "Missing the required parameter 'dataKey' when calling getItem");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling getItem");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}/{data_key}/item".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()))
      .replaceAll("\\{" + "data_key" + "\\}", apiClient.escapeString(dataKey.toString()));

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
   * count items in a cloud cache
   * count items in a cloud cache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param body master key of app (required)
   * @return Integer
   * @throws ApiException if fails to make API call
   */
  public Integer getItemsCount(String appId, String cacheName, KeyBody body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling getItemsCount");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling getItemsCount");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling getItemsCount");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}/items/count".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()));

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
   * add item to a cloud cache
   * add item to a cloud cache
   * @param appId Id of CloudApp (required)
   * @param cacheName Name of cache (required)
   * @param dataKey key under which data should be store in cache (required)
   * @param body cache data and master key included got from this object (required)
   * @return String
   * @throws ApiException if fails to make API call
   */
  public String set(String appId, String cacheName, String dataKey, CacheRequest body) throws ApiException {
    Object localVarPostBody = body;
    
    // verify the required parameter 'appId' is set
    if (appId == null) {
      throw new ApiException(400, "Missing the required parameter 'appId' when calling set");
    }
    
    // verify the required parameter 'cacheName' is set
    if (cacheName == null) {
      throw new ApiException(400, "Missing the required parameter 'cacheName' when calling set");
    }
    
    // verify the required parameter 'dataKey' is set
    if (dataKey == null) {
      throw new ApiException(400, "Missing the required parameter 'dataKey' when calling set");
    }
    
    // verify the required parameter 'body' is set
    if (body == null) {
      throw new ApiException(400, "Missing the required parameter 'body' when calling set");
    }
    
    // create path and map variables
    String localVarPath = "cache/{app_id}/{cache_name}/{data_key}".replaceAll("\\{format\\}","json")
      .replaceAll("\\{" + "app_id" + "\\}", apiClient.escapeString(appId.toString()))
      .replaceAll("\\{" + "cache_name" + "\\}", apiClient.escapeString(cacheName.toString()))
      .replaceAll("\\{" + "data_key" + "\\}", apiClient.escapeString(dataKey.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    Map<String, Object> localVarFormParams = new HashMap<String, Object>();

    

    

    

    final String[] localVarAccepts = {
      "application/json", "text/plain;charset=utf-8"
    };
    final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);

    final String[] localVarContentTypes = {
      "application/json"
    };
    final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);

    String[] localVarAuthNames = new String[] {  };

    
    GenericType<String> localVarReturnType = new GenericType<String>() {};
    return apiClient.invokeAPI(localVarPath, "PUT", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAccept, localVarContentType, localVarAuthNames, localVarReturnType);
    
  }
  
}
