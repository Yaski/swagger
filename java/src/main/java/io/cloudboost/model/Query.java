package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class Query   {
  
  private List<String> includeList = new ArrayList<String>();
  private List<String> include = new ArrayList<String>();

  
  /**
   **/
  public Query includeList(List<String> includeList) {
    this.includeList = includeList;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("$includeList")
  public List<String> getIncludeList() {
    return includeList;
  }
  public void setIncludeList(List<String> includeList) {
    this.includeList = includeList;
  }

  
  /**
   **/
  public Query include(List<String> include) {
    this.include = include;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("$include")
  public List<String> getInclude() {
    return include;
  }
  public void setInclude(List<String> include) {
    this.include = include;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Query query = (Query) o;
    return Objects.equals(this.includeList, query.includeList) &&
        Objects.equals(this.include, query.include);
  }

  @Override
  public int hashCode() {
    return Objects.hash(includeList, include);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Query {\n");
    
    sb.append("    includeList: ").append(toIndentedString(includeList)).append("\n");
    sb.append("    include: ").append(toIndentedString(include)).append("\n");
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

