package io.swagger.client.model;

import io.swagger.client.model.FilterBody;
import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudSearch  {
  
  @SerializedName("query")
  private FilterBody query = null;
  @SerializedName("sort")
  private List<String> sort = null;
  @SerializedName("collectionName")
  private String collectionName = null;
  @SerializedName("key")
  private String key = null;
  @SerializedName("skip")
  private Integer skip = null;
  @SerializedName("limit")
  private Integer limit = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public FilterBody getQuery() {
    return query;
  }
  public void setQuery(FilterBody query) {
    this.query = query;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getSort() {
    return sort;
  }
  public void setSort(List<String> sort) {
    this.sort = sort;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCollectionName() {
    return collectionName;
  }
  public void setCollectionName(String collectionName) {
    this.collectionName = collectionName;
  }

  
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

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudSearch {\n");
    
    sb.append("  query: ").append(query).append("\n");
    sb.append("  sort: ").append(sort).append("\n");
    sb.append("  collectionName: ").append(collectionName).append("\n");
    sb.append("  key: ").append(key).append("\n");
    sb.append("  skip: ").append(skip).append("\n");
    sb.append("  limit: ").append(limit).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
