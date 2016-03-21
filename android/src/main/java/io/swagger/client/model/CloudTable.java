package io.swagger.client.model;

import io.swagger.client.model.Column;
import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudTable  {
  
  @SerializedName("name")
  private String name = null;
  @SerializedName("appId")
  private String appId = null;
  public enum TypeEnum {
     user,  role,  custom, 
  };
  @SerializedName("type")
  private TypeEnum type = null;
  @SerializedName("columns")
  private List<Column> columns = null;

  
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
  public String getAppId() {
    return appId;
  }
  public void setAppId(String appId) {
    this.appId = appId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public TypeEnum getType() {
    return type;
  }
  public void setType(TypeEnum type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<Column> getColumns() {
    return columns;
  }
  public void setColumns(List<Column> columns) {
    this.columns = columns;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudTable {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  appId: ").append(appId).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  columns: ").append(columns).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
