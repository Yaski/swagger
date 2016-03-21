package io.swagger.client.api

import io.swagger.client.model.CloudObject
import io.swagger.client.model.CloudSearch
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class CloudSearchApi(val defBasePath: String = "http://api.cloudboost.io/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * search for cloudobjects following the criteria defined herein
   * 
   * @param appId CloudApp id 
   * @param tableName cloud table name 
   * @param body query body 
   * @return List[CloudObject]
   */
  def search (appId: String, tableName: String, body: CloudSearch) : Option[List[CloudObject]] = {
    // create path and map variables
    val path = "data/{app_id}/{table_name}/search".replaceAll("\\{format\\}","json").replaceAll("\\{" + "app_id" + "\\}",apiInvoker.escape(appId))

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
  
}
