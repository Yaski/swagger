package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.CloudQuery;
import io.cloudboost.model.Query;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class CloudQueryDistinct extends CloudQuery  {
  
  private String key = null;
  private Integer skip = null;
  private Integer limit = null;
  private Query query = null;
  private Object sort = null;
  private Object select = null;
  private List<String> onKey = new ArrayList<String>();

  
  /**
   **/
  public CloudQueryDistinct key(String key) {
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
  public CloudQueryDistinct skip(Integer skip) {
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
  public CloudQueryDistinct limit(Integer limit) {
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
  public CloudQueryDistinct query(Query query) {
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
  public CloudQueryDistinct sort(Object sort) {
    this.sort = sort;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("sort")
  public Object getSort() {
    return sort;
  }
  public void setSort(Object sort) {
    this.sort = sort;
  }

  
  /**
   **/
  public CloudQueryDistinct select(Object select) {
    this.select = select;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("select")
  public Object getSelect() {
    return select;
  }
  public void setSelect(Object select) {
    this.select = select;
  }

  
  /**
   **/
  public CloudQueryDistinct onKey(List<String> onKey) {
    this.onKey = onKey;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("onKey")
  public List<String> getOnKey() {
    return onKey;
  }
  public void setOnKey(List<String> onKey) {
    this.onKey = onKey;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CloudQueryDistinct cloudQueryDistinct = (CloudQueryDistinct) o;
    return Objects.equals(this.key, cloudQueryDistinct.key) &&
        Objects.equals(this.skip, cloudQueryDistinct.skip) &&
        Objects.equals(this.limit, cloudQueryDistinct.limit) &&
        Objects.equals(this.query, cloudQueryDistinct.query) &&
        Objects.equals(this.sort, cloudQueryDistinct.sort) &&
        Objects.equals(this.select, cloudQueryDistinct.select) &&
        Objects.equals(this.onKey, cloudQueryDistinct.onKey) &&
        super.equals(o);
  }

  @Override
  public int hashCode() {
    return Objects.hash(key, skip, limit, query, sort, select, onKey, super.hashCode());
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudQueryDistinct {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    skip: ").append(toIndentedString(skip)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
    sb.append("    query: ").append(toIndentedString(query)).append("\n");
    sb.append("    sort: ").append(toIndentedString(sort)).append("\n");
    sb.append("    select: ").append(toIndentedString(select)).append("\n");
    sb.append("    onKey: ").append(toIndentedString(onKey)).append("\n");
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

