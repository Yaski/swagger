package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class FileBody (
  key: Option[String],
  data: Option[String],
  fileObj: Option[CloudFile])
   extends ApiModel


