package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class SearchQuery (
  mustNot: Option[Seq[String]],
  should: Option[Seq[String]],
  must: Option[Seq[String]])
   extends ApiModel


