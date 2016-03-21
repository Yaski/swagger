package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class CloudFile (
  id: Option[String],
  `type`: Option[String],
  aCL: Option[ACL],
  name: Option[String],
  size: Option[Float],
  url: Option[String],
  expires: Option[DateTime],
  contentType: Option[String])
   extends ApiModel


