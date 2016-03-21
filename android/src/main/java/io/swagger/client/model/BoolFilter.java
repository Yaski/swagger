package io.swagger.client.model;

import io.swagger.client.model.SearchFilter;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class BoolFilter  {
  
  @SerializedName("bool")
  private SearchFilter bool = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public SearchFilter getBool() {
    return bool;
  }
  public void setBool(SearchFilter bool) {
    this.bool = bool;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class BoolFilter {\n");
    
    sb.append("  bool: ").append(bool).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
