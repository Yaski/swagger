package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.Queue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class QueueBody   {
  
  private Queue document = null;
  private String key = "app_key";

  
  /**
   **/
  public QueueBody document(Queue document) {
    this.document = document;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("document")
  public Queue getDocument() {
    return document;
  }
  public void setDocument(Queue document) {
    this.document = document;
  }

  
  /**
   **/
  public QueueBody key(String key) {
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
    QueueBody queueBody = (QueueBody) o;
    return Objects.equals(this.document, queueBody.document) &&
        Objects.equals(this.key, queueBody.key);
  }

  @Override
  public int hashCode() {
    return Objects.hash(document, key);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueBody {\n");
    
    sb.append("    document: ").append(toIndentedString(document)).append("\n");
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

