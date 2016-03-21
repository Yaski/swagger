package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class ACL (
  read: Option[Read],
  write: Option[Write])
   extends ApiModel


