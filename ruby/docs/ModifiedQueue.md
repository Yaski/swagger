# SwaggerClient::ModifiedQueue

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**acl** | [**ACL**](ACL.md) |  | [optional] 
**_type** | **String** |  | [optional] [default to &quot;queue&quot;]
**expires** | **DateTime** |  | [optional] 
**queue_type** | **String** |  | [optional] [default to &quot;pull&quot;]
**_retry** | **String** |  | [optional] 
**name** | **String** |  | [optional] 
**subscribers** | **Array&lt;String&gt;** |  | [optional] 
**_is_modified** | **BOOLEAN** |  | [optional] [default to true]
**_modified_columns** | **Array&lt;String&gt;** |  | [optional] 
**messages** | [**Array&lt;QueueMessage&gt;**](QueueMessage.md) |  | [optional] 


