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
public class Queue   {
  
  private String id = null;
  private String tableName = "_Queue";
  private Date createdAt = null;
  private Date updatedAt = null;
  private ACL ACL = null;
  private String type = "queue";
  private Date expires = null;
  private String queueType = "pull";
  private String retry = null;
  private String name = null;
  private List<String> subscribers = new ArrayList<String>();
  private List<QueueMessage> messages = new ArrayList<QueueMessage>();

  
  /**
   **/
  public Queue id(String id) {
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
  public Queue tableName(String tableName) {
    this.tableName = tableName;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("_tableName")
  public String getTableName() {
    return tableName;
  }
  public void setTableName(String tableName) {
    this.tableName = tableName;
  }

  
  /**
   **/
  public Queue createdAt(Date createdAt) {
    this.createdAt = createdAt;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("createdAt")
  public Date getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(Date createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  public Queue updatedAt(Date updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("updatedAt")
  public Date getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(Date updatedAt) {
    this.updatedAt = updatedAt;
  }

  
  /**
   **/
  public Queue ACL(ACL ACL) {
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
  public Queue type(String type) {
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
  public Queue expires(Date expires) {
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
  public Queue queueType(String queueType) {
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
  public Queue retry(String retry) {
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
  public Queue name(String name) {
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
  public Queue subscribers(List<String> subscribers) {
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
  public Queue messages(List<QueueMessage> messages) {
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
    Queue queue = (Queue) o;
    return Objects.equals(this.id, queue.id) &&
        Objects.equals(this.tableName, queue.tableName) &&
        Objects.equals(this.createdAt, queue.createdAt) &&
        Objects.equals(this.updatedAt, queue.updatedAt) &&
        Objects.equals(this.ACL, queue.ACL) &&
        Objects.equals(this.type, queue.type) &&
        Objects.equals(this.expires, queue.expires) &&
        Objects.equals(this.queueType, queue.queueType) &&
        Objects.equals(this.retry, queue.retry) &&
        Objects.equals(this.name, queue.name) &&
        Objects.equals(this.subscribers, queue.subscribers) &&
        Objects.equals(this.messages, queue.messages);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, tableName, createdAt, updatedAt, ACL, type, expires, queueType, retry, name, subscribers, messages);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Queue {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    tableName: ").append(toIndentedString(tableName)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("    ACL: ").append(toIndentedString(ACL)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    expires: ").append(toIndentedString(expires)).append("\n");
    sb.append("    queueType: ").append(toIndentedString(queueType)).append("\n");
    sb.append("    retry: ").append(toIndentedString(retry)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    subscribers: ").append(toIndentedString(subscribers)).append("\n");
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

