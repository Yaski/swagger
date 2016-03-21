package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class UserRoleBody (
  key: Option[String],
  role: Option[CloudRole],
  user: Option[CloudUser])
   extends ApiModel


