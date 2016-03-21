package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class PasswordChangeBody  {
  
  @SerializedName("oldPassword")
  private String oldPassword = null;
  @SerializedName("newPassword")
  private String newPassword = null;
  @SerializedName("key")
  private String key = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getOldPassword() {
    return oldPassword;
  }
  public void setOldPassword(String oldPassword) {
    this.oldPassword = oldPassword;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getNewPassword() {
    return newPassword;
  }
  public void setNewPassword(String newPassword) {
    this.newPassword = newPassword;
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
    sb.append("class PasswordChangeBody {\n");
    
    sb.append("  oldPassword: ").append(oldPassword).append("\n");
    sb.append("  newPassword: ").append(newPassword).append("\n");
    sb.append("  key: ").append(key).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
