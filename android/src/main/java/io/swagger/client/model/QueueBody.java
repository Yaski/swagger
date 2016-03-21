package io.swagger.client.model;

import io.swagger.client.model.Queue;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class QueueBody  {
  
  @SerializedName("document")
  private Queue document = null;
  @SerializedName("key")
  private String key = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Queue getDocument() {
    return document;
  }
  public void setDocument(Queue document) {
    this.document = document;
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
    sb.append("class QueueBody {\n");
    
    sb.append("  document: ").append(document).append("\n");
    sb.append("  key: ").append(key).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
