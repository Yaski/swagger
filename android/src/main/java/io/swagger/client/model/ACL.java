package io.swagger.client.model;

import io.swagger.client.model.Read;
import io.swagger.client.model.Write;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class ACL  {
  
  @SerializedName("read")
  private Read read = null;
  @SerializedName("write")
  private Write write = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Read getRead() {
    return read;
  }
  public void setRead(Read read) {
    this.read = read;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Write getWrite() {
    return write;
  }
  public void setWrite(Write write) {
    this.write = write;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ACL {\n");
    
    sb.append("  read: ").append(read).append("\n");
    sb.append("  write: ").append(write).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
