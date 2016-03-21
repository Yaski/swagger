package io.swagger.client.api

import io.swagger.client.model.KeyBody
import java.io.File
import io.swagger.client.model.FileBody
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudFileApi {

  /**
   * 
   * Expected answers:
   *   code 200 : String (successful operation)
   * 
   * @param appId ID of app
   * @param fileId file id
   * @param body request body
   */
  def deleteFile(appId: String, fileId: String, body: Option[KeyBody] = None): ApiRequest[String] =
    ApiRequest[String](ApiMethods.DELETE, "http://api.cloudboost.io/", "file/{app_id}/{file_id}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("file_id", fileId)
      .withSuccessResponse[String](200)
      
  /**
   * 
   * Expected answers:
   *   code 200 : String (successful operation)
   * 
   * @param appId ID of app
   * @param fileId file id
   * @param body request body
   */
  def fetchFileContent(appId: String, fileId: String, body: Option[KeyBody] = None): ApiRequest[String] =
    ApiRequest[String](ApiMethods.POST, "http://api.cloudboost.io/", "file/{app_id}/{file_id}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("file_id", fileId)
      .withSuccessResponse[String](200)
      
  /**
   * 
   * Expected answers:
   *   code 200 : String (successful operation)
   * 
   * @param appId ID of app
   * @param fileObj file extra data
   * @param key app key
   * @param fileToUpload file to upload
   */
  def saveFile(appId: String, fileObj: String, key: Option[String] = None, fileToUpload: Option[File] = None): ApiRequest[String] =
    ApiRequest[String](ApiMethods.POST, "http://api.cloudboost.io/", "file/{app_id}", "multipart/form-data")
      .withFormParam("key", key)
      .withFormParam("fileObj", fileObj)
      .withFormParam("fileToUpload", fileToUpload)
      .withPathParam("app_id", appId)
      .withSuccessResponse[String](200)
      
  /**
   * 
   * Expected answers:
   *   code 200 : String (successful operation)
   * 
   * @param myAppId ID of app
   * @param fileObj file extra data
   */
  def saveFileData(myAppId: String, fileObj: FileBody): ApiRequest[String] =
    ApiRequest[String](ApiMethods.POST, "http://api.cloudboost.io/", "file/{my_app_id}", "application/json")
      .withBody(fileObj)
      .withPathParam("my_app_id", myAppId)
      .withSuccessResponse[String](200)
      


}

