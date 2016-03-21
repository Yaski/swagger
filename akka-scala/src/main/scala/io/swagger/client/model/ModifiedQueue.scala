package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class ModifiedQueue (
  aCL: Option[ACL],
  `type`: Option[String],
  expires: Option[DateTime],
  queueType: Option[String],
  retry: Option[String],
  name: Option[String],
  subscribers: Option[Seq[String]],
  isModified: Option[Boolean],
  modifiedColumns: Option[Seq[String]],
  messages: Option[Seq[QueueMessage]])
   extends ApiModel


