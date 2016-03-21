package io.swagger.client.model;

import io.swagger.client.model.Filtered;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class FilterBody  {
  
  @SerializedName("filtered")
  private Filtered filtered = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Filtered getFiltered() {
    return filtered;
  }
  public void setFiltered(Filtered filtered) {
    this.filtered = filtered;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class FilterBody {\n");
    
    sb.append("  filtered: ").append(filtered).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
