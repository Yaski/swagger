package io.swagger.client.model

import org.joda.time.DateTime



case class Queue (
  id: String,
  tableName: String,
  createdAt: DateTime,
  updatedAt: DateTime,
  ACL: ACL,
  _type: String,
  expires: DateTime,
  queueType: String,
  retry: String,
  name: String,
  subscribers: List[String],
  messages: List[QueueMessage])
  
