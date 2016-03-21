package io.swagger.client.api

import io.swagger.client.model.CloudObject
import io.swagger.client.model.CloudSearch
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudSearchApi {

  /**
   * 
   * Expected answers:
   *   code 200 : Seq[CloudObject] (cloud search response)
   *   code 0 :  (unexpected error)
   * 
   * @param appId CloudApp id
   * @param tableName cloud table name
   * @param body query body
   */
  def search(appId: String, tableName: String, body: CloudSearch): ApiRequest[Seq[CloudObject]] =
    ApiRequest[Seq[CloudObject]](ApiMethods.POST, "http://api.cloudboost.io/", "data/{app_id}/{table_name}/search", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withPathParam("table_name", tableName)
      .withSuccessResponse[Seq[CloudObject]](200)
      .withDefaultErrorResponse[Unit]
      


}

