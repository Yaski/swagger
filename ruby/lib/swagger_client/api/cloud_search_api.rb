=begin
CloudBoost Application API

Power your web or mobile application backend with cloudboost Database Service

OpenAPI spec version: 1.0.0
Contact: ben@cloudboost.io
Generated by: https://github.com/swagger-api/swagger-codegen.git

License: MIT
http://opensource.org/licenses/MIT

Terms of Service: https://cloudboost.io

=end

require "uri"

module SwaggerClient
  class CloudSearchApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end

    # search for cloudobjects following the criteria defined herein
    # 
    # @param app_id CloudApp id
    # @param table_name cloud table name
    # @param body query body
    # @param [Hash] opts the optional parameters
    # @return [Array<CloudObject>]
    def search(app_id, table_name, body, opts = {})
      data, status_code, headers = search_with_http_info(app_id, table_name, body, opts)
      return data
    end

    # search for cloudobjects following the criteria defined herein
    # 
    # @param app_id CloudApp id
    # @param table_name cloud table name
    # @param body query body
    # @param [Hash] opts the optional parameters
    # @return [Array<(Array<CloudObject>, Fixnum, Hash)>] Array<CloudObject> data, response status code and response headers
    def search_with_http_info(app_id, table_name, body, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: CloudSearchApi#search ..."
      end
      
      # verify the required parameter 'app_id' is set
      fail "Missing the required parameter 'app_id' when calling search" if app_id.nil?
      
      # verify the required parameter 'table_name' is set
      fail "Missing the required parameter 'table_name' when calling search" if table_name.nil?
      
      # verify the required parameter 'body' is set
      fail "Missing the required parameter 'body' when calling search" if body.nil?
      
      # resource path
      local_var_path = "data/{app_id}/{table_name}/search".sub('{format}','json').sub('{' + 'app_id' + '}', app_id.to_s).sub('{' + 'table_name' + '}', table_name.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = ['application/json']
      _header_accept_result = @api_client.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = ['application/json']
      header_params['Content-Type'] = @api_client.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = @api_client.object_to_http_body(body)
      
      auth_names = []
      data, status_code, headers = @api_client.call_api(:POST, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Array<CloudObject>')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: CloudSearchApi#search\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end