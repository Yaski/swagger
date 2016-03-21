package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class Column   {
  
  private String name = "table_name";


  public enum DataTypeEnum {
    TEXT("Text"),
    EMAIL("Email"),
    URL("URL"),
    NUMBER("Number"),
    BOOLEAN("Boolean"),
    DATETIME("DateTime"),
    GEOPOINT("GeoPoint"),
    FILE("File"),
    LIST("List"),
    RELATION("Relation"),
    OBJECT("Object"),
    ID("Id"),
    ENCRYPTEDTEXT("EncryptedText"),
    ACL("ACL");

    private String value;

    DataTypeEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return value;
    }
  }

  private DataTypeEnum dataType = DataTypeEnum.TEXT;
  private String type = "column";
  private Boolean required = false;
  private Boolean unique = false;
  private String relatedTo = "null";
  private String relationType = "null";
  private Boolean isDeletable = true;
  private Boolean isEditable = true;
  private Boolean isRenamable = false;

  
  /**
   **/
  public Column name(String name) {
    this.name = name;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  public Column dataType(DataTypeEnum dataType) {
    this.dataType = dataType;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("dataType")
  public DataTypeEnum getDataType() {
    return dataType;
  }
  public void setDataType(DataTypeEnum dataType) {
    this.dataType = dataType;
  }

  
  /**
   **/
  public Column type(String type) {
    this.type = type;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("_type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  public Column required(Boolean required) {
    this.required = required;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("required")
  public Boolean getRequired() {
    return required;
  }
  public void setRequired(Boolean required) {
    this.required = required;
  }

  
  /**
   **/
  public Column unique(Boolean unique) {
    this.unique = unique;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("unique")
  public Boolean getUnique() {
    return unique;
  }
  public void setUnique(Boolean unique) {
    this.unique = unique;
  }

  
  /**
   **/
  public Column relatedTo(String relatedTo) {
    this.relatedTo = relatedTo;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("relatedTo")
  public String getRelatedTo() {
    return relatedTo;
  }
  public void setRelatedTo(String relatedTo) {
    this.relatedTo = relatedTo;
  }

  
  /**
   **/
  public Column relationType(String relationType) {
    this.relationType = relationType;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("relationType")
  public String getRelationType() {
    return relationType;
  }
  public void setRelationType(String relationType) {
    this.relationType = relationType;
  }

  
  /**
   **/
  public Column isDeletable(Boolean isDeletable) {
    this.isDeletable = isDeletable;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("isDeletable")
  public Boolean getIsDeletable() {
    return isDeletable;
  }
  public void setIsDeletable(Boolean isDeletable) {
    this.isDeletable = isDeletable;
  }

  
  /**
   **/
  public Column isEditable(Boolean isEditable) {
    this.isEditable = isEditable;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("isEditable")
  public Boolean getIsEditable() {
    return isEditable;
  }
  public void setIsEditable(Boolean isEditable) {
    this.isEditable = isEditable;
  }

  
  /**
   **/
  public Column isRenamable(Boolean isRenamable) {
    this.isRenamable = isRenamable;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("isRenamable")
  public Boolean getIsRenamable() {
    return isRenamable;
  }
  public void setIsRenamable(Boolean isRenamable) {
    this.isRenamable = isRenamable;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Column column = (Column) o;
    return Objects.equals(this.name, column.name) &&
        Objects.equals(this.dataType, column.dataType) &&
        Objects.equals(this.type, column.type) &&
        Objects.equals(this.required, column.required) &&
        Objects.equals(this.unique, column.unique) &&
        Objects.equals(this.relatedTo, column.relatedTo) &&
        Objects.equals(this.relationType, column.relationType) &&
        Objects.equals(this.isDeletable, column.isDeletable) &&
        Objects.equals(this.isEditable, column.isEditable) &&
        Objects.equals(this.isRenamable, column.isRenamable);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, dataType, type, required, unique, relatedTo, relationType, isDeletable, isEditable, isRenamable);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Column {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    dataType: ").append(toIndentedString(dataType)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    required: ").append(toIndentedString(required)).append("\n");
    sb.append("    unique: ").append(toIndentedString(unique)).append("\n");
    sb.append("    relatedTo: ").append(toIndentedString(relatedTo)).append("\n");
    sb.append("    relationType: ").append(toIndentedString(relationType)).append("\n");
    sb.append("    isDeletable: ").append(toIndentedString(isDeletable)).append("\n");
    sb.append("    isEditable: ").append(toIndentedString(isEditable)).append("\n");
    sb.append("    isRenamable: ").append(toIndentedString(isRenamable)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

