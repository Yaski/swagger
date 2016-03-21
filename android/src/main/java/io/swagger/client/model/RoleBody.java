package io.swagger.client.model;

import io.swagger.client.model.CloudRole;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class RoleBody  {
  
  @SerializedName("key")
  private String key = null;
  @SerializedName("document")
  private CloudRole document = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public CloudRole getDocument() {
    return document;
  }
  public void setDocument(CloudRole document) {
    this.document = document;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RoleBody {\n");
    
    sb.append("  key: ").append(key).append("\n");
    sb.append("  document: ").append(document).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
