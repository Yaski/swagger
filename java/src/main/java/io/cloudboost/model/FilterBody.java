package io.cloudboost.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.cloudboost.model.Filtered;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-03-21T16:08:35.479Z")
public class FilterBody   {
  
  private Filtered filtered = null;

  
  /**
   **/
  public FilterBody filtered(Filtered filtered) {
    this.filtered = filtered;
    return this;
  }
  
  @ApiModelProperty(example = "null", value = "")
  @JsonProperty("filtered")
  public Filtered getFiltered() {
    return filtered;
  }
  public void setFiltered(Filtered filtered) {
    this.filtered = filtered;
  }

  

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FilterBody filterBody = (FilterBody) o;
    return Objects.equals(this.filtered, filterBody.filtered);
  }

  @Override
  public int hashCode() {
    return Objects.hash(filtered);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FilterBody {\n");
    
    sb.append("    filtered: ").append(toIndentedString(filtered)).append("\n");
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

