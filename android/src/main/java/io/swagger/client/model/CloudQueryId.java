package io.swagger.client.model;

import io.swagger.client.model.Query;
import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudQueryId extends Query {
  
  @SerializedName("$includeList")
  private List<String> includeList = null;
  @SerializedName("$include")
  private List<String> include = null;
  @SerializedName("_id")
  private String id = null;

  
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

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudQueryId {\n");
    sb.append("  " + super.toString()).append("\n");
    sb.append("  includeList: ").append(includeList).append("\n");
    sb.append("  include: ").append(include).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
