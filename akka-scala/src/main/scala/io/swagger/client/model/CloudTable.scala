package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class CloudTable (
  name: Option[String],
  appId: Option[String],
  `type`: Option[CloudTableEnums.`Type`],
  columns: Option[Seq[Column]])
   extends ApiModel

object CloudTableEnums {

  type `Type` = `Type`.Value
  
  object `Type` extends Enumeration {
    val User = Value("user")
    val Role = Value("role")
    val Custom = Value("custom")
  }

  
}

