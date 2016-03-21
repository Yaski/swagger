# SwaggerClient::CloudQueryApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**count**](CloudQueryApi.md#count) | **POST** data/{app_id}/{table_name}/count | count items in a table that match this query criteria
[**distinct**](CloudQueryApi.md#distinct) | **POST** data/{app_id}/{table_name}/distinct | distinct query criteria
[**find**](CloudQueryApi.md#find) | **POST** data/{app_id}/{table_name}/find | find CloudObject meeting this query criteria
[**find_by_id**](CloudQueryApi.md#find_by_id) | **POST** data/{cloud_app_id}/{table_name}/find | find CloudObject with specific _id
[**find_one**](CloudQueryApi.md#find_one) | **POST** data/{app_id}/{table_name}/findOne | find a single CloudObject


# **count**
> Integer count(app_id, table_name, body)

count items in a table that match this query criteria

count items in a table that match this query criteria

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueryApi.new

app_id = "app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudQueryCount.new # CloudQueryCount | query body


begin
  #count items in a table that match this query criteria
  result = api_instance.count(app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueryApi->count: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudQueryCount**](CloudQueryCount.md)| query body | 

### Return type

**Integer**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **distinct**
> Array&lt;CloudObject&gt; distinct(app_id, table_name, body)

distinct query criteria



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueryApi.new

app_id = "app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudQueryDistinct.new # CloudQueryDistinct | query body


begin
  #distinct query criteria
  result = api_instance.distinct(app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueryApi->distinct: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudQueryDistinct**](CloudQueryDistinct.md)| query body | 

### Return type

[**Array&lt;CloudObject&gt;**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **find**
> Array&lt;CloudObject&gt; find(app_id, table_name, body)

find CloudObject meeting this query criteria



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueryApi.new

app_id = "app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudQuery.new # CloudQuery | query object


begin
  #find CloudObject meeting this query criteria
  result = api_instance.find(app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueryApi->find: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudQuery**](CloudQuery.md)| query object | 

### Return type

[**Array&lt;CloudObject&gt;**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **find_by_id**
> CloudObject find_by_id(cloud_app_id, table_name, body)

find CloudObject with specific _id



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueryApi.new

cloud_app_id = "cloud_app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudQueryFindById.new # CloudQueryFindById | query body


begin
  #find CloudObject with specific _id
  result = api_instance.find_by_id(cloud_app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueryApi->find_by_id: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cloud_app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudQueryFindById**](CloudQueryFindById.md)| query body | 

### Return type

[**CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **find_one**
> CloudObject find_one(app_id, table_name, body)

find a single CloudObject



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueryApi.new

app_id = "app_id_example" # String | CloudApp id

table_name = "table_name_example" # String | cloud table name

body = SwaggerClient::CloudQueryFindOne.new # CloudQueryFindOne | query body


begin
  #find a single CloudObject
  result = api_instance.find_one(app_id, table_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueryApi->find_one: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| CloudApp id | 
 **table_name** | **String**| cloud table name | 
 **body** | [**CloudQueryFindOne**](CloudQueryFindOne.md)| query body | 

### Return type

[**CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



