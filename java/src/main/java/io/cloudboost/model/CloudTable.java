package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import io.cloudboost.model.Column;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudTable   {
  
  private String name = "table_name";
  private String appId = "app_id";


  public enum TypeEnum {
    USER("user"),
    ROLE("role"),
    CUSTOM("custom");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return value;
    }
  }

  private TypeEnum type = TypeEnum.CUSTOM;
  private List<Column> columns = new ArrayList<Column>();

  
  /**
   **/
  public CloudTable name(String name) {
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
  public CloudTable appId(String appId) {
    this.appId = appId;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("appId")
  public String getAppId() {
    return appId;
  }
  public void setAppId(String appId) {
    this.appId = appId;
  }

  
  /**
   **/
  public CloudTable type(TypeEnum type) {
    this.type = type;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("type")
  public TypeEnum getType() {
    return type;
  }
  public void setType(TypeEnum type) {
    this.type = type;
  }

  
  /**
   **/
  public CloudTable columns(List<Column> columns) {
    this.columns = columns;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("columns")
  public List<Column> getColumns() {
    return columns;
  }
  public void setColumns(List<Column> columns) {
    this.columns = columns;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CloudTable cloudTable = (CloudTable) o;
    return Objects.equals(this.name, cloudTable.name) &&
        Objects.equals(this.appId, cloudTable.appId) &&
        Objects.equals(this.type, cloudTable.type) &&
        Objects.equals(this.columns, cloudTable.columns);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, appId, type, columns);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudTable {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    appId: ").append(toIndentedString(appId)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    columns: ").append(toIndentedString(columns)).append("\n");
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

