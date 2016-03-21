# SwaggerClient::CloudObjectApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete**](CloudObjectApi.md#delete) | **DELETE** data/{app_id}/{table_name} | deletes a cloud object from cloudapp
[**save**](CloudObjectApi.md#save) | **PUT** data/{app_id}/{table_name} | saves a cloud object to cloudboost


# **delete**
> CloudObject delete(app_id, table_name, body)

deletes a cloud object from cloudapp

deletes a cloud object from cloudapp

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudObjectApi.new

app_id = "app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudObjectSaveRequest.new # CloudObjectSaveRequest | CloudObject that needs to be added to the cloudboost


begin
  #deletes a cloud object from cloudapp
  result = api_instance.delete(app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudObjectApi->delete: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudObjectSaveRequest**](CloudObjectSaveRequest.md)| CloudObject that needs to be added to the cloudboost | 

### Return type

[**CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **save**
> CloudObject save(app_id, table_name, body)

saves a cloud object to cloudboost



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudObjectApi.new

app_id = "app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudObjectSaveRequest.new # CloudObjectSaveRequest | CloudObject that needs to be added to cloudboost


begin
  #saves a cloud object to cloudboost
  result = api_instance.save(app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudObjectApi->save: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudObjectSaveRequest**](CloudObjectSaveRequest.md)| CloudObject that needs to be added to cloudboost | 

### Return type

[**CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



