package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class CloudQuery (
  key: Option[String],
  skip: Option[Int],
  limit: Option[Int],
  query: Option[Query],
  sort: Option[Any],
  select: Option[Any])
   extends ApiModel


