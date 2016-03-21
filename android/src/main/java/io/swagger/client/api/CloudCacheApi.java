package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.KeyBody;
import io.swagger.client.model.CacheRequest;
import io.swagger.client.model.Cache;
import io.swagger.client.model.CacheItem;

import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class CloudCacheApi {
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
   * clear all items from a cloud cache
   * clear all items from a cloud cache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   * @return List<CacheRequest>
   */
  public List<CacheRequest>  clearCache (String appId, String cacheName, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}/clear".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString()));

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
        return (List<CacheRequest>) ApiInvoker.deserialize(localVarResponse, "array", CacheRequest.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * create a cloud cache
   * create a cloud cache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   * @return Cache
   */
  public Cache  createCache (String appId, String cacheName, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}/create".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString()));

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
        return (Cache) ApiInvoker.deserialize(localVarResponse, "", Cache.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * delete all CloudCaches
   * delete all CloudCaches
   * @param appId Id of CloudApp
   * @param body master key of app
   * @return List<CacheRequest>
   */
  public List<CacheRequest>  deleteAllCache (String appId, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

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
        return (List<CacheRequest>) ApiInvoker.deserialize(localVarResponse, "array", CacheRequest.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * delete a CloudCache
   * delete a CloudCache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   * @return CacheRequest
   */
  public CacheRequest  deleteCache (String appId, String cacheName, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString()));

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
        return (CacheRequest) ApiInvoker.deserialize(localVarResponse, "", CacheRequest.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * delete item from a cloud cache
   * delete item from a cloud cache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param dataKey key under which data to delete is cached
   * @param body master key of app
   * @return String
   */
  public String  deleteItem (String appId, String cacheName, String dataKey, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}/item/{data_key}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString())).replaceAll("\\{" + "data_key" + "\\}", apiInvoker.escapeString(dataKey.toString()));

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
   * get all CloudCaches
   * get all CloudCaches
   * @param appId Id of CloudApp
   * @param body master key of app
   * @return List<Cache>
   */
  public List<Cache>  getAllCache (String appId, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString()));

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
        return (List<Cache>) ApiInvoker.deserialize(localVarResponse, "array", Cache.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * get all items from a cloud cache
   * get all items from a cloud cache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   * @return List<CacheItem>
   */
  public List<CacheItem>  getAllItems (String appId, String cacheName, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}/items".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString()));

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
        return (List<CacheItem>) ApiInvoker.deserialize(localVarResponse, "array", CacheItem.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * get info about a CloudCache
   * get info about a CloudCache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   * @return Cache
   */
  public Cache  getCacheInfo (String appId, String cacheName, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString()));

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
        return (Cache) ApiInvoker.deserialize(localVarResponse, "", Cache.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * get item from a cloud cache
   * get item from a cloud cache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param dataKey key under which data should be got in cache
   * @param body master key of app
   * @return String
   */
  public String  getItem (String appId, String cacheName, String dataKey, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}/{data_key}/item".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString())).replaceAll("\\{" + "data_key" + "\\}", apiInvoker.escapeString(dataKey.toString()));

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
   * count items in a cloud cache
   * count items in a cloud cache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   * @return Integer
   */
  public Integer  getItemsCount (String appId, String cacheName, KeyBody body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}/items/count".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString()));

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
   * add item to a cloud cache
   * add item to a cloud cache
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param dataKey key under which data should be store in cache
   * @param body cache data and master key included got from this object
   * @return String
   */
  public String  set (String appId, String cacheName, String dataKey, CacheRequest body) throws ApiException {
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
    String localVarPath = "cache/{app_id}/{cache_name}/{data_key}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}", apiInvoker.escapeString(appId.toString())).replaceAll("\\{" + "cache_name" + "\\}", apiInvoker.escapeString(cacheName.toString())).replaceAll("\\{" + "data_key" + "\\}", apiInvoker.escapeString(dataKey.toString()));

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
