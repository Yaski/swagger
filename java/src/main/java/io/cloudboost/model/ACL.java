package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.Read;
import io.cloudboost.model.Write;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class ACL   {
  
  private Read read = null;
  private Write write = null;

  
  /**
   **/
  public ACL read(Read read) {
    this.read = read;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("read")
  public Read getRead() {
    return read;
  }
  public void setRead(Read read) {
    this.read = read;
  }

  
  /**
   **/
  public ACL write(Write write) {
    this.write = write;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("write")
  public Write getWrite() {
    return write;
  }
  public void setWrite(Write write) {
    this.write = write;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ACL ACL = (ACL) o;
    return Objects.equals(this.read, ACL.read) &&
        Objects.equals(this.write, ACL.write);
  }

  @Override
  public int hashCode() {
    return Objects.hash(read, write);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ACL {\n");
    
    sb.append("    read: ").append(toIndentedString(read)).append("\n");
    sb.append("    write: ").append(toIndentedString(write)).append("\n");
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

