package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class CloudQueryCount (
  key: Option[String],
  skip: Option[Int],
  limit: Option[Int],
  query: Option[Query],
  sort: Option[String],
  select: Option[String])
   extends ApiModel


