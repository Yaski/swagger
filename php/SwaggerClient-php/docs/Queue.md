# Queue

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **string** |  | [optional] 
**_table_name** | **string** |  | [optional] [default to '_Queue']
**created_at** | [**\DateTime**](\DateTime.md) |  | [optional] 
**updated_at** | [**\DateTime**](\DateTime.md) |  | [optional] 
**acl** | [**\Swagger\Client\Model\ACL**](ACL.md) |  | [optional] 
**_type** | **string** |  | [optional] [default to 'queue']
**expires** | [**\DateTime**](\DateTime.md) |  | [optional] 
**queue_type** | **string** |  | [optional] [default to 'pull']
**retry** | **string** |  | [optional] 
**name** | **string** |  | [optional] 
**subscribers** | **string[]** |  | [optional] 
**messages** | [**\Swagger\Client\Model\QueueMessage[]**](QueueMessage.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


