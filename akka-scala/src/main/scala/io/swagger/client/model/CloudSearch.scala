package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class CloudSearch (
  query: Option[FilterBody],
  sort: Option[Seq[String]],
  collectionName: Option[String],
  key: Option[String],
  skip: Option[Int],
  limit: Option[Int])
   extends ApiModel


