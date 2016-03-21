package io.swagger.client.model;

import io.swagger.client.model.CloudTable;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudTableSave  {
  
  @SerializedName("data")
  private CloudTable data = null;
  @SerializedName("key")
  private String key = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public CloudTable getData() {
    return data;
  }
  public void setData(CloudTable data) {
    this.data = data;
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
    sb.append("class CloudTableSave {\n");
    
    sb.append("  data: ").append(data).append("\n");
    sb.append("  key: ").append(key).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
