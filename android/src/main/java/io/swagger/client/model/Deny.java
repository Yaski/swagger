package io.swagger.client.model;

import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Deny  {
  
  @SerializedName("user")
  private List<String> user = null;
  @SerializedName("role")
  private List<String> role = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getUser() {
    return user;
  }
  public void setUser(List<String> user) {
    this.user = user;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getRole() {
    return role;
  }
  public void setRole(List<String> role) {
    this.role = role;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Deny {\n");
    
    sb.append("  user: ").append(user).append("\n");
    sb.append("  role: ").append(role).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
