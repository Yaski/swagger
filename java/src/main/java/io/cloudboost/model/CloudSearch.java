package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.FilterBody;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudSearch   {
  
  private FilterBody query = null;
  private List<String> sort = new ArrayList<String>();
  private String collectionName = "table_name_here";
  private String key = null;
  private Integer skip = null;
  private Integer limit = null;

  
  /**
   **/
  public CloudSearch query(FilterBody query) {
    this.query = query;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("query")
  public FilterBody getQuery() {
    return query;
  }
  public void setQuery(FilterBody query) {
    this.query = query;
  }

  
  /**
   **/
  public CloudSearch sort(List<String> sort) {
    this.sort = sort;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("sort")
  public List<String> getSort() {
    return sort;
  }
  public void setSort(List<String> sort) {
    this.sort = sort;
  }

  
  /**
   **/
  public CloudSearch collectionName(String collectionName) {
    this.collectionName = collectionName;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("collectionName")
  public String getCollectionName() {
    return collectionName;
  }
  public void setCollectionName(String collectionName) {
    this.collectionName = collectionName;
  }

  
  /**
   **/
  public CloudSearch key(String key) {
    this.key = key;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("key")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

  
  /**
   **/
  public CloudSearch skip(Integer skip) {
    this.skip = skip;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("skip")
  public Integer getSkip() {
    return skip;
  }
  public void setSkip(Integer skip) {
    this.skip = skip;
  }

  
  /**
   **/
  public CloudSearch limit(Integer limit) {
    this.limit = limit;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("limit")
  public Integer getLimit() {
    return limit;
  }
  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CloudSearch cloudSearch = (CloudSearch) o;
    return Objects.equals(this.query, cloudSearch.query) &&
        Objects.equals(this.sort, cloudSearch.sort) &&
        Objects.equals(this.collectionName, cloudSearch.collectionName) &&
        Objects.equals(this.key, cloudSearch.key) &&
        Objects.equals(this.skip, cloudSearch.skip) &&
        Objects.equals(this.limit, cloudSearch.limit);
  }

  @Override
  public int hashCode() {
    return Objects.hash(query, sort, collectionName, key, skip, limit);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudSearch {\n");
    
    sb.append("    query: ").append(toIndentedString(query)).append("\n");
    sb.append("    sort: ").append(toIndentedString(sort)).append("\n");
    sb.append("    collectionName: ").append(toIndentedString(collectionName)).append("\n");
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    skip: ").append(toIndentedString(skip)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
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

