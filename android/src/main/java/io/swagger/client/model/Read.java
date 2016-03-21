package io.swagger.client.model;

import io.swagger.client.model.Allow;
import io.swagger.client.model.Deny;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Read  {
  
  @SerializedName("allow")
  private Allow allow = null;
  @SerializedName("deny")
  private Deny deny = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Allow getAllow() {
    return allow;
  }
  public void setAllow(Allow allow) {
    this.allow = allow;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Deny getDeny() {
    return deny;
  }
  public void setDeny(Deny deny) {
    this.deny = deny;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Read {\n");
    
    sb.append("  allow: ").append(allow).append("\n");
    sb.append("  deny: ").append(deny).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
