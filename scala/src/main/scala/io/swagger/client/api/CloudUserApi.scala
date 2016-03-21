package io.swagger.client.api

import io.swagger.client.model.UserRoleBody
import io.swagger.client.model.CloudUser
import io.swagger.client.model.PasswordChangeBody
import io.swagger.client.model.UserBody
import io.swagger.client.model.EmailBody
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class CloudUserApi(val defBasePath: String = "http://api.cloudboost.io/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * add a user to a role
   * 
   * @param appId ID of app 
   * @param body request body 
   * @return CloudUser
   */
  def addToRole (appId: String, body: UserRoleBody) : Option[CloudUser] = {
    // create path and map variables
    val path = "user/{app_id}/addToRole".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudUser]).asInstanceOf[CloudUser])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * change a password
   * changes the password for a logged in user without logging them out
   * @param appId ID of app 
   * @param body request body 
   * @return CloudUser
   */
  def changePassword (appId: String, body: PasswordChangeBody) : Option[CloudUser] = {
    // create path and map variables
    val path = "user/{app_id}/changePassword".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudUser]).asInstanceOf[CloudUser])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * login existing user
   * 
   * @param appId ID of app 
   * @param body request body 
   * @return CloudUser
   */
  def login (appId: String, body: UserBody) : Option[CloudUser] = {
    // create path and map variables
    val path = "user/{app_id}/login".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudUser]).asInstanceOf[CloudUser])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * logout user
   * 
   * @param appId ID of app 
   * @param body request body 
   * @return CloudUser
   */
  def logout (appId: String, body: UserBody) : Option[CloudUser] = {
    // create path and map variables
    val path = "user/{app_id}/logout".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudUser]).asInstanceOf[CloudUser])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * remove a user from a role
   * 
   * @param appId ID of app 
   * @param body request body 
   * @return CloudUser
   */
  def removeFromRole (appId: String, body: UserRoleBody) : Option[CloudUser] = {
    // create path and map variables
    val path = "user/{app_id}/removeFromRole".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudUser]).asInstanceOf[CloudUser])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * reset a password
   * sends a password reset link to the given email
   * @param appId ID of app 
   * @param body request body 
   * @return String
   */
  def resetPassword (appId: String, body: EmailBody) : Option[String] = {
    // create path and map variables
    val path = "user/{app_id}/resetPassword".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
   * create a new user
   * 
   * @param appId ID of app 
   * @param body request body 
   * @return CloudUser
   */
  def signUp (appId: String, body: UserBody) : Option[CloudUser] = {
    // create path and map variables
    val path = "user/{app_id}/signup".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[CloudUser]).asInstanceOf[CloudUser])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
