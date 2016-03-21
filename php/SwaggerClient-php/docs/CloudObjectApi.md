# Swagger\Client\CloudObjectApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete**](CloudObjectApi.md#delete) | **DELETE** data/{app_id}/{table_name} | deletes a cloud object from cloudapp
[**save**](CloudObjectApi.md#save) | **PUT** data/{app_id}/{table_name} | saves a cloud object to cloudboost


# **delete**
> \Swagger\Client\Model\CloudObject delete($app_id, $table_name, $body)

deletes a cloud object from cloudapp

deletes a cloud object from cloudapp

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudObjectApi();
$app_id = "app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudObjectSaveRequest(); // \Swagger\Client\Model\CloudObjectSaveRequest | CloudObject that needs to be added to the cloudboost

try { 
    $result = $api_instance->delete($app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudObjectApi->delete: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudObjectSaveRequest**](\Swagger\Client\Model\CloudObjectSaveRequest.md)| CloudObject that needs to be added to the cloudboost | 

### Return type

[**\Swagger\Client\Model\CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **save**
> \Swagger\Client\Model\CloudObject save($app_id, $table_name, $body)

saves a cloud object to cloudboost



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudObjectApi();
$app_id = "app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudObjectSaveRequest(); // \Swagger\Client\Model\CloudObjectSaveRequest | CloudObject that needs to be added to cloudboost

try { 
    $result = $api_instance->save($app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudObjectApi->save: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudObjectSaveRequest**](\Swagger\Client\Model\CloudObjectSaveRequest.md)| CloudObject that needs to be added to cloudboost | 

### Return type

[**\Swagger\Client\Model\CloudObject**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

