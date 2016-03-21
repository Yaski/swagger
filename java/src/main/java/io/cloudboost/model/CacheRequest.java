package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CacheRequest   {
  
  private String item = null;
  private String key = "master_key";

  
  /**
   **/
  public CacheRequest item(String item) {
    this.item = item;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("item")
  public String getItem() {
    return item;
  }
  public void setItem(String item) {
    this.item = item;
  }

  
  /**
   **/
  public CacheRequest key(String key) {
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
    CacheRequest cacheRequest = (CacheRequest) o;
    return Objects.equals(this.item, cacheRequest.item) &&
        Objects.equals(this.key, cacheRequest.key);
  }

  @Override
  public int hashCode() {
    return Objects.hash(item, key);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CacheRequest {\n");
    
    sb.append("    item: ").append(toIndentedString(item)).append("\n");
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

