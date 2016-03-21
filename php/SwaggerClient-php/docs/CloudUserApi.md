# Swagger\Client\CloudUserApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addToRole**](CloudUserApi.md#addToRole) | **PUT** user/{app_id}/addToRole | add a user to a role
[**changePassword**](CloudUserApi.md#changePassword) | **PUT** user/{app_id}/changePassword | change a password
[**login**](CloudUserApi.md#login) | **POST** user/{app_id}/login | login existing user
[**logout**](CloudUserApi.md#logout) | **POST** user/{app_id}/logout | logout user
[**removeFromRole**](CloudUserApi.md#removeFromRole) | **PUT** user/{app_id}/removeFromRole | remove a user from a role
[**resetPassword**](CloudUserApi.md#resetPassword) | **POST** user/{app_id}/resetPassword | reset a password
[**signUp**](CloudUserApi.md#signUp) | **POST** user/{app_id}/signup | create a new user


# **addToRole**
> \Swagger\Client\Model\CloudUser addToRole($app_id, $body)

add a user to a role



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudUserApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\UserRoleBody(); // \Swagger\Client\Model\UserRoleBody | request body

try { 
    $result = $api_instance->addToRole($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudUserApi->addToRole: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\UserRoleBody**](\Swagger\Client\Model\UserRoleBody.md)| request body | 

### Return type

[**\Swagger\Client\Model\CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **changePassword**
> \Swagger\Client\Model\CloudUser changePassword($app_id, $body)

change a password

changes the password for a logged in user without logging them out

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudUserApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\PasswordChangeBody(); // \Swagger\Client\Model\PasswordChangeBody | request body

try { 
    $result = $api_instance->changePassword($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudUserApi->changePassword: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\PasswordChangeBody**](\Swagger\Client\Model\PasswordChangeBody.md)| request body | 

### Return type

[**\Swagger\Client\Model\CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **login**
> \Swagger\Client\Model\CloudUser login($app_id, $body)

login existing user



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudUserApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\UserBody(); // \Swagger\Client\Model\UserBody | request body

try { 
    $result = $api_instance->login($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudUserApi->login: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\UserBody**](\Swagger\Client\Model\UserBody.md)| request body | 

### Return type

[**\Swagger\Client\Model\CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logout**
> \Swagger\Client\Model\CloudUser logout($app_id, $body)

logout user



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudUserApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\UserBody(); // \Swagger\Client\Model\UserBody | request body

try { 
    $result = $api_instance->logout($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudUserApi->logout: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\UserBody**](\Swagger\Client\Model\UserBody.md)| request body | 

### Return type

[**\Swagger\Client\Model\CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeFromRole**
> \Swagger\Client\Model\CloudUser removeFromRole($app_id, $body)

remove a user from a role



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudUserApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\UserRoleBody(); // \Swagger\Client\Model\UserRoleBody | request body

try { 
    $result = $api_instance->removeFromRole($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudUserApi->removeFromRole: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\UserRoleBody**](\Swagger\Client\Model\UserRoleBody.md)| request body | 

### Return type

[**\Swagger\Client\Model\CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **resetPassword**
> string resetPassword($app_id, $body)

reset a password

sends a password reset link to the given email

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudUserApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\EmailBody(); // \Swagger\Client\Model\EmailBody | request body

try { 
    $result = $api_instance->resetPassword($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudUserApi->resetPassword: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\EmailBody**](\Swagger\Client\Model\EmailBody.md)| request body | 

### Return type

**string**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **signUp**
> \Swagger\Client\Model\CloudUser signUp($app_id, $body)

create a new user



### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudUserApi();
$app_id = "app_id_example"; // string | ID of app
$body = new \Swagger\Client\Model\UserBody(); // \Swagger\Client\Model\UserBody | request body

try { 
    $result = $api_instance->signUp($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudUserApi->signUp: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| ID of app | 
 **body** | [**\Swagger\Client\Model\UserBody**](\Swagger\Client\Model\UserBody.md)| request body | 

### Return type

[**\Swagger\Client\Model\CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

