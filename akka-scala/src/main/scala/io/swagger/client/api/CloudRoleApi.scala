package io.swagger.client.api

import io.swagger.client.model.CloudRole
import io.swagger.client.model.RoleBody
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudRoleApi {

  /**
   * 
   * Expected answers:
   *   code 200 : CloudRole (successful operation)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def createRole(appId: String, body: RoleBody): ApiRequest[CloudRole] =
    ApiRequest[CloudRole](ApiMethods.PUT, "http://api.cloudboost.io/", "data/{app_id}/Role", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudRole](200)
      


}

