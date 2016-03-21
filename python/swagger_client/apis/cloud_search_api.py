# coding: utf-8

"""
CloudSearchApi.py
Copyright 2016 SmartBear Software

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
"""

from __future__ import absolute_import

import sys
import os

# python 2 and python 3 compatibility library
from six import iteritems

from ..configuration import Configuration
from ..api_client import ApiClient


class CloudSearchApi(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    Ref: https://github.com/swagger-api/swagger-codegen
    """

    def __init__(self, api_client=None):
        config = Configuration()
        if api_client:
            self.api_client = api_client
        else:
            if not config.api_client:
                config.api_client = ApiClient()
            self.api_client = config.api_client

    def search(self, app_id, table_name, body, **kwargs):
        """
        search for cloudobjects following the criteria defined herein
        

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.search(app_id, table_name, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: CloudApp id (required)
        :param str table_name: cloud table name (required)
        :param CloudSearch body: query body (required)
        :return: list[CloudObject]
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'table_name', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method search" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `search`")
        # verify the required parameter 'table_name' is set
        if ('table_name' not in params) or (params['table_name'] is None):
            raise ValueError("Missing the required parameter `table_name` when calling `search`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `search`")

        resource_path = 'data/{app_id}/{table_name}/search'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']
        if 'table_name' in params:
            path_params['table_name'] = params['table_name']

        query_params = {}

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        if 'body' in params:
            body_params = params['body']

        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.\
            select_header_accept(['application/json'])
        if not header_params['Accept']:
            del header_params['Accept']

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.\
            select_header_content_type(['application/json'])

        # Authentication setting
        auth_settings = []

        response = self.api_client.call_api(resource_path, 'POST',
                                            path_params,
                                            query_params,
                                            header_params,
                                            body=body_params,
                                            post_params=form_params,
                                            files=local_var_files,
                                            response_type='list[CloudObject]',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response
