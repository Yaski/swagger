package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.BoolFilter;
import io.cloudboost.model.BoolQuery;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class Filtered   {
  
  private BoolQuery query = null;
  private BoolFilter filter = null;

  
  /**
   **/
  public Filtered query(BoolQuery query) {
    this.query = query;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("query")
  public BoolQuery getQuery() {
    return query;
  }
  public void setQuery(BoolQuery query) {
    this.query = query;
  }

  
  /**
   **/
  public Filtered filter(BoolFilter filter) {
    this.filter = filter;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("filter")
  public BoolFilter getFilter() {
    return filter;
  }
  public void setFilter(BoolFilter filter) {
    this.filter = filter;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Filtered filtered = (Filtered) o;
    return Objects.equals(this.query, filtered.query) &&
        Objects.equals(this.filter, filtered.filter);
  }

  @Override
  public int hashCode() {
    return Objects.hash(query, filter);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Filtered {\n");
    
    sb.append("    query: ").append(toIndentedString(query)).append("\n");
    sb.append("    filter: ").append(toIndentedString(filter)).append("\n");
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

