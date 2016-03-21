package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class SearchQuery   {
  
  private List<String> mustNot = new ArrayList<String>();
  private List<String> should = new ArrayList<String>();
  private List<String> must = new ArrayList<String>();

  
  /**
   **/
  public SearchQuery mustNot(List<String> mustNot) {
    this.mustNot = mustNot;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("must_not")
  public List<String> getMustNot() {
    return mustNot;
  }
  public void setMustNot(List<String> mustNot) {
    this.mustNot = mustNot;
  }

  
  /**
   **/
  public SearchQuery should(List<String> should) {
    this.should = should;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("should")
  public List<String> getShould() {
    return should;
  }
  public void setShould(List<String> should) {
    this.should = should;
  }

  
  /**
   **/
  public SearchQuery must(List<String> must) {
    this.must = must;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("must")
  public List<String> getMust() {
    return must;
  }
  public void setMust(List<String> must) {
    this.must = must;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SearchQuery searchQuery = (SearchQuery) o;
    return Objects.equals(this.mustNot, searchQuery.mustNot) &&
        Objects.equals(this.should, searchQuery.should) &&
        Objects.equals(this.must, searchQuery.must);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mustNot, should, must);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SearchQuery {\n");
    
    sb.append("    mustNot: ").append(toIndentedString(mustNot)).append("\n");
    sb.append("    should: ").append(toIndentedString(should)).append("\n");
    sb.append("    must: ").append(toIndentedString(must)).append("\n");
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

