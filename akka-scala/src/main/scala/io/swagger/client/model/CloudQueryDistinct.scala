package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class CloudQueryDistinct (
  key: Option[String],
  skip: Option[Int],
  limit: Option[Int],
  query: Option[Query],
  sort: Option[Any],
  select: Option[Any],
  onKey: Option[Seq[String]])
   extends ApiModel


