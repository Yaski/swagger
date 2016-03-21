package io.swagger.client.model;

import io.swagger.client.model.ACL;
import io.swagger.client.model.QueueMessage;
import java.util.*;
import java.util.Date;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Queue  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("_tableName")
  private String tableName = null;
  @SerializedName("createdAt")
  private Date createdAt = null;
  @SerializedName("updatedAt")
  private Date updatedAt = null;
  @SerializedName("ACL")
  private ACL ACL = null;
  @SerializedName("_type")
  private String type = null;
  @SerializedName("expires")
  private Date expires = null;
  @SerializedName("queueType")
  private String queueType = null;
  @SerializedName("retry")
  private String retry = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("subscribers")
  private List<String> subscribers = null;
  @SerializedName("messages")
  private List<QueueMessage> messages = null;

  
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
  public String getTableName() {
    return tableName;
  }
  public void setTableName(String tableName) {
    this.tableName = tableName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Date getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(Date createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Date getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(Date updatedAt) {
    this.updatedAt = updatedAt;
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
  public String getQueueType() {
    return queueType;
  }
  public void setQueueType(String queueType) {
    this.queueType = queueType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getRetry() {
    return retry;
  }
  public void setRetry(String retry) {
    this.retry = retry;
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
  public List<String> getSubscribers() {
    return subscribers;
  }
  public void setSubscribers(List<String> subscribers) {
    this.subscribers = subscribers;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<QueueMessage> getMessages() {
    return messages;
  }
  public void setMessages(List<QueueMessage> messages) {
    this.messages = messages;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Queue {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  tableName: ").append(tableName).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  updatedAt: ").append(updatedAt).append("\n");
    sb.append("  ACL: ").append(ACL).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  expires: ").append(expires).append("\n");
    sb.append("  queueType: ").append(queueType).append("\n");
    sb.append("  retry: ").append(retry).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  subscribers: ").append(subscribers).append("\n");
    sb.append("  messages: ").append(messages).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
