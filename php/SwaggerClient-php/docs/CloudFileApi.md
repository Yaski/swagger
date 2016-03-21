# Swagger\Client\CloudFileApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteFile**](CloudFileApi.md#deleteFile) | **DELETE** file/{app_id}/{file_id} | deletes file
[**fetchFileContent**](CloudFileApi.md#fetchFileContent) | **POST** file/{app_id}/{file_id} | fetch file content
[**saveFile**](CloudFileApi.md#saveFile) | **POST** file/{app_id} | uploads a file
[**saveFileData**](CloudFileApi.md#saveFileData) | **POST** file/{my_app_id} | uploads a file with data


# **deleteFile**
> string deleteFile($app_id, $file_id, $body)

deletes file



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudFileApi();
$app_id = "app_id_example"; // string | ID of app
$file_id = "file_id_example"; // string | file id
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | request body

try { 
    $result = $api_instance->deleteFile($app_id, $file_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudFileApi->deleteFile: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **file_id** | **string**| file id | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| request body | [optional] 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **fetchFileContent**
> string fetchFileContent($app_id, $file_id, $body)

fetch file content



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudFileApi();
$app_id = "app_id_example"; // string | ID of app
$file_id = "file_id_example"; // string | file id
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | request body

try { 
    $result = $api_instance->fetchFileContent($app_id, $file_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudFileApi->fetchFileContent: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **file_id** | **string**| file id | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| request body | [optional] 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/octet-stream

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **saveFile**
> string saveFile($app_id, $file_obj, $key, $file_to_upload)

uploads a file



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudFileApi();
$app_id = "app_id_example"; // string | ID of app
$file_obj = "file_obj_example"; // string | file extra data
$key = "key_example"; // string | app key
$file_to_upload = "/path/to/file.txt"; // \SplFileObject | file to upload

try { 
    $result = $api_instance->saveFile($app_id, $file_obj, $key, $file_to_upload);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudFileApi->saveFile: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **file_obj** | **string**| file extra data | 
 **key** | **string**| app key | [optional] 
 **file_to_upload** | **\SplFileObject**| file to upload | [optional] 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **saveFileData**
> string saveFileData($my_app_id, $file_obj)

uploads a file with data



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudFileApi();
$my_app_id = "my_app_id_example"; // string | ID of app
$file_obj = new \Swagger\Client\Model\FileBody(); // \Swagger\Client\Model\FileBody | file extra data

try { 
    $result = $api_instance->saveFileData($my_app_id, $file_obj);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudFileApi->saveFileData: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **my_app_id** | **string**| ID of app | 
 **file_obj** | [**\Swagger\Client\Model\FileBody**](\Swagger\Client\Model\FileBody.md)| file extra data | 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

