# coding: utf-8

"""
CloudUserApi.py
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


class CloudUserApi(object):
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

    def add_to_role(self, app_id, body, **kwargs):
        """
        add a user to a role
        

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.add_to_role(app_id, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: ID of app (required)
        :param UserRoleBody body: request body (required)
        :return: CloudUser
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method add_to_role" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `add_to_role`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `add_to_role`")

        resource_path = 'user/{app_id}/addToRole'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']

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

        response = self.api_client.call_api(resource_path, 'PUT',
                                            path_params,
                                            query_params,
                                            header_params,
                                            body=body_params,
                                            post_params=form_params,
                                            files=local_var_files,
                                            response_type='CloudUser',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response

    def change_password(self, app_id, body, **kwargs):
        """
        change a password
        changes the password for a logged in user without logging them out

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.change_password(app_id, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: ID of app (required)
        :param PasswordChangeBody body: request body (required)
        :return: CloudUser
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method change_password" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `change_password`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `change_password`")

        resource_path = 'user/{app_id}/changePassword'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']

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

        response = self.api_client.call_api(resource_path, 'PUT',
                                            path_params,
                                            query_params,
                                            header_params,
                                            body=body_params,
                                            post_params=form_params,
                                            files=local_var_files,
                                            response_type='CloudUser',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response

    def login(self, app_id, body, **kwargs):
        """
        login existing user
        

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.login(app_id, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: ID of app (required)
        :param UserBody body: request body (required)
        :return: CloudUser
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method login" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `login`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `login`")

        resource_path = 'user/{app_id}/login'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']

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
                                            response_type='CloudUser',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response

    def logout(self, app_id, body, **kwargs):
        """
        logout user
        

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.logout(app_id, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: ID of app (required)
        :param UserBody body: request body (required)
        :return: CloudUser
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method logout" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `logout`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `logout`")

        resource_path = 'user/{app_id}/logout'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']

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
                                            response_type='CloudUser',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response

    def remove_from_role(self, app_id, body, **kwargs):
        """
        remove a user from a role
        

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.remove_from_role(app_id, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: ID of app (required)
        :param UserRoleBody body: request body (required)
        :return: CloudUser
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method remove_from_role" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `remove_from_role`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `remove_from_role`")

        resource_path = 'user/{app_id}/removeFromRole'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']

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

        response = self.api_client.call_api(resource_path, 'PUT',
                                            path_params,
                                            query_params,
                                            header_params,
                                            body=body_params,
                                            post_params=form_params,
                                            files=local_var_files,
                                            response_type='CloudUser',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response

    def reset_password(self, app_id, body, **kwargs):
        """
        reset a password
        sends a password reset link to the given email

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.reset_password(app_id, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: ID of app (required)
        :param EmailBody body: request body (required)
        :return: str
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method reset_password" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `reset_password`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `reset_password`")

        resource_path = 'user/{app_id}/resetPassword'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']

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
                                            response_type='str',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response

    def sign_up(self, app_id, body, **kwargs):
        """
        create a new user
        

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.sign_up(app_id, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str app_id: ID of app (required)
        :param UserBody body: request body (required)
        :return: CloudUser
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['app_id', 'body']
        all_params.append('callback')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method sign_up" % key
                )
            params[key] = val
        del params['kwargs']

        # verify the required parameter 'app_id' is set
        if ('app_id' not in params) or (params['app_id'] is None):
            raise ValueError("Missing the required parameter `app_id` when calling `sign_up`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `sign_up`")

        resource_path = 'user/{app_id}/signup'.replace('{format}', 'json')
        path_params = {}
        if 'app_id' in params:
            path_params['app_id'] = params['app_id']

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
                                            response_type='CloudUser',
                                            auth_settings=auth_settings,
                                            callback=params.get('callback'))
        return response
