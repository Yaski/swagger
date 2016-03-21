# Swagger\Client\CloudTableApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteTable**](CloudTableApi.md#deleteTable) | **DELETE** app/{app_id}/{table_name} | 
[**get**](CloudTableApi.md#get) | **POST** app/{app_id}/{table_name} | 
[**getAll**](CloudTableApi.md#getAll) | **POST** /app/{app_id}/_getAll | 
[**save**](CloudTableApi.md#save) | **PUT** app/{app_id}/{table_name} | 


# **deleteTable**
> \Swagger\Client\Model\CloudTable deleteTable($table_name, $app_id, $body)



delete a cloud table

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudTableApi();
$table_name = "table_name_example"; // string | name of cloud table
$app_id = "app_id_example"; // string | cloud app id
$body = new \Swagger\Client\Model\CloudTableSave(); // \Swagger\Client\Model\CloudTableSave | master key and app id

try { 
    $result = $api_instance->deleteTable($table_name, $app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudTableApi->deleteTable: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **table_name** | **string**| name of cloud table | 
 **app_id** | **string**| cloud app id | 
 **body** | [**\Swagger\Client\Model\CloudTableSave**](\Swagger\Client\Model\CloudTableSave.md)| master key and app id | 

### Return type

[**\Swagger\Client\Model\CloudTable**](CloudTable.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get**
> \Swagger\Client\Model\CloudTable get($table_name, $app_id, $body)



get a table

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudTableApi();
$table_name = "table_name_example"; // string | name of cloud table
$app_id = "app_id_example"; // string | id of app
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key and app id

try { 
    $result = $api_instance->get($table_name, $app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudTableApi->get: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **table_name** | **string**| name of cloud table | 
 **app_id** | **string**| id of app | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key and app id | 

### Return type

[**\Swagger\Client\Model\CloudTable**](CloudTable.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAll**
> getAll($app_id, $body)



get all tables in app

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudTableApi();
$app_id = "app_id_example"; // string | app id
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | master key

try { 
    $api_instance->getAll($app_id, $body);
} catch (Exception $e) {
    echo 'Exception when calling CloudTableApi->getAll: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| app id | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| master key | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **save**
> \Swagger\Client\Model\CloudTable save($table_name, $app_id, $body)



save a cloud table

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudTableApi();
$table_name = "table_name_example"; // string | name of cloud table
$app_id = "app_id_example"; // string | cloud app id
$body = new \Swagger\Client\Model\CloudTableSave(); // \Swagger\Client\Model\CloudTableSave | master key and app id

try { 
    $result = $api_instance->save($table_name, $app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudTableApi->save: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **table_name** | **string**| name of cloud table | 
 **app_id** | **string**| cloud app id | 
 **body** | [**\Swagger\Client\Model\CloudTableSave**](\Swagger\Client\Model\CloudTableSave.md)| master key and app id | 

### Return type

[**\Swagger\Client\Model\CloudTable**](CloudTable.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

