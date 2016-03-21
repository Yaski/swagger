# SwaggerClient::CloudSearchApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**search**](CloudSearchApi.md#search) | **POST** data/{app_id}/{table_name}/search | search for cloudobjects following the criteria defined herein


# **search**
> Array&lt;CloudObject&gt; search(app_id, table_name, body)

search for cloudobjects following the criteria defined herein



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudSearchApi.new

app_id = "app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudSearch.new # CloudSearch | query body


begin
  #search for cloudobjects following the criteria defined herein
  result = api_instance.search(app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudSearchApi->search: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudSearch**](CloudSearch.md)| query body | 

### Return type

[**Array&lt;CloudObject&gt;**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



