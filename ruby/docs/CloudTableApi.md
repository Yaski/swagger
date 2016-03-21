# SwaggerClient::CloudTableApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_table**](CloudTableApi.md#delete_table) | **DELETE** app/{app_id}/{table_name} | 
[**get**](CloudTableApi.md#get) | **POST** app/{app_id}/{table_name} | 
[**get_all**](CloudTableApi.md#get_all) | **POST** /app/{app_id}/_getAll | 
[**save**](CloudTableApi.md#save) | **PUT** app/{app_id}/{table_name} | 


# **delete_table**
> CloudTable delete_table(table_name, app_id, body)



delete a cloud table

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudTableApi.new

table_name = "table_name_example" # String | name of cloud table

app_id = "app_id_example" # String | cloud app id

body = SwaggerClient::CloudTableSave.new # CloudTableSave | master key and app id


begin
  result = api_instance.delete_table(table_name, app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudTableApi->delete_table: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **table_name** | **String**| name of cloud table | 
 **app_id** | **String**| cloud app id | 
 **body** | [**CloudTableSave**](CloudTableSave.md)| master key and app id | 

### Return type

[**CloudTable**](CloudTable.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get**
> CloudTable get(table_name, app_id, body)



get a table

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudTableApi.new

table_name = "table_name_example" # String | name of cloud table

app_id = "app_id_example" # String | id of app

body = SwaggerClient::KeyBody.new # KeyBody | master key and app id


begin
  result = api_instance.get(table_name, app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudTableApi->get: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **table_name** | **String**| name of cloud table | 
 **app_id** | **String**| id of app | 
 **body** | [**KeyBody**](KeyBody.md)| master key and app id | 

### Return type

[**CloudTable**](CloudTable.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_all**
> get_all(app_id, body)



get all tables in app

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudTableApi.new

app_id = "app_id_example" # String | app id

body = SwaggerClient::KeyBody.new # KeyBody | master key


begin
  api_instance.get_all(app_id, body)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudTableApi->get_all: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| app id | 
 **body** | [**KeyBody**](KeyBody.md)| master key | 

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **save**
> CloudTable save(table_name, app_id, body)



save a cloud table

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudTableApi.new

table_name = "table_name_example" # String | name of cloud table

app_id = "app_id_example" # String | cloud app id

body = SwaggerClient::CloudTableSave.new # CloudTableSave | master key and app id


begin
  result = api_instance.save(table_name, app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudTableApi->save: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **table_name** | **String**| name of cloud table | 
 **app_id** | **String**| cloud app id | 
 **body** | [**CloudTableSave**](CloudTableSave.md)| master key and app id | 

### Return type

[**CloudTable**](CloudTable.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



