package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.CloudFile;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class FileBody   {
  
  private String key = null;
  private String data = null;
  private CloudFile fileObj = null;

  
  /**
   **/
  public FileBody key(String key) {
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
  public FileBody data(String data) {
    this.data = data;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("data")
  public String getData() {
    return data;
  }
  public void setData(String data) {
    this.data = data;
  }

  
  /**
   **/
  public FileBody fileObj(CloudFile fileObj) {
    this.fileObj = fileObj;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("fileObj")
  public CloudFile getFileObj() {
    return fileObj;
  }
  public void setFileObj(CloudFile fileObj) {
    this.fileObj = fileObj;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FileBody fileBody = (FileBody) o;
    return Objects.equals(this.key, fileBody.key) &&
        Objects.equals(this.data, fileBody.data) &&
        Objects.equals(this.fileObj, fileBody.fileObj);
  }

  @Override
  public int hashCode() {
    return Objects.hash(key, data, fileObj);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FileBody {\n");
    
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("    fileObj: ").append(toIndentedString(fileObj)).append("\n");
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

