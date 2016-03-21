package io.swagger.client.model;

import io.swagger.client.model.CloudUser;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class UserBody  {
  
  @SerializedName("key")
  private String key = null;
  @SerializedName("document")
  private CloudUser document = null;

  
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
  public CloudUser getDocument() {
    return document;
  }
  public void setDocument(CloudUser document) {
    this.document = document;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class UserBody {\n");
    
    sb.append("  key: ").append(key).append("\n");
    sb.append("  document: ").append(document).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
