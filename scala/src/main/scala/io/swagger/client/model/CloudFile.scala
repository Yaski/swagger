package io.swagger.client.model

import org.joda.time.DateTime



case class CloudFile (
  id: String,
  _type: String,
  ACL: ACL,
  name: String,
  size: Float,
  url: String,
  expires: DateTime,
  _contentType: String)
  
