# SwaggerClient::CloudUserApi

All URIs are relative to *http://api.cloudboost.io/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_to_role**](CloudUserApi.md#add_to_role) | **PUT** user/{app_id}/addToRole | add a user to a role
[**change_password**](CloudUserApi.md#change_password) | **PUT** user/{app_id}/changePassword | change a password
[**login**](CloudUserApi.md#login) | **POST** user/{app_id}/login | login existing user
[**logout**](CloudUserApi.md#logout) | **POST** user/{app_id}/logout | logout user
[**remove_from_role**](CloudUserApi.md#remove_from_role) | **PUT** user/{app_id}/removeFromRole | remove a user from a role
[**reset_password**](CloudUserApi.md#reset_password) | **POST** user/{app_id}/resetPassword | reset a password
[**sign_up**](CloudUserApi.md#sign_up) | **POST** user/{app_id}/signup | create a new user


# **add_to_role**
> CloudUser add_to_role(app_id, body)

add a user to a role



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudUserApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::UserRoleBody.new # UserRoleBody | request body


begin
  #add a user to a role
  result = api_instance.add_to_role(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudUserApi->add_to_role: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**UserRoleBody**](UserRoleBody.md)| request body | 

### Return type

[**CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **change_password**
> CloudUser change_password(app_id, body)

change a password

changes the password for a logged in user without logging them out

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudUserApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::PasswordChangeBody.new # PasswordChangeBody | request body


begin
  #change a password
  result = api_instance.change_password(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudUserApi->change_password: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**PasswordChangeBody**](PasswordChangeBody.md)| request body | 

### Return type

[**CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **login**
> CloudUser login(app_id, body)

login existing user



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudUserApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::UserBody.new # UserBody | request body


begin
  #login existing user
  result = api_instance.login(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudUserApi->login: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**UserBody**](UserBody.md)| request body | 

### Return type

[**CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **logout**
> CloudUser logout(app_id, body)

logout user



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudUserApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::UserBody.new # UserBody | request body


begin
  #logout user
  result = api_instance.logout(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudUserApi->logout: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**UserBody**](UserBody.md)| request body | 

### Return type

[**CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **remove_from_role**
> CloudUser remove_from_role(app_id, body)

remove a user from a role



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudUserApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::UserRoleBody.new # UserRoleBody | request body


begin
  #remove a user from a role
  result = api_instance.remove_from_role(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudUserApi->remove_from_role: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**UserRoleBody**](UserRoleBody.md)| request body | 

### Return type

[**CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **reset_password**
> String reset_password(app_id, body)

reset a password

sends a password reset link to the given email

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudUserApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::EmailBody.new # EmailBody | request body


begin
  #reset a password
  result = api_instance.reset_password(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudUserApi->reset_password: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**EmailBody**](EmailBody.md)| request body | 

### Return type

**String**

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **sign_up**
> CloudUser sign_up(app_id, body)

create a new user



### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::CloudUserApi.new

app_id = "app_id_example" # String | ID of app

body = SwaggerClient::UserBody.new # UserBody | request body


begin
  #create a new user
  result = api_instance.sign_up(app_id, body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling CloudUserApi->sign_up: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_id** | **String**| ID of app | 
 **body** | [**UserBody**](UserBody.md)| request body | 

### Return type

[**CloudUser**](CloudUser.md)

### Authorization

No authorization required

### HTTP reuqest headers

 - **Content-Type**: application/json
 - **Accept**: application/json



