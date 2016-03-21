package io.swagger.client.model;

import io.swagger.client.model.SearchQuery;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class BoolQuery  {
  
  @SerializedName("bool")
  private SearchQuery bool = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public SearchQuery getBool() {
    return bool;
  }
  public void setBool(SearchQuery bool) {
    this.bool = bool;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class BoolQuery {\n");
    
    sb.append("  bool: ").append(bool).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
