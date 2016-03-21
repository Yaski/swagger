# SwaggerClient::CloudCacheApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**clear_cache**](CloudCacheApi.md#clear_cache) | **DELETE** cache/{app_id}/{cache_name}/clear | clear all items from a cloud cache
[**create_cache**](CloudCacheApi.md#create_cache) | **POST** cache/{app_id}/{cache_name}/create | create a cloud cache
[**delete_all_cache**](CloudCacheApi.md#delete_all_cache) | **DELETE** cache/{app_id} | delete all CloudCaches
[**delete_cache**](CloudCacheApi.md#delete_cache) | **DELETE** cache/{app_id}/{cache_name} | delete a CloudCache
[**delete_item**](CloudCacheApi.md#delete_item) | **DELETE** cache/{app_id}/{cache_name}/item/{data_key} | delete item from a cloud cache
[**get_all_cache**](CloudCacheApi.md#get_all_cache) | **POST** cache/{app_id} | get all CloudCaches
[**get_all_items**](CloudCacheApi.md#get_all_items) | **POST** cache/{app_id}/{cache_name}/items | get all items from a cloud cache
[**get_cache_info**](CloudCacheApi.md#get_cache_info) | **POST** cache/{app_id}/{cache_name} | get info about a CloudCache
[**get_item**](CloudCacheApi.md#get_item) | **POST** cache/{app_id}/{cache_name}/{data_key}/item | get item from a cloud cache
[**get_items_count**](CloudCacheApi.md#get_items_count) | **POST** cache/{app_id}/{cache_name}/items/count | count items in a cloud cache
[**set**](CloudCacheApi.md#set) | **PUT** cache/{app_id}/{cache_name}/{data_key} | add item to a cloud cache


# **clear_cache**
> Array&lt;CacheRequest&gt; clear_cache(app_id, cache_name, body)

clear all items from a cloud cache

clear all items from a cloud cache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #clear all items from a cloud cache
  result = api_instance.clear_cache(app_id, cache_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->clear_cache: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

[**Array&lt;CacheRequest&gt;**](CacheRequest.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **create_cache**
> Cache create_cache(app_id, cache_name, body)

create a cloud cache

create a cloud cache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #create a cloud cache
  result = api_instance.create_cache(app_id, cache_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->create_cache: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

[**Cache**](Cache.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **delete_all_cache**
> Array&lt;CacheRequest&gt; delete_all_cache(app_id, body)

delete all CloudCaches

delete all CloudCaches

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #delete all CloudCaches
  result = api_instance.delete_all_cache(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->delete_all_cache: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

[**Array&lt;CacheRequest&gt;**](CacheRequest.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **delete_cache**
> CacheRequest delete_cache(app_id, cache_name, body)

delete a CloudCache

delete a CloudCache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #delete a CloudCache
  result = api_instance.delete_cache(app_id, cache_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->delete_cache: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

[**CacheRequest**](CacheRequest.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **delete_item**
> String delete_item(app_id, cache_name, data_key, body)

delete item from a cloud cache

delete item from a cloud cache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

data_key = "data_key_example" # String | key under which data to delete is cached

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #delete item from a cloud cache
  result = api_instance.delete_item(app_id, cache_name, data_key, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->delete_item: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **data_key** | **String**| key under which data to delete is cached | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_all_cache**
> Array&lt;Cache&gt; get_all_cache(app_id, body)

get all CloudCaches

get all CloudCaches

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #get all CloudCaches
  result = api_instance.get_all_cache(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->get_all_cache: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

[**Array&lt;Cache&gt;**](Cache.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_all_items**
> Array&lt;CacheItem&gt; get_all_items(app_id, cache_name, body)

get all items from a cloud cache

get all items from a cloud cache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #get all items from a cloud cache
  result = api_instance.get_all_items(app_id, cache_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->get_all_items: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

[**Array&lt;CacheItem&gt;**](CacheItem.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_cache_info**
> Cache get_cache_info(app_id, cache_name, body)

get info about a CloudCache

get info about a CloudCache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #get info about a CloudCache
  result = api_instance.get_cache_info(app_id, cache_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->get_cache_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

[**Cache**](Cache.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_item**
> String get_item(app_id, cache_name, data_key, body)

get item from a cloud cache

get item from a cloud cache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

data_key = "data_key_example" # String | key under which data should be got in cache

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #get item from a cloud cache
  result = api_instance.get_item(app_id, cache_name, data_key, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->get_item: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **data_key** | **String**| key under which data should be got in cache | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_items_count**
> Integer get_items_count(app_id, cache_name, body)

count items in a cloud cache

count items in a cloud cache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

body = SwaggerClient::KeyBody.new # KeyBody | master key of app


begin
  #count items in a cloud cache
  result = api_instance.get_items_count(app_id, cache_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->get_items_count: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **body** | [**KeyBody**](KeyBody.md)| master key of app | 

### Return type

**Integer**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **set**
> String set(app_id, cache_name, data_key, body)

add item to a cloud cache

add item to a cloud cache

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudCacheApi.new

app_id = "app_id_example" # String | Id of CloudApp

cache_name = "cache_name_example" # String | Name of cache

data_key = "data_key_example" # String | key under which data should be store in cache

body = SwaggerClient::CacheRequest.new # CacheRequest | cache data and master key included got from this object


begin
  #add item to a cloud cache
  result = api_instance.set(app_id, cache_name, data_key, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudCacheApi->set: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **cache_name** | **String**| Name of cache | 
 **data_key** | **String**| key under which data should be store in cache | 
 **body** | [**CacheRequest**](CacheRequest.md)| cache data and master key included got from this object | 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json, text/plain;charset=utf-8



