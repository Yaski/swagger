# Swagger\Client\CloudSearchApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**search**](CloudSearchApi.md#search) | **POST** data/{app_id}/{table_name}/search | search for cloudobjects following the criteria defined herein


# **search**
> \Swagger\Client\Model\CloudObject[] search($app_id, $table_name, $body)

search for cloudobjects following the criteria defined herein



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudSearchApi();
$app_id = "app_id_example"; // string | CloudApp id
$table_name = "table_name_example"; // string | cloud table name
$body = new \Swagger\Client\Model\CloudSearch(); // \Swagger\Client\Model\CloudSearch | query body

try { 
    $result = $api_instance->search($app_id, $table_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudSearchApi->search: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| CloudApp id | 
 **table_name** | **string**| cloud table name | 
 **body** | [**\Swagger\Client\Model\CloudSearch**](\Swagger\Client\Model\CloudSearch.md)| query body | 

### Return type

[**\Swagger\Client\Model\CloudObject[]**](CloudObject.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

