# SwaggerClient::CloudRoleApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_role**](CloudRoleApi.md#create_role) | **PUT** data/{app_id}/Role | create a new cloudrole


# **create_role**
> CloudRole create_role(app_id, body)

create a new cloudrole



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudRoleApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::RoleBody.new # RoleBody | request body


begin
  #create a new cloudrole
  result = api_instance.create_role(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudRoleApi->create_role: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**RoleBody**](RoleBody.md)| request body | 

### Return type

[**CloudRole**](CloudRole.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



