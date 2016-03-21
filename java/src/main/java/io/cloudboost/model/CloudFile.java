package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.ACL;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Date;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudFile   {
  
  private String id = null;
  private String type = "file";
  private ACL ACL = null;
  private String name = null;
  private Float size = null;
  private String url = null;
  private Date expires = null;
  private String contentType = "application/octet-stream";

  
  /**
   **/
  public CloudFile id(String id) {
    this.id = id;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("_id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  public CloudFile type(String type) {
    this.type = type;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("_type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  public CloudFile ACL(ACL ACL) {
    this.ACL = ACL;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("ACL")
  public ACL getACL() {
    return ACL;
  }
  public void setACL(ACL ACL) {
    this.ACL = ACL;
  }

  
  /**
   **/
  public CloudFile name(String name) {
    this.name = name;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  public CloudFile size(Float size) {
    this.size = size;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("size")
  public Float getSize() {
    return size;
  }
  public void setSize(Float size) {
    this.size = size;
  }

  
  /**
   **/
  public CloudFile url(String url) {
    this.url = url;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("url")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  
  /**
   **/
  public CloudFile expires(Date expires) {
    this.expires = expires;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("expires")
  public Date getExpires() {
    return expires;
  }
  public void setExpires(Date expires) {
    this.expires = expires;
  }

  
  /**
   **/
  public CloudFile contentType(String contentType) {
    this.contentType = contentType;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("contentType")
  public String getContentType() {
    return contentType;
  }
  public void setContentType(String contentType) {
    this.contentType = contentType;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CloudFile cloudFile = (CloudFile) o;
    return Objects.equals(this.id, cloudFile.id) &&
        Objects.equals(this.type, cloudFile.type) &&
        Objects.equals(this.ACL, cloudFile.ACL) &&
        Objects.equals(this.name, cloudFile.name) &&
        Objects.equals(this.size, cloudFile.size) &&
        Objects.equals(this.url, cloudFile.url) &&
        Objects.equals(this.expires, cloudFile.expires) &&
        Objects.equals(this.contentType, cloudFile.contentType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, type, ACL, name, size, url, expires, contentType);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudFile {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    ACL: ").append(toIndentedString(ACL)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    expires: ").append(toIndentedString(expires)).append("\n");
    sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
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

