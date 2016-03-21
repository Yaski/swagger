package io.swagger.client.model;

import io.swagger.client.model.BoolFilter;
import io.swagger.client.model.BoolQuery;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Filtered  {
  
  @SerializedName("query")
  private BoolQuery query = null;
  @SerializedName("filter")
  private BoolFilter filter = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public BoolQuery getQuery() {
    return query;
  }
  public void setQuery(BoolQuery query) {
    this.query = query;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public BoolFilter getFilter() {
    return filter;
  }
  public void setFilter(BoolFilter filter) {
    this.filter = filter;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Filtered {\n");
    
    sb.append("  query: ").append(query).append("\n");
    sb.append("  filter: ").append(filter).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
