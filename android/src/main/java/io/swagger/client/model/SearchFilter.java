package io.swagger.client.model;

import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class SearchFilter  {
  
  @SerializedName("must_not")
  private List<String> mustNot = null;
  @SerializedName("should")
  private List<String> should = null;
  @SerializedName("must")
  private List<String> must = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getMustNot() {
    return mustNot;
  }
  public void setMustNot(List<String> mustNot) {
    this.mustNot = mustNot;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getShould() {
    return should;
  }
  public void setShould(List<String> should) {
    this.should = should;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getMust() {
    return must;
  }
  public void setMust(List<String> must) {
    this.must = must;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class SearchFilter {\n");
    
    sb.append("  mustNot: ").append(mustNot).append("\n");
    sb.append("  should: ").append(should).append("\n");
    sb.append("  must: ").append(must).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
