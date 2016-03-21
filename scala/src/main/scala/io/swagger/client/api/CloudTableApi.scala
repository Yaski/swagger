package io.swagger.client.api

import io.swagger.client.model.CloudTableSave
import io.swagger.client.model.CloudTable
import io.swagger.client.model.KeyBody
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class CloudTableApi(val defBasePath: String = "http://api.cloudboost.io/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * 
   * delete a cloud table
   * @param tableName name of cloud table 
   * @param appId cloud app id 
   * @param body master key and app id 
   * @return CloudTable
   */
  def deleteTable (tableName: String, appId: String, body: CloudTableSave) : Option[CloudTable] = {
    // create path and map variables
    val path = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    .replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudTable]).asInstanceOf[CloudTable])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * get a table
   * @param tableName name of cloud table 
   * @param appId id of app 
   * @param body master key and app id 
   * @return CloudTable
   */
  def get (tableName: String, appId: String, body: KeyBody) : Option[CloudTable] = {
    // create path and map variables
    val path = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    .replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudTable]).asInstanceOf[CloudTable])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * get all tables in app
   * @param appId app id 
   * @param body master key 
   * @return void
   */
  def getAll (appId: String, body: KeyBody)  = {
    // create path and map variables
    val path = "/app/{app_id}/_getAll".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * save a cloud table
   * @param tableName name of cloud table 
   * @param appId cloud app id 
   * @param body master key and app id 
   * @return CloudTable
   */
  def save (tableName: String, appId: String, body: CloudTableSave) : Option[CloudTable] = {
    // create path and map variables
    val path = "app/{app_id}/{table_name}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "table_name" + "\\}",apiInvoker.escape(tableName))

    .replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudTable]).asInstanceOf[CloudTable])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
