# Swagger\Client\CloudCacheApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**clearCache**](CloudCacheApi.md#clearCache) | **DELETE** cache/{app_id}/{cache_name}/clear | clear all items from a cloud cache
[**createCache**](CloudCacheApi.md#createCache) | **POST** cache/{app_id}/{cache_name}/create | create a cloud cache
[**deleteAllCache**](CloudCacheApi.md#deleteAllCache) | **DELETE** cache/{app_id} | delete all CloudCaches
[**deleteCache**](CloudCacheApi.md#deleteCache) | **DELETE** cache/{app_id}/{cache_name} | delete a CloudCache
[**deleteItem**](CloudCacheApi.md#deleteItem) | **DELETE** cache/{app_id}/{cache_name}/item/{data_key} | delete item from a cloud cache
[**getAllCache**](CloudCacheApi.md#getAllCache) | **POST** cache/{app_id} | get all CloudCaches
[**getAllItems**](CloudCacheApi.md#getAllItems) | **POST** cache/{app_id}/{cache_name}/items | get all items from a cloud cache
[**getCacheInfo**](CloudCacheApi.md#getCacheInfo) | **POST** cache/{app_id}/{cache_name} | get info about a CloudCache
[**getItem**](CloudCacheApi.md#getItem) | **POST** cache/{app_id}/{cache_name}/{data_key}/item | get item from a cloud cache
[**getItemsCount**](CloudCacheApi.md#getItemsCount) | **POST** cache/{app_id}/{cache_name}/items/count | count items in a cloud cache
[**set**](CloudCacheApi.md#set) | **PUT** cache/{app_id}/{cache_name}/{data_key} | add item to a cloud cache


# **clearCache**
> \Swagger\Client\Model\CacheRequest[] clearCache($app_id, $cache_name, $body)

clear all items from a cloud cache

clear all items from a cloud cache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->clearCache($app_id, $cache_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->clearCache: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

[**\Swagger\Client\Model\CacheRequest[]**](CacheRequest.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCache**
> \Swagger\Client\Model\Cache createCache($app_id, $cache_name, $body)

create a cloud cache

create a cloud cache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->createCache($app_id, $cache_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->createCache: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

[**\Swagger\Client\Model\Cache**](Cache.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAllCache**
> \Swagger\Client\Model\CacheRequest[] deleteAllCache($app_id, $body)

delete all CloudCaches

delete all CloudCaches

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->deleteAllCache($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->deleteAllCache: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

[**\Swagger\Client\Model\CacheRequest[]**](CacheRequest.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCache**
> \Swagger\Client\Model\CacheRequest deleteCache($app_id, $cache_name, $body)

delete a CloudCache

delete a CloudCache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->deleteCache($app_id, $cache_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->deleteCache: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

[**\Swagger\Client\Model\CacheRequest**](CacheRequest.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteItem**
> string deleteItem($app_id, $cache_name, $data_key, $body)

delete item from a cloud cache

delete item from a cloud cache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$data_key = "data_key_example"; // string | key under which data to delete is cached
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->deleteItem($app_id, $cache_name, $data_key, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->deleteItem: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **data_key** | **string**| key under which data to delete is cached | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAllCache**
> \Swagger\Client\Model\Cache[] getAllCache($app_id, $body)

get all CloudCaches

get all CloudCaches

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->getAllCache($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->getAllCache: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

[**\Swagger\Client\Model\Cache[]**](Cache.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAllItems**
> \Swagger\Client\Model\CacheItem[] getAllItems($app_id, $cache_name, $body)

get all items from a cloud cache

get all items from a cloud cache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->getAllItems($app_id, $cache_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->getAllItems: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

[**\Swagger\Client\Model\CacheItem[]**](CacheItem.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCacheInfo**
> \Swagger\Client\Model\Cache getCacheInfo($app_id, $cache_name, $body)

get info about a CloudCache

get info about a CloudCache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->getCacheInfo($app_id, $cache_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->getCacheInfo: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

[**\Swagger\Client\Model\Cache**](Cache.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getItem**
> string getItem($app_id, $cache_name, $data_key, $body)

get item from a cloud cache

get item from a cloud cache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$data_key = "data_key_example"; // string | key under which data should be got in cache
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->getItem($app_id, $cache_name, $data_key, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->getItem: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **data_key** | **string**| key under which data should be got in cache | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getItemsCount**
> int getItemsCount($app_id, $cache_name, $body)

count items in a cloud cache

count items in a cloud cache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key of app

try { 
    $result = $api_instance->getItemsCount($app_id, $cache_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->getItemsCount: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key of app | 

### Return type

**int**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set**
> string set($app_id, $cache_name, $data_key, $body)

add item to a cloud cache

add item to a cloud cache

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudCacheApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$cache_name = "cache_name_example"; // string | Name of cache
$data_key = "data_key_example"; // string | key under which data should be store in cache
$body = new \Swagger\Client\Model\CacheRequest(); // \Swagger\Client\Model\CacheRequest | cache data and master key included got from this object

try { 
    $result = $api_instance->set($app_id, $cache_name, $data_key, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudCacheApi->set: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **cache_name** | **string**| Name of cache | 
 **data_key** | **string**| key under which data should be store in cache | 
 **body** | [**\Swagger\Client\Model\CacheRequest**](\Swagger\Client\Model\CacheRequest.md)| cache data and master key included got from this object | 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json, text/plain;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

