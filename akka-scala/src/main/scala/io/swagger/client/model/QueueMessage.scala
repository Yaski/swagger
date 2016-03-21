package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class QueueMessage (
  aCL: Option[ACL],
  `type`: Option[String],
  expires: Option[DateTime],
  id: Option[String],
  delay: Option[DateTime],
  timeout: Option[Long],
  modifiedColumns: Option[Seq[String]],
  isModified: Option[Boolean],
  message: Option[String])
   extends ApiModel


