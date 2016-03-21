package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.Allow;
import io.cloudboost.model.Deny;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class Write   {
  
  private Allow allow = null;
  private Deny deny = null;

  
  /**
   **/
  public Write allow(Allow allow) {
    this.allow = allow;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("allow")
  public Allow getAllow() {
    return allow;
  }
  public void setAllow(Allow allow) {
    this.allow = allow;
  }

  
  /**
   **/
  public Write deny(Deny deny) {
    this.deny = deny;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("deny")
  public Deny getDeny() {
    return deny;
  }
  public void setDeny(Deny deny) {
    this.deny = deny;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Write write = (Write) o;
    return Objects.equals(this.allow, write.allow) &&
        Objects.equals(this.deny, write.deny);
  }

  @Override
  public int hashCode() {
    return Objects.hash(allow, deny);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Write {\n");
    
    sb.append("    allow: ").append(toIndentedString(allow)).append("\n");
    sb.append("    deny: ").append(toIndentedString(deny)).append("\n");
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

