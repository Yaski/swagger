package io.swagger.client.api

import io.swagger.client.model.KeyBody
import io.swagger.client.model.CacheRequest
import io.swagger.client.model.Cache
import io.swagger.client.model.CacheItem
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudCacheApi {

  /**
   * clear all items from a cloud cache
   * 
   * Expected answers:
   *   code 200 : Seq[CacheRequest] (successfully cleared cache)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   */
  def clearCache(appId: String, cacheName: String, body: KeyBody): ApiRequest[Seq[CacheRequest]] =
    ApiRequest[Seq[CacheRequest]](ApiMethods.DELETE, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}/clear", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withSuccessResponse[Seq[CacheRequest]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * create a cloud cache
   * 
   * Expected answers:
   *   code 200 : Cache (successfully created a cache)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   */
  def createCache(appId: String, cacheName: String, body: KeyBody): ApiRequest[Cache] =
    ApiRequest[Cache](ApiMethods.POST, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}/create", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withSuccessResponse[Cache](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * delete all CloudCaches
   * 
   * Expected answers:
   *   code 200 : Seq[CacheRequest] (successfully deleted caches)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param body master key of app
   */
  def deleteAllCache(appId: String, body: KeyBody): ApiRequest[Seq[CacheRequest]] =
    ApiRequest[Seq[CacheRequest]](ApiMethods.DELETE, "http://api.cloudboost.io/", "cache/{app_id}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[Seq[CacheRequest]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * delete a CloudCache
   * 
   * Expected answers:
   *   code 200 : CacheRequest (successfully deleted cache)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   */
  def deleteCache(appId: String, cacheName: String, body: KeyBody): ApiRequest[CacheRequest] =
    ApiRequest[CacheRequest](ApiMethods.DELETE, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withSuccessResponse[CacheRequest](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * delete item from a cloud cache
   * 
   * Expected answers:
   *   code 200 : String (successfully removed item from cache, returned is deleted item key)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param dataKey key under which data to delete is cached
   * @param body master key of app
   */
  def deleteItem(appId: String, cacheName: String, dataKey: String, body: KeyBody): ApiRequest[String] =
    ApiRequest[String](ApiMethods.DELETE, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}/item/{data_key}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withPathParam("data_key", dataKey)
      .withSuccessResponse[String](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get all CloudCaches
   * 
   * Expected answers:
   *   code 200 : Seq[Cache] (successfully got caches)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param body master key of app
   */
  def getAllCache(appId: String, body: KeyBody): ApiRequest[Seq[Cache]] =
    ApiRequest[Seq[Cache]](ApiMethods.POST, "http://api.cloudboost.io/", "cache/{app_id}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[Seq[Cache]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get all items from a cloud cache
   * 
   * Expected answers:
   *   code 200 : Seq[CacheItem] (successfully got items from cache)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   */
  def getAllItems(appId: String, cacheName: String, body: KeyBody): ApiRequest[Seq[CacheItem]] =
    ApiRequest[Seq[CacheItem]](ApiMethods.POST, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}/items", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withSuccessResponse[Seq[CacheItem]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get info about a CloudCache
   * 
   * Expected answers:
   *   code 200 : Cache (successfully got cache info)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   */
  def getCacheInfo(appId: String, cacheName: String, body: KeyBody): ApiRequest[Cache] =
    ApiRequest[Cache](ApiMethods.POST, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withSuccessResponse[Cache](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get item from a cloud cache
   * 
   * Expected answers:
   *   code 200 : String (successfully got item from cache)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param dataKey key under which data should be got in cache
   * @param body master key of app
   */
  def getItem(appId: String, cacheName: String, dataKey: String, body: KeyBody): ApiRequest[String] =
    ApiRequest[String](ApiMethods.POST, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}/{data_key}/item", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withPathParam("data_key", dataKey)
      .withSuccessResponse[String](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * count items in a cloud cache
   * 
   * Expected answers:
   *   code 200 : Int (item count)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param body master key of app
   */
  def getItemsCount(appId: String, cacheName: String, body: KeyBody): ApiRequest[Int] =
    ApiRequest[Int](ApiMethods.POST, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}/items/count", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withSuccessResponse[Int](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * add item to a cloud cache
   * 
   * Expected answers:
   *   code 200 : String (successfully added to cache)
   *   code 0 :  (unexpected error)
   * 
   * @param appId Id of CloudApp
   * @param cacheName Name of cache
   * @param dataKey key under which data should be store in cache
   * @param body cache data and master key included got from this object
   */
  def set(appId: String, cacheName: String, dataKey: String, body: CacheRequest): ApiRequest[String] =
    ApiRequest[String](ApiMethods.PUT, "http://api.cloudboost.io/", "cache/{app_id}/{cache_name}/{data_key}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("cache_name", cacheName)
      .withPathParam("data_key", dataKey)
      .withSuccessResponse[String](200)
      .withDefaultErrorResponse[Unit]
      


}

