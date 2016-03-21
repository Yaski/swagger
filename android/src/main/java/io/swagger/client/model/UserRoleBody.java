package io.swagger.client.model;

import io.swagger.client.model.CloudRole;
import io.swagger.client.model.CloudUser;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class UserRoleBody  {
  
  @SerializedName("key")
  private String key = null;
  @SerializedName("role")
  private CloudRole role = null;
  @SerializedName("user")
  private CloudUser user = null;

  
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
  public CloudRole getRole() {
    return role;
  }
  public void setRole(CloudRole role) {
    this.role = role;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public CloudUser getUser() {
    return user;
  }
  public void setUser(CloudUser user) {
    this.user = user;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class UserRoleBody {\n");
    
    sb.append("  key: ").append(key).append("\n");
    sb.append("  role: ").append(role).append("\n");
    sb.append("  user: ").append(user).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
