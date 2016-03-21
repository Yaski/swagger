package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.ACL;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class QueueMessage   {
  
  private ACL ACL = null;
  private String type = "queue-message";
  private Date expires = null;
  private String id = null;
  private Date delay = null;
  private Long timeout = 1800l;
  private List<String> modifiedColumns = new ArrayList<String>();
  private Boolean isModified = true;
  private String message = null;

  
  /**
   **/
  public QueueMessage ACL(ACL ACL) {
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
  public QueueMessage type(String type) {
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
  public QueueMessage expires(Date expires) {
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
  public QueueMessage id(String id) {
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
  public QueueMessage delay(Date delay) {
    this.delay = delay;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("delay")
  public Date getDelay() {
    return delay;
  }
  public void setDelay(Date delay) {
    this.delay = delay;
  }

  
  /**
   **/
  public QueueMessage timeout(Long timeout) {
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
  public QueueMessage modifiedColumns(List<String> modifiedColumns) {
    this.modifiedColumns = modifiedColumns;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("_modifiedColumns")
  public List<String> getModifiedColumns() {
    return modifiedColumns;
  }
  public void setModifiedColumns(List<String> modifiedColumns) {
    this.modifiedColumns = modifiedColumns;
  }

  
  /**
   **/
  public QueueMessage isModified(Boolean isModified) {
    this.isModified = isModified;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("_isModified")
  public Boolean getIsModified() {
    return isModified;
  }
  public void setIsModified(Boolean isModified) {
    this.isModified = isModified;
  }

  
  /**
   **/
  public QueueMessage message(String message) {
    this.message = message;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("message")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QueueMessage queueMessage = (QueueMessage) o;
    return Objects.equals(this.ACL, queueMessage.ACL) &&
        Objects.equals(this.type, queueMessage.type) &&
        Objects.equals(this.expires, queueMessage.expires) &&
        Objects.equals(this.id, queueMessage.id) &&
        Objects.equals(this.delay, queueMessage.delay) &&
        Objects.equals(this.timeout, queueMessage.timeout) &&
        Objects.equals(this.modifiedColumns, queueMessage.modifiedColumns) &&
        Objects.equals(this.isModified, queueMessage.isModified) &&
        Objects.equals(this.message, queueMessage.message);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ACL, type, expires, id, delay, timeout, modifiedColumns, isModified, message);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueMessage {\n");
    
    sb.append("    ACL: ").append(toIndentedString(ACL)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    expires: ").append(toIndentedString(expires)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    delay: ").append(toIndentedString(delay)).append("\n");
    sb.append("    timeout: ").append(toIndentedString(timeout)).append("\n");
    sb.append("    modifiedColumns: ").append(toIndentedString(modifiedColumns)).append("\n");
    sb.append("    isModified: ").append(toIndentedString(isModified)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
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

