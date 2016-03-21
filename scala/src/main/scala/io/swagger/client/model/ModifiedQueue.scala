package io.swagger.client.model

import org.joda.time.DateTime



case class ModifiedQueue (
  ACL: ACL,
  _type: String,
  expires: DateTime,
  queueType: String,
  retry: String,
  name: String,
  subscribers: List[String],
  isModified: Boolean,
  modifiedColumns: List[String],
  messages: List[QueueMessage])
  
