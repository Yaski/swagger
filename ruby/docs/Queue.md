# SwaggerClient::Queue

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **String** |  | [optional] 
**_table_name** | **String** |  | [optional] [default to &quot;_Queue&quot;]
**created_at** | **DateTime** |  | [optional] 
**updated_at** | **DateTime** |  | [optional] 
**acl** | [**ACL**](ACL.md) |  | [optional] 
**_type** | **String** |  | [optional] [default to &quot;queue&quot;]
**expires** | **DateTime** |  | [optional] 
**queue_type** | **String** |  | [optional] [default to &quot;pull&quot;]
**_retry** | **String** |  | [optional] 
**name** | **String** |  | [optional] 
**subscribers** | **Array&lt;String&gt;** |  | [optional] 
**messages** | [**Array&lt;QueueMessage&gt;**](QueueMessage.md) |  | [optional] 


