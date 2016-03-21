package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class RefreshMessageTimeoutBody   {
  
  private Long timeout = null;
  private String key = "app_key";

  
  /**
   **/
  public RefreshMessageTimeoutBody timeout(Long timeout) {
    this.timeout = timeout;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("timeout")
  public Long getTimeout() {
    return timeout;
  }
  public void setTimeout(Long timeout) {
    this.timeout = timeout;
  }

  
  /**
   **/
  public RefreshMessageTimeoutBody key(String key) {
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
    RefreshMessageTimeoutBody refreshMessageTimeoutBody = (RefreshMessageTimeoutBody) o;
    return Objects.equals(this.timeout, refreshMessageTimeoutBody.timeout) &&
        Objects.equals(this.key, refreshMessageTimeoutBody.key);
  }

  @Override
  public int hashCode() {
    return Objects.hash(timeout, key);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RefreshMessageTimeoutBody {\n");
    
    sb.append("    timeout: ").append(toIndentedString(timeout)).append("\n");
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

