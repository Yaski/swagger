package io.swagger.client.api

import io.swagger.client.model.CloudQueryCount
import io.swagger.client.model.CloudQueryDistinct
import io.swagger.client.model.CloudObject
import io.swagger.client.model.CloudQuery
import io.swagger.client.model.CloudQueryFindById
import io.swagger.client.model.CloudQueryFindOne
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudQueryApi {

  /**
   * count items in a table that match this query criteria
   * 
   * Expected answers:
   *   code 200 : Int (cloudsave response)
   *   code 0 :  (unexpected error)
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   */
  def count(appId: String, tableName: String, body: CloudQueryCount): ApiRequest[Int] =
    ApiRequest[Int](ApiMethods.POST, "http://api.cloudboost.io/", "data/{app_id}/{table_name}/count", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("table_name", tableName)
      .withSuccessResponse[Int](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * 
   * Expected answers:
   *   code 200 : Seq[CloudObject] (cloudsave response)
   *   code 0 :  (unexpected error)
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   */
  def distinct(appId: String, tableName: String, body: CloudQueryDistinct): ApiRequest[Seq[CloudObject]] =
    ApiRequest[Seq[CloudObject]](ApiMethods.POST, "http://api.cloudboost.io/", "data/{app_id}/{table_name}/distinct", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("table_name", tableName)
      .withSuccessResponse[Seq[CloudObject]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * 
   * Expected answers:
   *   code 200 : Seq[CloudObject] (cloudsave response)
   *   code 0 :  (unexpected error)
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query object
   */
  def find(appId: String, tableName: String, body: CloudQuery): ApiRequest[Seq[CloudObject]] =
    ApiRequest[Seq[CloudObject]](ApiMethods.POST, "http://api.cloudboost.io/", "data/{app_id}/{table_name}/find", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("table_name", tableName)
      .withSuccessResponse[Seq[CloudObject]](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * 
   * Expected answers:
   *   code 200 : CloudObject (cloudsave response)
   *   code 0 :  (unexpected error)
   * 
   * @param cloudAppId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   */
  def findById(cloudAppId: String, tableName: String, body: CloudQueryFindById): ApiRequest[CloudObject] =
    ApiRequest[CloudObject](ApiMethods.POST, "http://api.cloudboost.io/", "data/{cloud_app_id}/{table_name}/find", "application/json")
      .withBody(body)
      .withPathParam("cloud_app_id", cloudAppId)
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
   * @param body query body
   */
  def findOne(appId: String, tableName: String, body: CloudQueryFindOne): ApiRequest[CloudObject] =
    ApiRequest[CloudObject](ApiMethods.POST, "http://api.cloudboost.io/", "data/{app_id}/{table_name}/findOne", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("table_name", tableName)
      .withSuccessResponse[CloudObject](200)
      .withDefaultErrorResponse[Unit]
      


}

