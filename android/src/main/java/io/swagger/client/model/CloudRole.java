package io.swagger.client.model;

import io.swagger.client.model.CloudObject;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudRole extends CloudObject {
  

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudRole {\n");
    sb.append("  " + super.toString()).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
