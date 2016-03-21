# Swagger\Client\CloudQueueApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMessage**](CloudQueueApi.md#addMessage) | **PUT** queue/{app_id}/{queue_name}/message | push message to queue
[**addSubscriber**](CloudQueueApi.md#addSubscriber) | **POST** queue/{app_id}/{queue_name}/subscriber | add a subscriber to this queue
[**clear**](CloudQueueApi.md#clear) | **DELETE** queue/{app_id}/{queue_name}/clear | clear queue
[**createQueue**](CloudQueueApi.md#createQueue) | **POST** queue/{app_id}/{queue_name}/create | create a new queue
[**deleteMessage**](CloudQueueApi.md#deleteMessage) | **DELETE** queue/{app_id}/{queue_name}/message/{message_id} | delete a message in this queue
[**deleteQueue**](CloudQueueApi.md#deleteQueue) | **DELETE** queue/{app_id}/{queue_name} | delete a queue
[**deleteSubscriber**](CloudQueueApi.md#deleteSubscriber) | **DELETE** queue/{app_id}/{queue_name}/subscriber | delete a subscriber to this queue
[**getAllMessages**](CloudQueueApi.md#getAllMessages) | **POST** queue/{app_id}/messages | push message to queue
[**getAllQueues**](CloudQueueApi.md#getAllQueues) | **POST** queue/{app_id} | get all queues
[**getMessage**](CloudQueueApi.md#getMessage) | **POST** queue/{app_id}/{queue_name}/getMessage | get messages in queue
[**getMessageById**](CloudQueueApi.md#getMessageById) | **POST** queue/{app_id}/{queue_name}/message/{message_id} | get a message in this queue by its id
[**getQueue**](CloudQueueApi.md#getQueue) | **POST** queue/{app_id}/{queue_name} | get queue
[**peek**](CloudQueueApi.md#peek) | **POST** queue/{app_id}/{queue_name}/peek | peek messages in queue without removing them
[**peekMessage**](CloudQueueApi.md#peekMessage) | **POST** queue/{app_id}/{queue_name}/peekMessage | peek messages in queue without removing them
[**pull**](CloudQueueApi.md#pull) | **POST** queue/{app_id}/{queue_name}/pull | pull messages from queue
[**refreshMessageTimeout**](CloudQueueApi.md#refreshMessageTimeout) | **PUT** queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout | refresh timeout of a message in this queue
[**updateMessage**](CloudQueueApi.md#updateMessage) | **PUT** queue/{my_app_id}/{queue_name}/message | push message to queue
[**updateQueue**](CloudQueueApi.md#updateQueue) | **PUT** queue/{app_id}/{queue_name} | update queue


# **addMessage**
> \Swagger\Client\Model\QueueMessage[] addMessage($app_id, $queue_name, $body)

push message to queue

add message message to queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueueBody(); // \Swagger\Client\Model\QueueBody | client key of app

try { 
    $result = $api_instance->addMessage($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->addMessage: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueueBody**](\Swagger\Client\Model\QueueBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addSubscriber**
> \Swagger\Client\Model\Queue addSubscriber($app_id, $queue_name, $body)

add a subscriber to this queue

add a subscriber to this queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueueBody(); // \Swagger\Client\Model\QueueBody | payload

try { 
    $result = $api_instance->addSubscriber($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->addSubscriber: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueueBody**](\Swagger\Client\Model\QueueBody.md)| payload | 

### Return type

[**\Swagger\Client\Model\Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **clear**
> \Swagger\Client\Model\Queue clear($app_id, $queue_name, $body)

clear queue

clear queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueueBody(); // \Swagger\Client\Model\QueueBody | client key of app

try { 
    $result = $api_instance->clear($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->clear: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueueBody**](\Swagger\Client\Model\QueueBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createQueue**
> \Swagger\Client\Model\Queue createQueue($app_id, $queue_name, $body)

create a new queue

add message message to queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | name of queue
$body = new \Swagger\Client\Model\QueueBody(); // \Swagger\Client\Model\QueueBody | client key of app

try { 
    $result = $api_instance->createQueue($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->createQueue: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| name of queue | 
 **body** | [**\Swagger\Client\Model\QueueBody**](\Swagger\Client\Model\QueueBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteMessage**
> \Swagger\Client\Model\QueueMessage[] deleteMessage($app_id, $queue_name, $message_id, $body)

delete a message in this queue

delete a message in this queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$message_id = "message_id_example"; // string | message id
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | client key of app

try { 
    $result = $api_instance->deleteMessage($app_id, $queue_name, $message_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->deleteMessage: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **message_id** | **string**| message id | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQueue**
> \Swagger\Client\Model\Queue deleteQueue($app_id, $queue_name, $body)

delete a queue

delete queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueueBody(); // \Swagger\Client\Model\QueueBody | client key of app

try { 
    $result = $api_instance->deleteQueue($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->deleteQueue: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueueBody**](\Swagger\Client\Model\QueueBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteSubscriber**
> \Swagger\Client\Model\Queue deleteSubscriber($app_id, $queue_name, $body)

delete a subscriber to this queue

delete a subscriber to this queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueueBody(); // \Swagger\Client\Model\QueueBody | payload

try { 
    $result = $api_instance->deleteSubscriber($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->deleteSubscriber: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueueBody**](\Swagger\Client\Model\QueueBody.md)| payload | 

### Return type

[**\Swagger\Client\Model\Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAllMessages**
> \Swagger\Client\Model\QueueMessage[] getAllMessages($app_id, $body)

push message to queue

add message message to queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | client key of app

try { 
    $result = $api_instance->getAllMessages($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->getAllMessages: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAllQueues**
> \Swagger\Client\Model\Queue[] getAllQueues($app_id, $body)

get all queues

get all queues

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | client key of app

try { 
    $result = $api_instance->getAllQueues($app_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->getAllQueues: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\Queue[]**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json, text/plain;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMessage**
> \Swagger\Client\Model\QueueMessage[] getMessage($app_id, $queue_name, $body)

get messages in queue

get messages in queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueuePayloadWithCount(); // \Swagger\Client\Model\QueuePayloadWithCount | client key of app

try { 
    $result = $api_instance->getMessage($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->getMessage: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueuePayloadWithCount**](\Swagger\Client\Model\QueuePayloadWithCount.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMessageById**
> \Swagger\Client\Model\QueueMessage getMessageById($app_id, $queue_name, $message_id, $body)

get a message in this queue by its id

get a message in this queue by its id

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$message_id = "message_id_example"; // string | message id
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | client key of app

try { 
    $result = $api_instance->getMessageById($app_id, $queue_name, $message_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->getMessageById: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **message_id** | **string**| message id | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQueue**
> \Swagger\Client\Model\Queue getQueue($app_id, $queue_name, $body)

get queue

get queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\KeyBody(); // \Swagger\Client\Model\KeyBody | client key of app

try { 
    $result = $api_instance->getQueue($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->getQueue: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\KeyBody**](\Swagger\Client\Model\KeyBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **peek**
> \Swagger\Client\Model\QueueMessage[] peek($app_id, $queue_name, $body)

peek messages in queue without removing them

peek messages in queue without removing them

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueuePayloadWithCount(); // \Swagger\Client\Model\QueuePayloadWithCount | client key of app

try { 
    $result = $api_instance->peek($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->peek: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueuePayloadWithCount**](\Swagger\Client\Model\QueuePayloadWithCount.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **peekMessage**
> \Swagger\Client\Model\QueueMessage[] peekMessage($app_id, $queue_name, $body)

peek messages in queue without removing them

peek messages in queue without removing them

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueuePayloadWithCount(); // \Swagger\Client\Model\QueuePayloadWithCount | client key of app

try { 
    $result = $api_instance->peekMessage($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->peekMessage: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueuePayloadWithCount**](\Swagger\Client\Model\QueuePayloadWithCount.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pull**
> \Swagger\Client\Model\QueueMessage[] pull($app_id, $queue_name, $body)

pull messages from queue

pull messages from queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueuePayloadWithCount(); // \Swagger\Client\Model\QueuePayloadWithCount | client key of app

try { 
    $result = $api_instance->pull($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->pull: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueuePayloadWithCount**](\Swagger\Client\Model\QueuePayloadWithCount.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **refreshMessageTimeout**
> \Swagger\Client\Model\QueueMessage[] refreshMessageTimeout($app_id, $queue_name, $message_id, $body)

refresh timeout of a message in this queue

refresh timeout of a message in this queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$message_id = "message_id_example"; // string | message id
$body = new \Swagger\Client\Model\RefreshMessageTimeoutBody(); // \Swagger\Client\Model\RefreshMessageTimeoutBody | client key of app

try { 
    $result = $api_instance->refreshMessageTimeout($app_id, $queue_name, $message_id, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->refreshMessageTimeout: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **message_id** | **string**| message id | 
 **body** | [**\Swagger\Client\Model\RefreshMessageTimeoutBody**](\Swagger\Client\Model\RefreshMessageTimeoutBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMessage**
> \Swagger\Client\Model\QueueMessage[] updateMessage($my_app_id, $queue_name, $body)

push message to queue

add message message to queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$my_app_id = "my_app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\QueueBody(); // \Swagger\Client\Model\QueueBody | client key of app

try { 
    $result = $api_instance->updateMessage($my_app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->updateMessage: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **my_app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\QueueBody**](\Swagger\Client\Model\QueueBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQueue**
> \Swagger\Client\Model\ModifiedQueue updateQueue($app_id, $queue_name, $body)

update queue

update queue

### Example 
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\CloudQueueApi();
$app_id = "app_id_example"; // string | Id of CloudApp
$queue_name = "queue_name_example"; // string | Name of queue
$body = new \Swagger\Client\Model\ModifiedQueueBody(); // \Swagger\Client\Model\ModifiedQueueBody | client key of app

try { 
    $result = $api_instance->updateQueue($app_id, $queue_name, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CloudQueueApi->updateQueue: ', $e->getMessage(), "\n";
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **string**| Id of CloudApp | 
 **queue_name** | **string**| Name of queue | 
 **body** | [**\Swagger\Client\Model\ModifiedQueueBody**](\Swagger\Client\Model\ModifiedQueueBody.md)| client key of app | 

### Return type

[**\Swagger\Client\Model\ModifiedQueue**](ModifiedQueue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

