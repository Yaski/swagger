# Swagger\Client\CloudQueryApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**count**](CloudQueryApi.md#count) | **POST** data/{app_id}/{table_name}/count | count items in a table that match this query criteria
[**distinct**](CloudQueryApi.md#distinct) | **POST** data/{app_id}/{table_name}/distinct | distinct query criteria
[**find**](CloudQueryApi.md#find) | **POST** data/{app_id}/{table_name}/find | find CloudObject meeting this query criteria
[**findById**](CloudQueryApi.md#findById) | **POST** data/{cloud_app_id}/{table_name}/find | find CloudObject with specific _id
[**findOne**](CloudQueryApi.md#findOne) | **POST** data/{app_id}/{table_name}/findOne | find a single CloudObject


# **count**
> int count($app_id, $table_name, $body)

count items in a table that match this query criteria

count items in a table that match this query criteria

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueryApi();
$app_id = "app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudQueryCount(); // \Swagger\Client\Model\CloudQueryCount | query body

try { 
    $result = $api_instance->count($app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueryApi->count: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudQueryCount**](\Swagger\Client\Model\CloudQueryCount.md)| query body | 

### Return type

**int**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **distinct**
> \Swagger\Client\Model\CloudObject[] distinct($app_id, $table_name, $body)

distinct query criteria



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueryApi();
$app_id = "app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudQueryDistinct(); // \Swagger\Client\Model\CloudQueryDistinct | query body

try { 
    $result = $api_instance->distinct($app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueryApi->distinct: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudQueryDistinct**](\Swagger\Client\Model\CloudQueryDistinct.md)| query body | 

### Return type

[**\Swagger\Client\Model\CloudObject[]**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **find**
> \Swagger\Client\Model\CloudObject[] find($app_id, $table_name, $body)

find CloudObject meeting this query criteria



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueryApi();
$app_id = "app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudQuery(); // \Swagger\Client\Model\CloudQuery | query object

try { 
    $result = $api_instance->find($app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueryApi->find: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudQuery**](\Swagger\Client\Model\CloudQuery.md)| query object | 

### Return type

[**\Swagger\Client\Model\CloudObject[]**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **findById**
> \Swagger\Client\Model\CloudObject findById($cloud_app_id, $table_name, $body)

find CloudObject with specific _id



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueryApi();
$cloud_app_id = "cloud_app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudQueryFindById(); // \Swagger\Client\Model\CloudQueryFindById | query body

try { 
    $result = $api_instance->findById($cloud_app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueryApi->findById: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cloud_app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudQueryFindById**](\Swagger\Client\Model\CloudQueryFindById.md)| query body | 

### Return type

[**\Swagger\Client\Model\CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **findOne**
> \Swagger\Client\Model\CloudObject findOne($app_id, $table_name, $body)

find a single CloudObject



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueryApi();
$app_id = "app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudQueryFindOne(); // \Swagger\Client\Model\CloudQueryFindOne | query body

try { 
    $result = $api_instance->findOne($app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueryApi->findOne: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudQueryFindOne**](\Swagger\Client\Model\CloudQueryFindOne.md)| query body | 

### Return type

[**\Swagger\Client\Model\CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

