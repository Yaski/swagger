# SwaggerClient::CloudFileApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_file**](CloudFileApi.md#delete_file) | **DELETE** file/{app_id}/{file_id} | deletes file
[**fetch_file_content**](CloudFileApi.md#fetch_file_content) | **POST** file/{app_id}/{file_id} | fetch file content
[**save_file**](CloudFileApi.md#save_file) | **POST** file/{app_id} | uploads a file
[**save_file_data**](CloudFileApi.md#save_file_data) | **POST** file/{my_app_id} | uploads a file with data


# **delete_file**
> String delete_file(app_id, file_id, opts)

deletes file



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudFileApi.new

app_id = "app_id_example" # String | ID of app

file_id = "file_id_example" # String | file id

opts = { 
  body: SwaggerClient::KeyBody.new # KeyBody | request body
}

begin
  #deletes file
  result = api_instance.delete_file(app_id, file_id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudFileApi->delete_file: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **file_id** | **String**| file id | 
 **body** | [**KeyBody**](KeyBody.md)| request body | [optional] 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **fetch_file_content**
> String fetch_file_content(app_id, file_id, opts)

fetch file content



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudFileApi.new

app_id = "app_id_example" # String | ID of app

file_id = "file_id_example" # String | file id

opts = { 
  body: SwaggerClient::KeyBody.new # KeyBody | request body
}

begin
  #fetch file content
  result = api_instance.fetch_file_content(app_id, file_id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudFileApi->fetch_file_content: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **file_id** | **String**| file id | 
 **body** | [**KeyBody**](KeyBody.md)| request body | [optional] 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/octet-stream



# **save_file**
> String save_file(app_id, file_obj, opts)

uploads a file



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudFileApi.new

app_id = "app_id_example" # String | ID of app

file_obj = "file_obj_example" # String | file extra data

opts = { 
  key: "key_example", # String | app key
  file_to_upload: File.new("/path/to/file.txt") # File | file to upload
}

begin
  #uploads a file
  result = api_instance.save_file(app_id, file_obj, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudFileApi->save_file: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **file_obj** | **String**| file extra data | 
 **key** | **String**| app key | [optional] 
 **file_to_upload** | **File**| file to upload | [optional] 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json



# **save_file_data**
> String save_file_data(my_app_id, file_obj)

uploads a file with data



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudFileApi.new

my_app_id = "my_app_id_example" # String | ID of app

file_obj = SwaggerClient::FileBody.new # FileBody | file extra data


begin
  #uploads a file with data
  result = api_instance.save_file_data(my_app_id, file_obj)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudFileApi->save_file_data: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **my_app_id** | **String**| ID of app | 
 **file_obj** | [**FileBody**](FileBody.md)| file extra data | 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



