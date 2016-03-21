# Swagger\Client\CloudRoleApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createRole**](CloudRoleApi.md#createRole) | **PUT** data/{app_id}/Role | create a new cloudrole


# **createRole**
> \Swagger\Client\Model\CloudRole createRole($app_id, $body)

create a new cloudrole



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudRoleApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\RoleBody(); // \Swagger\Client\Model\RoleBody | request body

try { 
    $result = $api_instance->createRole($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudRoleApi->createRole: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\RoleBody**](\Swagger\Client\Model\RoleBody.md)| request body | 

### Return type

[**\Swagger\Client\Model\CloudRole**](CloudRole.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

