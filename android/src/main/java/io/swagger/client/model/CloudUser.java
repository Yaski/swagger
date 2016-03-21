package io.swagger.client.model;

import io.swagger.client.model.CloudObject;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class CloudUser extends CloudObject {
  

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CloudUser {\n");
    sb.append("  " + super.toString()).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
