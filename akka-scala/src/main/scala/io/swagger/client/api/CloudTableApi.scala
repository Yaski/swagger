package io.swagger.client.api

import io.swagger.client.model.CloudTableSave
import io.swagger.client.model.CloudTable
import io.swagger.client.model.KeyBody
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudTableApi {

  /**
   * delete a cloud table
   * 
   * Expected answers:
   *   code 200 : CloudTable (successfully deleted table)
   *   code 0 :  (unexpected error)
   * 
   * @param tableName name of cloud table
   * @param appId cloud app id
   * @param body master key and app id
   */
  def deleteTable(tableName: String, appId: String, body: CloudTableSave): ApiRequest[CloudTable] =
    ApiRequest[CloudTable](ApiMethods.DELETE, "http://api.cloudboost.io/", "app/{app_id}/{table_name}", "application/json")
      .withBody(body)
      .withPathParam("table_name", tableName)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudTable](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get a table
   * 
   * Expected answers:
   *   code 200 : CloudTable (successfully go table)
   *   code 0 :  (unexpected error)
   * 
   * @param tableName name of cloud table
   * @param appId id of app
   * @param body master key and app id
   */
  def get(tableName: String, appId: String, body: KeyBody): ApiRequest[CloudTable] =
    ApiRequest[CloudTable](ApiMethods.POST, "http://api.cloudboost.io/", "app/{app_id}/{table_name}", "application/json")
      .withBody(body)
      .withPathParam("table_name", tableName)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudTable](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * get all tables in app
   * 
   * Expected answers:
   *   code 200 :  (table list object)
   *   code 0 :  (unexpected error)
   * 
   * @param appId app id
   * @param body master key
   */
  def getAll(appId: String, body: KeyBody): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://api.cloudboost.io/", "/app/{app_id}/_getAll", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[Unit](200)
      .withDefaultErrorResponse[Unit]
      
  /**
   * save a cloud table
   * 
   * Expected answers:
   *   code 200 : CloudTable (successfully saved table)
   *   code 0 :  (unexpected error)
   * 
   * @param tableName name of cloud table
   * @param appId cloud app id
   * @param body master key and app id
   */
  def save(tableName: String, appId: String, body: CloudTableSave): ApiRequest[CloudTable] =
    ApiRequest[CloudTable](ApiMethods.PUT, "http://api.cloudboost.io/", "app/{app_id}/{table_name}", "application/json")
      .withBody(body)
      .withPathParam("table_name", tableName)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudTable](200)
      .withDefaultErrorResponse[Unit]
      


}

