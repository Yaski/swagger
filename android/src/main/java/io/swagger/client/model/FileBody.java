package io.swagger.client.model;

import io.swagger.client.model.CloudFile;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class FileBody  {
  
  @SerializedName("key")
  private String key = null;
  @SerializedName("data")
  private String data = null;
  @SerializedName("fileObj")
  private CloudFile fileObj = null;

  
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
  public String getData() {
    return data;
  }
  public void setData(String data) {
    this.data = data;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public CloudFile getFileObj() {
    return fileObj;
  }
  public void setFileObj(CloudFile fileObj) {
    this.fileObj = fileObj;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class FileBody {\n");
    
    sb.append("  key: ").append(key).append("\n");
    sb.append("  data: ").append(data).append("\n");
    sb.append("  fileObj: ").append(fileObj).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
