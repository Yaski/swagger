package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Column (
  name: Option[String],
  dataType: Option[ColumnEnums.DataType],
  `type`: Option[String],
  required: Option[Boolean],
  unique: Option[Boolean],
  relatedTo: Option[String],
  relationType: Option[String],
  isDeletable: Option[Boolean],
  isEditable: Option[Boolean],
  isRenamable: Option[Boolean])
   extends ApiModel

object ColumnEnums {

  type DataType = DataType.Value
  
  object DataType extends Enumeration {
    val Text = Value("Text")
    val Email = Value("Email")
    val URL = Value("URL")
    val Number = Value("Number")
    val Boolean = Value("Boolean")
    val DateTime = Value("DateTime")
    val GeoPoint = Value("GeoPoint")
    val File = Value("File")
    val List = Value("List")
    val Relation = Value("Relation")
    val `Object` = Value("Object")
    val Id = Value("Id")
    val EncryptedText = Value("EncryptedText")
    val ACL = Value("ACL")
  }

  
}

