package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class PasswordChangeBody   {
  
  private String oldPassword = null;
  private String newPassword = null;
  private String key = null;

  
  /**
   **/
  public PasswordChangeBody oldPassword(String oldPassword) {
    this.oldPassword = oldPassword;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("oldPassword")
  public String getOldPassword() {
    return oldPassword;
  }
  public void setOldPassword(String oldPassword) {
    this.oldPassword = oldPassword;
  }

  
  /**
   **/
  public PasswordChangeBody newPassword(String newPassword) {
    this.newPassword = newPassword;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("newPassword")
  public String getNewPassword() {
    return newPassword;
  }
  public void setNewPassword(String newPassword) {
    this.newPassword = newPassword;
  }

  
  /**
   **/
  public PasswordChangeBody key(String key) {
    this.key = key;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("key")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PasswordChangeBody passwordChangeBody = (PasswordChangeBody) o;
    return Objects.equals(this.oldPassword, passwordChangeBody.oldPassword) &&
        Objects.equals(this.newPassword, passwordChangeBody.newPassword) &&
        Objects.equals(this.key, passwordChangeBody.key);
  }

  @Override
  public int hashCode() {
    return Objects.hash(oldPassword, newPassword, key);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PasswordChangeBody {\n");
    
    sb.append("    oldPassword: ").append(toIndentedString(oldPassword)).append("\n");
    sb.append("    newPassword: ").append(toIndentedString(newPassword)).append("\n");
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

