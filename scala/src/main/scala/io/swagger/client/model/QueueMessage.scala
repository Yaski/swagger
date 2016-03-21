package io.swagger.client.model

import org.joda.time.DateTime



case class QueueMessage (
  ACL: ACL,
  _type: String,
  expires: DateTime,
  id: String,
  delay: DateTime,
  timeout: Long,
  modifiedColumns: List[String],
  isModified: Boolean,
  message: String)
  
