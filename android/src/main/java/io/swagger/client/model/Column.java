package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Column  {
  
  @SerializedName("name")
  private String name = null;
  public enum DataTypeEnum {
     Text,  Email,  URL,  Number,  Boolean,  DateTime,  GeoPoint,  File,  List,  Relation,  Object,  Id,  EncryptedText,  ACL, 
  };
  @SerializedName("dataType")
  private DataTypeEnum dataType = null;
  @SerializedName("_type")
  private String type = null;
  @SerializedName("required")
  private Boolean required = null;
  @SerializedName("unique")
  private Boolean unique = null;
  @SerializedName("relatedTo")
  private String relatedTo = null;
  @SerializedName("relationType")
  private String relationType = null;
  @SerializedName("isDeletable")
  private Boolean isDeletable = null;
  @SerializedName("isEditable")
  private Boolean isEditable = null;
  @SerializedName("isRenamable")
  private Boolean isRenamable = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public DataTypeEnum getDataType() {
    return dataType;
  }
  public void setDataType(DataTypeEnum dataType) {
    this.dataType = dataType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getRequired() {
    return required;
  }
  public void setRequired(Boolean required) {
    this.required = required;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUnique() {
    return unique;
  }
  public void setUnique(Boolean unique) {
    this.unique = unique;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getRelatedTo() {
    return relatedTo;
  }
  public void setRelatedTo(String relatedTo) {
    this.relatedTo = relatedTo;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getRelationType() {
    return relationType;
  }
  public void setRelationType(String relationType) {
    this.relationType = relationType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsDeletable() {
    return isDeletable;
  }
  public void setIsDeletable(Boolean isDeletable) {
    this.isDeletable = isDeletable;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsEditable() {
    return isEditable;
  }
  public void setIsEditable(Boolean isEditable) {
    this.isEditable = isEditable;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsRenamable() {
    return isRenamable;
  }
  public void setIsRenamable(Boolean isRenamable) {
    this.isRenamable = isRenamable;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Column {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  dataType: ").append(dataType).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  required: ").append(required).append("\n");
    sb.append("  unique: ").append(unique).append("\n");
    sb.append("  relatedTo: ").append(relatedTo).append("\n");
    sb.append("  relationType: ").append(relationType).append("\n");
    sb.append("  isDeletable: ").append(isDeletable).append("\n");
    sb.append("  isEditable: ").append(isEditable).append("\n");
    sb.append("  isRenamable: ").append(isRenamable).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
