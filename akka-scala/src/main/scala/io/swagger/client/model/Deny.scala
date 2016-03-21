package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Deny (
  user: Option[Seq[String]],
  role: Option[Seq[String]])
   extends ApiModel


