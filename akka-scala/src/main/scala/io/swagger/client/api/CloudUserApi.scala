package io.swagger.client.api

import io.swagger.client.model.UserRoleBody
import io.swagger.client.model.CloudUser
import io.swagger.client.model.PasswordChangeBody
import io.swagger.client.model.UserBody
import io.swagger.client.model.EmailBody
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object CloudUserApi {

  /**
   * 
   * Expected answers:
   *   code 200 : CloudUser (successful operation)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def addToRole(appId: String, body: UserRoleBody): ApiRequest[CloudUser] =
    ApiRequest[CloudUser](ApiMethods.PUT, "http://api.cloudboost.io/", "user/{app_id}/addToRole", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudUser](200)
      
  /**
   * changes the password for a logged in user without logging them out
   * 
   * Expected answers:
   *   code 200 : CloudUser (password reset)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def changePassword(appId: String, body: PasswordChangeBody): ApiRequest[CloudUser] =
    ApiRequest[CloudUser](ApiMethods.PUT, "http://api.cloudboost.io/", "user/{app_id}/changePassword", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudUser](200)
      
  /**
   * 
   * Expected answers:
   *   code 200 : CloudUser (successful operation)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def login(appId: String, body: UserBody): ApiRequest[CloudUser] =
    ApiRequest[CloudUser](ApiMethods.POST, "http://api.cloudboost.io/", "user/{app_id}/login", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudUser](200)
      
  /**
   * 
   * Expected answers:
   *   code 200 : CloudUser (successful operation)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def logout(appId: String, body: UserBody): ApiRequest[CloudUser] =
    ApiRequest[CloudUser](ApiMethods.POST, "http://api.cloudboost.io/", "user/{app_id}/logout", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudUser](200)
      
  /**
   * 
   * Expected answers:
   *   code 200 : CloudUser (successful operation)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def removeFromRole(appId: String, body: UserRoleBody): ApiRequest[CloudUser] =
    ApiRequest[CloudUser](ApiMethods.PUT, "http://api.cloudboost.io/", "user/{app_id}/removeFromRole", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudUser](200)
      
  /**
   * sends a password reset link to the given email
   * 
   * Expected answers:
   *   code 200 : String (password reset)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def resetPassword(appId: String, body: EmailBody): ApiRequest[String] =
    ApiRequest[String](ApiMethods.POST, "http://api.cloudboost.io/", "user/{app_id}/resetPassword", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[String](200)
      
  /**
   * 
   * Expected answers:
   *   code 200 : CloudUser (successful operation)
   * 
   * @param appId ID of app
   * @param body request body
   */
  def signUp(appId: String, body: UserBody): ApiRequest[CloudUser] =
    ApiRequest[CloudUser](ApiMethods.POST, "http://api.cloudboost.io/", "user/{app_id}/signup", "application/json")
      .withBody(body)
      .withPathParam("app_id", appId)
      .withSuccessResponse[CloudUser](200)
      


}

