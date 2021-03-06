# coding: utf-8

"""
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

    Ref: https://github.com/swagger-api/swagger-codegen
"""

from pprint import pformat
from six import iteritems


class FileBody(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self):
        """
        FileBody - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'key': 'str',
            'data': 'str',
            'file_obj': 'CloudFile'
        }

        self.attribute_map = {
            'key': 'key',
            'data': 'data',
            'file_obj': 'fileObj'
        }

        self._key = None
        self._data = None
        self._file_obj = None

    @property
    def key(self):
        """
        Gets the key of this FileBody.


        :return: The key of this FileBody.
        :rtype: str
        """
        return self._key

    @key.setter
    def key(self, key):
        """
        Sets the key of this FileBody.


        :param key: The key of this FileBody.
        :type: str
        """
        self._key = key

    @property
    def data(self):
        """
        Gets the data of this FileBody.


        :return: The data of this FileBody.
        :rtype: str
        """
        return self._data

    @data.setter
    def data(self, data):
        """
        Sets the data of this FileBody.


        :param data: The data of this FileBody.
        :type: str
        """
        self._data = data

    @property
    def file_obj(self):
        """
        Gets the file_obj of this FileBody.


        :return: The file_obj of this FileBody.
        :rtype: CloudFile
        """
        return self._file_obj

    @file_obj.setter
    def file_obj(self, file_obj):
        """
        Sets the file_obj of this FileBody.


        :param file_obj: The file_obj of this FileBody.
        :type: CloudFile
        """
        self._file_obj = file_obj

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other

