package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class PasswordChangeBody (
  oldPassword: Option[String],
  newPassword: Option[String],
  key: Option[String])
   extends ApiModel


