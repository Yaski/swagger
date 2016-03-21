package io.swagger.client.api

import io.swagger.client.model.KeyBody
import java.io.File
import io.swagger.client.model.FileBody
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class CloudFileApi(val defBasePath: String = "http://api.cloudboost.io/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * deletes file
   * 
   * @param appId ID of app 
   * @param fileId file id 
   * @param body request body (optional)
   * @return String
   */
  def deleteFile (appId: String, fileId: String, body: KeyBody) : Option[String] = {
    // create path and map variables
    val path = "file/{app_id}/{file_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "file_id" + "\\}",apiInvoker.escape(fileId))

    

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
   * fetch file content
   * 
   * @param appId ID of app 
   * @param fileId file id 
   * @param body request body (optional)
   * @return String
   */
  def fetchFileContent (appId: String, fileId: String, body: KeyBody) : Option[String] = {
    // create path and map variables
    val path = "file/{app_id}/{file_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    .replaceAll("\\{" + "file_id" + "\\}",apiInvoker.escape(fileId))

    

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
   * uploads a file
   * 
   * @param appId ID of app 
   * @param fileObj file extra data 
   * @param key app key (optional)
   * @param fileToUpload file to upload (optional)
   * @return String
   */
  def saveFile (appId: String, fileObj: String, key: String, fileToUpload: File) : Option[String] = {
    // create path and map variables
    val path = "file/{app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

    val contentTypes = List("multipart/form-data", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      mp.field("key", key.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("fileObj", fileObj.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("fileToUpload", file.getName)
      mp.bodyPart(new FileDataBodyPart("fileToUpload", fileToUpload, MediaType.MULTIPART_FORM_DATA_TYPE))
      
      postBody = mp
    }
    else {
      formParams += "key" -> key.toString()
      formParams += "fileObj" -> fileObj.toString()
      
      
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
   * uploads a file with data
   * 
   * @param myAppId ID of app 
   * @param fileObj file extra data 
   * @return String
   */
  def saveFileData (myAppId: String, fileObj: FileBody) : Option[String] = {
    // create path and map variables
    val path = "file/{my_app_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "my_app_id" + "\\}",apiInvoker.escape(myAppId))

    

    val contentTypes = List("application/json", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = fileObj

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
  
}
