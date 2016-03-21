package io.swagger.client.api

import io.swagger.client.model.CloudQueryCount
import io.swagger.client.model.CloudQueryDistinct
import io.swagger.client.model.CloudObject
import io.swagger.client.model.CloudQuery
import io.swagger.client.model.CloudQueryFindById
import io.swagger.client.model.CloudQueryFindOne
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class CloudQueryApi(val defBasePath: String = "http://api.cloudboost.io/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * count items in a table that match this query criteria
   * count items in a table that match this query criteria
   * @param appId CloudApp id 
   * @param tableName cloud table name 
   * @param body query body 
   * @return Integer
   */
  def count (appId: String, tableName: String, body: CloudQueryCount) : Option[Integer] = {
    // create path and map variables
    val path = "data/{app_id}/{table_name}/count".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    

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
   * distinct query criteria
   * 
   * @param appId CloudApp id 
   * @param tableName cloud table name 
   * @param body query body 
   * @return List[CloudObject]
   */
  def distinct (appId: String, tableName: String, body: CloudQueryDistinct) : Option[List[CloudObject]] = {
    // create path and map variables
    val path = "data/{app_id}/{table_name}/distinct".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    

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
           Some(ApiInvoker.deserialize(s, "array", classOf[CloudObject]).asInstanceOf[List[CloudObject]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * find CloudObject meeting this query criteria
   * 
   * @param appId CloudApp id 
   * @param tableName cloud table name 
   * @param body query object 
   * @return List[CloudObject]
   */
  def find (appId: String, tableName: String, body: CloudQuery) : Option[List[CloudObject]] = {
    // create path and map variables
    val path = "data/{app_id}/{table_name}/find".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    

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
           Some(ApiInvoker.deserialize(s, "array", classOf[CloudObject]).asInstanceOf[List[CloudObject]])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * find CloudObject with specific _id
   * 
   * @param cloudAppId CloudApp id 
   * @param tableName cloud table name 
   * @param body query body 
   * @return CloudObject
   */
  def findById (cloudAppId: String, tableName: String, body: CloudQueryFindById) : Option[CloudObject] = {
    // create path and map variables
    val path = "data/{cloud_app_id}/{table_name}/find".replaceAll("\\{format\\}","json").replaceAll("\\{" + "cloud_app_id" + "\\}",apiInvoker.escape(cloudAppId))

    .replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudObject]).asInstanceOf[CloudObject])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * find a single CloudObject
   * 
   * @param appId CloudApp id 
   * @param tableName cloud table name 
   * @param body query body 
   * @return CloudObject
   */
  def findOne (appId: String, tableName: String, body: CloudQueryFindOne) : Option[CloudObject] = {
    // create path and map variables
    val path = "data/{app_id}/{table_name}/findOne".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudObject]).asInstanceOf[CloudObject])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
