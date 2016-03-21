package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.CloudTable;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudTableSave   {
  
  private CloudTable data = null;
  private String key = "app_key";

  
  /**
   **/
  public CloudTableSave data(CloudTable data) {
    this.data = data;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("data")
  public CloudTable getData() {
    return data;
  }
  public void setData(CloudTable data) {
    this.data = data;
  }

  
  /**
   **/
  public CloudTableSave key(String key) {
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
    CloudTableSave cloudTableSave = (CloudTableSave) o;
    return Objects.equals(this.data, cloudTableSave.data) &&
        Objects.equals(this.key, cloudTableSave.key);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data, key);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudTableSave {\n");
    
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
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

