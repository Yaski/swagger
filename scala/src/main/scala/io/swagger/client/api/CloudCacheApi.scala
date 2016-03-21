package io.swagger.client.api

import io.swagger.client.model.KeyBody
import io.swagger.client.model.CacheRequest
import io.swagger.client.model.Cache
import io.swagger.client.model.CacheItem
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class CloudCacheApi(val defBasePath: String = "http://api.cloudboost.io/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * clear all items from a cloud cache
   * clear all items from a cloud cache
   * @param appId Id of CloudApp 
   * @param cacheName Name of cache 
   * @param body master key of app 
   * @return List[CacheRequest]
   */
  def clearCache (appId: String, cacheName: String, body: KeyBody) : Option[List[CacheRequest]] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}/clear".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[CacheRequest]).asInstanceOf[List[CacheRequest]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
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
  def createCache (appId: String, cacheName: String, body: KeyBody) : Option[Cache] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}/create".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Cache]).asInstanceOf[Cache])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * delete all CloudCaches
   * delete all CloudCaches
   * @param appId Id of CloudApp 
   * @param body master key of app 
   * @return List[CacheRequest]
   */
  def deleteAllCache (appId: String, body: KeyBody) : Option[List[CacheRequest]] = {
    // create path and map variables
    val path = "cache/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[CacheRequest]).asInstanceOf[List[CacheRequest]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
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
  def deleteCache (appId: String, cacheName: String, body: KeyBody) : Option[CacheRequest] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[CacheRequest]).asInstanceOf[CacheRequest])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
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
  def deleteItem (appId: String, cacheName: String, dataKey: String, body: KeyBody) : Option[String] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}/item/{data_key}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    .replaceAll("\\{" + "data_key" + "\\}",apiInvoker.escape(dataKey))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[String]).asInstanceOf[String])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * get all CloudCaches
   * get all CloudCaches
   * @param appId Id of CloudApp 
   * @param body master key of app 
   * @return List[Cache]
   */
  def getAllCache (appId: String, body: KeyBody) : Option[List[Cache]] = {
    // create path and map variables
    val path = "cache/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[Cache]).asInstanceOf[List[Cache]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * get all items from a cloud cache
   * get all items from a cloud cache
   * @param appId Id of CloudApp 
   * @param cacheName Name of cache 
   * @param body master key of app 
   * @return List[CacheItem]
   */
  def getAllItems (appId: String, cacheName: String, body: KeyBody) : Option[List[CacheItem]] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}/items".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "array", classOf[CacheItem]).asInstanceOf[List[CacheItem]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
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
  def getCacheInfo (appId: String, cacheName: String, body: KeyBody) : Option[Cache] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Cache]).asInstanceOf[Cache])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
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
  def getItem (appId: String, cacheName: String, dataKey: String, body: KeyBody) : Option[String] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}/{data_key}/item".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    .replaceAll("\\{" + "data_key" + "\\}",apiInvoker.escape(dataKey))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[String]).asInstanceOf[String])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
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
  def getItemsCount (appId: String, cacheName: String, body: KeyBody) : Option[Integer] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}/items/count".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Integer]).asInstanceOf[Integer])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
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
  def set (appId: String, cacheName: String, dataKey: String, body: CacheRequest) : Option[String] = {
    // create path and map variables
    val path = "cache/{app_id}/{cache_name}/{data_key}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "cache_name" + "\\}",apiInvoker.escape(cacheName))

    .replaceAll("\\{" + "data_key" + "\\}",apiInvoker.escape(dataKey))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = body

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[String]).asInstanceOf[String])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
