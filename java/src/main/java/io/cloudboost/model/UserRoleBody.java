package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.CloudRole;
import io.cloudboost.model.CloudUser;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class UserRoleBody   {
  
  private String key = null;
  private CloudRole role = null;
  private CloudUser user = null;

  
  /**
   **/
  public UserRoleBody key(String key) {
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

  
  /**
   **/
  public UserRoleBody role(CloudRole role) {
    this.role = role;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("role")
  public CloudRole getRole() {
    return role;
  }
  public void setRole(CloudRole role) {
    this.role = role;
  }

  
  /**
   **/
  public UserRoleBody user(CloudUser user) {
    this.user = user;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("user")
  public CloudUser getUser() {
    return user;
  }
  public void setUser(CloudUser user) {
    this.user = user;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    UserRoleBody userRoleBody = (UserRoleBody) o;
    return Objects.equals(this.key, userRoleBody.key) &&
        Objects.equals(this.role, userRoleBody.role) &&
        Objects.equals(this.user, userRoleBody.user);
  }

  @Override
  public int hashCode() {
    return Objects.hash(key, role, user);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UserRoleBody {\n");
    
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    role: ").append(toIndentedString(role)).append("\n");
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
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

