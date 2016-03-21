package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Queue (
  id: Option[String],
  tableName: Option[String],
  createdAt: Option[DateTime],
  updatedAt: Option[DateTime],
  aCL: Option[ACL],
  `type`: Option[String],
  expires: Option[DateTime],
  queueType: Option[String],
  retry: Option[String],
  name: Option[String],
  subscribers: Option[Seq[String]],
  messages: Option[Seq[QueueMessage]])
   extends ApiModel


