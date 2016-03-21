package io.swagger.client.model;

import io.swagger.client.model.ACL;
import java.util.Date;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudFile  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("_type")
  private String type = null;
  @SerializedName("ACL")
  private ACL ACL = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("size")
  private Float size = null;
  @SerializedName("url")
  private String url = null;
  @SerializedName("expires")
  private Date expires = null;
  @SerializedName("contentType")
  private String contentType = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public ACL getACL() {
    return ACL;
  }
  public void setACL(ACL ACL) {
    this.ACL = ACL;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Float getSize() {
    return size;
  }
  public void setSize(Float size) {
    this.size = size;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Date getExpires() {
    return expires;
  }
  public void setExpires(Date expires) {
    this.expires = expires;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getContentType() {
    return contentType;
  }
  public void setContentType(String contentType) {
    this.contentType = contentType;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudFile {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  ACL: ").append(ACL).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  size: ").append(size).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  expires: ").append(expires).append("\n");
    sb.append("  contentType: ").append(contentType).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
