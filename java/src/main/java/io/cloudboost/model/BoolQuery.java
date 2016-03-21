package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.SearchQuery;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class BoolQuery   {
  
  private SearchQuery bool = null;

  
  /**
   **/
  public BoolQuery bool(SearchQuery bool) {
    this.bool = bool;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("bool")
  public SearchQuery getBool() {
    return bool;
  }
  public void setBool(SearchQuery bool) {
    this.bool = bool;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BoolQuery boolQuery = (BoolQuery) o;
    return Objects.equals(this.bool, boolQuery.bool);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bool);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BoolQuery {\n");
    
    sb.append("    bool: ").append(toIndentedString(bool)).append("\n");
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

