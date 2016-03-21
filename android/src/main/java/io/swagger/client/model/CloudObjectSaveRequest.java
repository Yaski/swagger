package io.swagger.client.model;

import io.swagger.client.model.CloudObject;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudObjectSaveRequest  {
  
  @SerializedName("key")
  private String key = null;
  @SerializedName("document")
  private CloudObject document = null;

  
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
  public CloudObject getDocument() {
    return document;
  }
  public void setDocument(CloudObject document) {
    this.document = document;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudObjectSaveRequest {\n");
    
    sb.append("  key: ").append(key).append("\n");
    sb.append("  document: ").append(document).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
