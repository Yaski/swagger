package io.swagger.client.model;

import io.swagger.client.model.ACL;
import java.util.*;
import java.util.Date;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class QueueMessage  {
  
  @SerializedName("ACL")
  private ACL ACL = null;
  @SerializedName("_type")
  private String type = null;
  @SerializedName("expires")
  private Date expires = null;
  @SerializedName("_id")
  private String id = null;
  @SerializedName("delay")
  private Date delay = null;
  @SerializedName("timeout")
  private Long timeout = 1800;
  @SerializedName("_modifiedColumns")
  private List<String> modifiedColumns = null;
  @SerializedName("_isModified")
  private Boolean isModified = null;
  @SerializedName("message")
  private String message = null;

  
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
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
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
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Date getDelay() {
    return delay;
  }
  public void setDelay(Date delay) {
    this.delay = delay;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Long getTimeout() {
    return timeout;
  }
  public void setTimeout(Long timeout) {
    this.timeout = timeout;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getModifiedColumns() {
    return modifiedColumns;
  }
  public void setModifiedColumns(List<String> modifiedColumns) {
    this.modifiedColumns = modifiedColumns;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsModified() {
    return isModified;
  }
  public void setIsModified(Boolean isModified) {
    this.isModified = isModified;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueMessage {\n");
    
    sb.append("  ACL: ").append(ACL).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  expires: ").append(expires).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  delay: ").append(delay).append("\n");
    sb.append("  timeout: ").append(timeout).append("\n");
    sb.append("  modifiedColumns: ").append(modifiedColumns).append("\n");
    sb.append("  isModified: ").append(isModified).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
