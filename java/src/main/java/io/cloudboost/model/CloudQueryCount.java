package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.CloudQuery;
import io.cloudboost.model.Query;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudQueryCount extends CloudQuery  {
  
  private String key = null;
  private Integer skip = null;
  private Integer limit = null;
  private Query query = null;
  private String sort = null;
  private String select = null;

  
  /**
   **/
  public CloudQueryCount key(String key) {
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
  public CloudQueryCount skip(Integer skip) {
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
  public CloudQueryCount limit(Integer limit) {
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

  
  /**
   **/
  public CloudQueryCount query(Query query) {
    this.query = query;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("query")
  public Query getQuery() {
    return query;
  }
  public void setQuery(Query query) {
    this.query = query;
  }

  
  /**
   **/
  public CloudQueryCount sort(String sort) {
    this.sort = sort;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("sort")
  public String getSort() {
    return sort;
  }
  public void setSort(String sort) {
    this.sort = sort;
  }

  
  /**
   **/
  public CloudQueryCount select(String select) {
    this.select = select;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("select")
  public String getSelect() {
    return select;
  }
  public void setSelect(String select) {
    this.select = select;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CloudQueryCount cloudQueryCount = (CloudQueryCount) o;
    return Objects.equals(this.key, cloudQueryCount.key) &&
        Objects.equals(this.skip, cloudQueryCount.skip) &&
        Objects.equals(this.limit, cloudQueryCount.limit) &&
        Objects.equals(this.query, cloudQueryCount.query) &&
        Objects.equals(this.sort, cloudQueryCount.sort) &&
        Objects.equals(this.select, cloudQueryCount.select) &&
        super.equals(o);
  }

  @Override
  public int hashCode() {
    return Objects.hash(key, skip, limit, query, sort, select, super.hashCode());
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudQueryCount {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    skip: ").append(toIndentedString(skip)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
    sb.append("    query: ").append(toIndentedString(query)).append("\n");
    sb.append("    sort: ").append(toIndentedString(sort)).append("\n");
    sb.append("    select: ").append(toIndentedString(select)).append("\n");
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

