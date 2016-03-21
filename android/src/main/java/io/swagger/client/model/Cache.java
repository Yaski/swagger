package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Cache  {
  
  @SerializedName("_type")
  private String type = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("size")
  private String size = null;

  
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
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSize() {
    return size;
  }
  public void setSize(String size) {
    this.size = size;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Cache {\n");
    
    sb.append("  type: ").append(type).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  size: ").append(size).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
