package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.ACL;
import io.cloudboost.model.QueueMessage;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class ModifiedQueue   {
  
  private ACL ACL = null;
  private String type = "queue";
  private Date expires = null;
  private String queueType = "pull";
  private String retry = null;
  private String name = null;
  private List<String> subscribers = new ArrayList<String>();
  private Boolean isModified = true;
  private List<String> modifiedColumns = new ArrayList<String>();
  private List<QueueMessage> messages = new ArrayList<QueueMessage>();

  
  /**
   **/
  public ModifiedQueue ACL(ACL ACL) {
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
  public ModifiedQueue type(String type) {
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
  public ModifiedQueue expires(Date expires) {
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
  public ModifiedQueue queueType(String queueType) {
    this.queueType = queueType;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("queueType")
  public String getQueueType() {
    return queueType;
  }
  public void setQueueType(String queueType) {
    this.queueType = queueType;
  }

  
  /**
   **/
  public ModifiedQueue retry(String retry) {
    this.retry = retry;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("retry")
  public String getRetry() {
    return retry;
  }
  public void setRetry(String retry) {
    this.retry = retry;
  }

  
  /**
   **/
  public ModifiedQueue name(String name) {
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
  public ModifiedQueue subscribers(List<String> subscribers) {
    this.subscribers = subscribers;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("subscribers")
  public List<String> getSubscribers() {
    return subscribers;
  }
  public void setSubscribers(List<String> subscribers) {
    this.subscribers = subscribers;
  }

  
  /**
   **/
  public ModifiedQueue isModified(Boolean isModified) {
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
  public ModifiedQueue modifiedColumns(List<String> modifiedColumns) {
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
  public ModifiedQueue messages(List<QueueMessage> messages) {
    this.messages = messages;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("messages")
  public List<QueueMessage> getMessages() {
    return messages;
  }
  public void setMessages(List<QueueMessage> messages) {
    this.messages = messages;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ModifiedQueue modifiedQueue = (ModifiedQueue) o;
    return Objects.equals(this.ACL, modifiedQueue.ACL) &&
        Objects.equals(this.type, modifiedQueue.type) &&
        Objects.equals(this.expires, modifiedQueue.expires) &&
        Objects.equals(this.queueType, modifiedQueue.queueType) &&
        Objects.equals(this.retry, modifiedQueue.retry) &&
        Objects.equals(this.name, modifiedQueue.name) &&
        Objects.equals(this.subscribers, modifiedQueue.subscribers) &&
        Objects.equals(this.isModified, modifiedQueue.isModified) &&
        Objects.equals(this.modifiedColumns, modifiedQueue.modifiedColumns) &&
        Objects.equals(this.messages, modifiedQueue.messages);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ACL, type, expires, queueType, retry, name, subscribers, isModified, modifiedColumns, messages);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ModifiedQueue {\n");
    
    sb.append("    ACL: ").append(toIndentedString(ACL)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    expires: ").append(toIndentedString(expires)).append("\n");
    sb.append("    queueType: ").append(toIndentedString(queueType)).append("\n");
    sb.append("    retry: ").append(toIndentedString(retry)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    subscribers: ").append(toIndentedString(subscribers)).append("\n");
    sb.append("    isModified: ").append(toIndentedString(isModified)).append("\n");
    sb.append("    modifiedColumns: ").append(toIndentedString(modifiedColumns)).append("\n");
    sb.append("    messages: ").append(toIndentedString(messages)).append("\n");
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

