package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class Allow   {
  
  private List<String> user = new ArrayList<String>();
  private List<String> role = new ArrayList<String>();

  
  /**
   **/
  public Allow user(List<String> user) {
    this.user = user;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("user")
  public List<String> getUser() {
    return user;
  }
  public void setUser(List<String> user) {
    this.user = user;
  }

  
  /**
   **/
  public Allow role(List<String> role) {
    this.role = role;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("role")
  public List<String> getRole() {
    return role;
  }
  public void setRole(List<String> role) {
    this.role = role;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Allow allow = (Allow) o;
    return Objects.equals(this.user, allow.user) &&
        Objects.equals(this.role, allow.role);
  }

  @Override
  public int hashCode() {
    return Objects.hash(user, role);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Allow {\n");
    
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
    sb.append("    role: ").append(toIndentedString(role)).append("\n");
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

