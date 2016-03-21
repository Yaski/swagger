package io.swagger.client.model;

import io.swagger.client.model.CloudQuery;
import io.swagger.client.model.Query;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudQueryFindOne extends CloudQuery {
  
  @SerializedName("key")
  private String key = null;
  @SerializedName("skip")
  private Integer skip = null;
  @SerializedName("limit")
  private Integer limit = null;
  @SerializedName("query")
  private Query query = null;
  @SerializedName("sort")
  private Object sort = null;
  @SerializedName("select")
  private Object select = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getSkip() {
    return skip;
  }
  public void setSkip(Integer skip) {
    this.skip = skip;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLimit() {
    return limit;
  }
  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Query getQuery() {
    return query;
  }
  public void setQuery(Query query) {
    this.query = query;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Object getSort() {
    return sort;
  }
  public void setSort(Object sort) {
    this.sort = sort;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Object getSelect() {
    return select;
  }
  public void setSelect(Object select) {
    this.select = select;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudQueryFindOne {\n");
    sb.append("  " + super.toString()).append("\n");
    sb.append("  key: ").append(key).append("\n");
    sb.append("  skip: ").append(skip).append("\n");
    sb.append("  limit: ").append(limit).append("\n");
    sb.append("  query: ").append(query).append("\n");
    sb.append("  sort: ").append(sort).append("\n");
    sb.append("  select: ").append(select).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
