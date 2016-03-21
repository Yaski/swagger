package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CacheRequest  {
  
  @SerializedName("item")
  private String item = null;
  @SerializedName("key")
  private String key = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getItem() {
    return item;
  }
  public void setItem(String item) {
    this.item = item;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CacheRequest {\n");
    
    sb.append("  item: ").append(item).append("\n");
    sb.append("  key: ").append(key).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
