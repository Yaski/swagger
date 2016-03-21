package io.swagger.client.model;

import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Query  {
  
  @SerializedName("$includeList")
  private List<String> includeList = null;
  @SerializedName("$include")
  private List<String> include = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getIncludeList() {
    return includeList;
  }
  public void setIncludeList(List<String> includeList) {
    this.includeList = includeList;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getInclude() {
    return include;
  }
  public void setInclude(List<String> include) {
    this.include = include;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Query {\n");
    
    sb.append("  includeList: ").append(includeList).append("\n");
    sb.append("  include: ").append(include).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
