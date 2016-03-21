# SwaggerClient::CloudQueueApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_message**](CloudQueueApi.md#add_message) | **PUT** queue/{app_id}/{queue_name}/message | push message to queue
[**add_subscriber**](CloudQueueApi.md#add_subscriber) | **POST** queue/{app_id}/{queue_name}/subscriber | add a subscriber to this queue
[**clear**](CloudQueueApi.md#clear) | **DELETE** queue/{app_id}/{queue_name}/clear | clear queue
[**create_queue**](CloudQueueApi.md#create_queue) | **POST** queue/{app_id}/{queue_name}/create | create a new queue
[**delete_message**](CloudQueueApi.md#delete_message) | **DELETE** queue/{app_id}/{queue_name}/message/{message_id} | delete a message in this queue
[**delete_queue**](CloudQueueApi.md#delete_queue) | **DELETE** queue/{app_id}/{queue_name} | delete a queue
[**delete_subscriber**](CloudQueueApi.md#delete_subscriber) | **DELETE** queue/{app_id}/{queue_name}/subscriber | delete a subscriber to this queue
[**get_all_messages**](CloudQueueApi.md#get_all_messages) | **POST** queue/{app_id}/messages | push message to queue
[**get_all_queues**](CloudQueueApi.md#get_all_queues) | **POST** queue/{app_id} | get all queues
[**get_message**](CloudQueueApi.md#get_message) | **POST** queue/{app_id}/{queue_name}/getMessage | get messages in queue
[**get_message_by_id**](CloudQueueApi.md#get_message_by_id) | **POST** queue/{app_id}/{queue_name}/message/{message_id} | get a message in this queue by its id
[**get_queue**](CloudQueueApi.md#get_queue) | **POST** queue/{app_id}/{queue_name} | get queue
[**peek**](CloudQueueApi.md#peek) | **POST** queue/{app_id}/{queue_name}/peek | peek messages in queue without removing them
[**peek_message**](CloudQueueApi.md#peek_message) | **POST** queue/{app_id}/{queue_name}/peekMessage | peek messages in queue without removing them
[**pull**](CloudQueueApi.md#pull) | **POST** queue/{app_id}/{queue_name}/pull | pull messages from queue
[**refresh_message_timeout**](CloudQueueApi.md#refresh_message_timeout) | **PUT** queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout | refresh timeout of a message in this queue
[**update_message**](CloudQueueApi.md#update_message) | **PUT** queue/{my_app_id}/{queue_name}/message | push message to queue
[**update_queue**](CloudQueueApi.md#update_queue) | **PUT** queue/{app_id}/{queue_name} | update queue


# **add_message**
> Array&lt;QueueMessage&gt; add_message(app_id, queue_name, body)

push message to queue

add message message to queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueueBody.new # QueueBody | client key of app


begin
  #push message to queue
  result = api_instance.add_message(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->add_message: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueueBody**](QueueBody.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **add_subscriber**
> Queue add_subscriber(app_id, queue_name, body)

add a subscriber to this queue

add a subscriber to this queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueueBody.new # QueueBody | payload


begin
  #add a subscriber to this queue
  result = api_instance.add_subscriber(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->add_subscriber: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueueBody**](QueueBody.md)| payload | 

### Return type

[**Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **clear**
> Queue clear(app_id, queue_name, body)

clear queue

clear queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueueBody.new # QueueBody | client key of app


begin
  #clear queue
  result = api_instance.clear(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->clear: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueueBody**](QueueBody.md)| client key of app | 

### Return type

[**Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **create_queue**
> Queue create_queue(app_id, queue_name, body)

create a new queue

add message message to queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | name of queue

body = SwaggerClient::QueueBody.new # QueueBody | client key of app


begin
  #create a new queue
  result = api_instance.create_queue(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->create_queue: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| name of queue | 
 **body** | [**QueueBody**](QueueBody.md)| client key of app | 

### Return type

[**Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **delete_message**
> Array&lt;QueueMessage&gt; delete_message(app_id, queue_name, message_id, body)

delete a message in this queue

delete a message in this queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

message_id = "message_id_example" # String | message id

body = SwaggerClient::KeyBody.new # KeyBody | client key of app


begin
  #delete a message in this queue
  result = api_instance.delete_message(app_id, queue_name, message_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->delete_message: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **message_id** | **String**| message id | 
 **body** | [**KeyBody**](KeyBody.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **delete_queue**
> Queue delete_queue(app_id, queue_name, body)

delete a queue

delete queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueueBody.new # QueueBody | client key of app


begin
  #delete a queue
  result = api_instance.delete_queue(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->delete_queue: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueueBody**](QueueBody.md)| client key of app | 

### Return type

[**Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **delete_subscriber**
> Queue delete_subscriber(app_id, queue_name, body)

delete a subscriber to this queue

delete a subscriber to this queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueueBody.new # QueueBody | payload


begin
  #delete a subscriber to this queue
  result = api_instance.delete_subscriber(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->delete_subscriber: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueueBody**](QueueBody.md)| payload | 

### Return type

[**Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_all_messages**
> Array&lt;QueueMessage&gt; get_all_messages(app_id, body)

push message to queue

add message message to queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

body = SwaggerClient::KeyBody.new # KeyBody | client key of app


begin
  #push message to queue
  result = api_instance.get_all_messages(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->get_all_messages: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **body** | [**KeyBody**](KeyBody.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_all_queues**
> Array&lt;Queue&gt; get_all_queues(app_id, body)

get all queues

get all queues

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

body = SwaggerClient::KeyBody.new # KeyBody | client key of app


begin
  #get all queues
  result = api_instance.get_all_queues(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->get_all_queues: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **body** | [**KeyBody**](KeyBody.md)| client key of app | 

### Return type

[**Array&lt;Queue&gt;**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json, text/plain;charset=utf-8



# **get_message**
> Array&lt;QueueMessage&gt; get_message(app_id, queue_name, body)

get messages in queue

get messages in queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueuePayloadWithCount.new # QueuePayloadWithCount | client key of app


begin
  #get messages in queue
  result = api_instance.get_message(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->get_message: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueuePayloadWithCount**](QueuePayloadWithCount.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_message_by_id**
> QueueMessage get_message_by_id(app_id, queue_name, message_id, body)

get a message in this queue by its id

get a message in this queue by its id

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

message_id = "message_id_example" # String | message id

body = SwaggerClient::KeyBody.new # KeyBody | client key of app


begin
  #get a message in this queue by its id
  result = api_instance.get_message_by_id(app_id, queue_name, message_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->get_message_by_id: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **message_id** | **String**| message id | 
 **body** | [**KeyBody**](KeyBody.md)| client key of app | 

### Return type

[**QueueMessage**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **get_queue**
> Queue get_queue(app_id, queue_name, body)

get queue

get queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::KeyBody.new # KeyBody | client key of app


begin
  #get queue
  result = api_instance.get_queue(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->get_queue: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**KeyBody**](KeyBody.md)| client key of app | 

### Return type

[**Queue**](Queue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **peek**
> Array&lt;QueueMessage&gt; peek(app_id, queue_name, body)

peek messages in queue without removing them

peek messages in queue without removing them

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueuePayloadWithCount.new # QueuePayloadWithCount | client key of app


begin
  #peek messages in queue without removing them
  result = api_instance.peek(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->peek: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueuePayloadWithCount**](QueuePayloadWithCount.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **peek_message**
> Array&lt;QueueMessage&gt; peek_message(app_id, queue_name, body)

peek messages in queue without removing them

peek messages in queue without removing them

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueuePayloadWithCount.new # QueuePayloadWithCount | client key of app


begin
  #peek messages in queue without removing them
  result = api_instance.peek_message(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->peek_message: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueuePayloadWithCount**](QueuePayloadWithCount.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **pull**
> Array&lt;QueueMessage&gt; pull(app_id, queue_name, body)

pull messages from queue

pull messages from queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueuePayloadWithCount.new # QueuePayloadWithCount | client key of app


begin
  #pull messages from queue
  result = api_instance.pull(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->pull: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueuePayloadWithCount**](QueuePayloadWithCount.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **refresh_message_timeout**
> Array&lt;QueueMessage&gt; refresh_message_timeout(app_id, queue_name, message_id, body)

refresh timeout of a message in this queue

refresh timeout of a message in this queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

message_id = "message_id_example" # String | message id

body = SwaggerClient::RefreshMessageTimeoutBody.new # RefreshMessageTimeoutBody | client key of app


begin
  #refresh timeout of a message in this queue
  result = api_instance.refresh_message_timeout(app_id, queue_name, message_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->refresh_message_timeout: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **message_id** | **String**| message id | 
 **body** | [**RefreshMessageTimeoutBody**](RefreshMessageTimeoutBody.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **update_message**
> Array&lt;QueueMessage&gt; update_message(my_app_id, queue_name, body)

push message to queue

add message message to queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

my_app_id = "my_app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::QueueBody.new # QueueBody | client key of app


begin
  #push message to queue
  result = api_instance.update_message(my_app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->update_message: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **my_app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**QueueBody**](QueueBody.md)| client key of app | 

### Return type

[**Array&lt;QueueMessage&gt;**](QueueMessage.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **update_queue**
> ModifiedQueue update_queue(app_id, queue_name, body)

update queue

update queue

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudQueueApi.new

app_id = "app_id_example" # String | Id of CloudApp

queue_name = "queue_name_example" # String | Name of queue

body = SwaggerClient::ModifiedQueueBody.new # ModifiedQueueBody | client key of app


begin
  #update queue
  result = api_instance.update_queue(app_id, queue_name, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudQueueApi->update_queue: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| Id of CloudApp | 
 **queue_name** | **String**| Name of queue | 
 **body** | [**ModifiedQueueBody**](ModifiedQueueBody.md)| client key of app | 

### Return type

[**ModifiedQueue**](ModifiedQueue.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



