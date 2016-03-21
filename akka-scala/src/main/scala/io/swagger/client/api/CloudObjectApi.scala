package io.swagger.client.api

import io.swagger.client.model.CloudObject
import io.swagger.client.model.CloudObjectSaveRequest
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudObjectApi {

  /**
   * deletes a cloud object from cloudapp
   * 
   * Expected answers:
   *   code 200 : CloudObject (cloudsave response)
   *   code 0 :  (unexpected error)
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body CloudObject that needs to be added to the cloudboost
   */
  def delete(appId: String, tableName: String, body: CloudObjectSaveRequest): ApiRequest[CloudObject] =
    ApiRequest[CloudObject](ApiMethods.DELETE, "http://api.cloudboost.io/", "data/{app_id}/{table_name}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("table_name", tableName)
      .withSuccessResponse[CloudObject](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * 
   * Expected answers:
   *   code 200 : CloudObject (cloudsave response)
   *   code 0 :  (unexpected error)
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body CloudObject that needs to be added to cloudboost
   */
  def save(appId: String, tableName: String, body: CloudObjectSaveRequest): ApiRequest[CloudObject] =
    ApiRequest[CloudObject](ApiMethods.PUT, "http://api.cloudboost.io/", "data/{app_id}/{table_name}", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("table_name", tableName)
      .withSuccessResponse[CloudObject](200)
      .withDefaultErrorResponse[Unit]
      


}

