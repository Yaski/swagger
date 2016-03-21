package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Allow (
  user: Option[Seq[String]],
  role: Option[Seq[String]])
   extends ApiModel


