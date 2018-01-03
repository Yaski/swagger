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


class ModifiedQueue(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self):
        """
        ModifiedQueue - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'acl': 'ACL',
            'type': 'str',
            'expires': 'datetime',
            'queue_type': 'str',
            'retry': 'str',
            'name': 'str',
            'subscribers': 'list[str]',
            'is_modified': 'bool',
            'modified_columns': 'list[str]',
            'messages': 'list[QueueMessage]'
        }

        self.attribute_map = {
            'acl': 'ACL',
            'type': '_type',
            'expires': 'expires',
            'queue_type': 'queueType',
            'retry': 'retry',
            'name': 'name',
            'subscribers': 'subscribers',
            'is_modified': '_isModified',
            'modified_columns': '_modifiedColumns',
            'messages': 'messages'
        }

        self._acl = None
        self._type = 'queue'
        self._expires = None
        self._queue_type = 'pull'
        self._retry = None
        self._name = None
        self._subscribers = None
        self._is_modified = True
        self._modified_columns = None
        self._messages = None

    @property
    def acl(self):
        """
        Gets the acl of this ModifiedQueue.


        :return: The acl of this ModifiedQueue.
        :rtype: ACL
        """
        return self._acl

    @acl.setter
    def acl(self, acl):
        """
        Sets the acl of this ModifiedQueue.


        :param acl: The acl of this ModifiedQueue.
        :type: ACL
        """
        self._acl = acl

    @property
    def type(self):
        """
        Gets the type of this ModifiedQueue.


        :return: The type of this ModifiedQueue.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """
        Sets the type of this ModifiedQueue.


        :param type: The type of this ModifiedQueue.
        :type: str
        """
        self._type = type

    @property
    def expires(self):
        """
        Gets the expires of this ModifiedQueue.


        :return: The expires of this ModifiedQueue.
        :rtype: datetime
        """
        return self._expires

    @expires.setter
    def expires(self, expires):
        """
        Sets the expires of this ModifiedQueue.


        :param expires: The expires of this ModifiedQueue.
        :type: datetime
        """
        self._expires = expires

    @property
    def queue_type(self):
        """
        Gets the queue_type of this ModifiedQueue.


        :return: The queue_type of this ModifiedQueue.
        :rtype: str
        """
        return self._queue_type

    @queue_type.setter
    def queue_type(self, queue_type):
        """
        Sets the queue_type of this ModifiedQueue.


        :param queue_type: The queue_type of this ModifiedQueue.
        :type: str
        """
        self._queue_type = queue_type

    @property
    def retry(self):
        """
        Gets the retry of this ModifiedQueue.


        :return: The retry of this ModifiedQueue.
        :rtype: str
        """
        return self._retry

    @retry.setter
    def retry(self, retry):
        """
        Sets the retry of this ModifiedQueue.


        :param retry: The retry of this ModifiedQueue.
        :type: str
        """
        self._retry = retry

    @property
    def name(self):
        """
        Gets the name of this ModifiedQueue.


        :return: The name of this ModifiedQueue.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this ModifiedQueue.


        :param name: The name of this ModifiedQueue.
        :type: str
        """
        self._name = name

    @property
    def subscribers(self):
        """
        Gets the subscribers of this ModifiedQueue.


        :return: The subscribers of this ModifiedQueue.
        :rtype: list[str]
        """
        return self._subscribers

    @subscribers.setter
    def subscribers(self, subscribers):
        """
        Sets the subscribers of this ModifiedQueue.


        :param subscribers: The subscribers of this ModifiedQueue.
        :type: list[str]
        """
        self._subscribers = subscribers

    @property
    def is_modified(self):
        """
        Gets the is_modified of this ModifiedQueue.


        :return: The is_modified of this ModifiedQueue.
        :rtype: bool
        """
        return self._is_modified

    @is_modified.setter
    def is_modified(self, is_modified):
        """
        Sets the is_modified of this ModifiedQueue.


        :param is_modified: The is_modified of this ModifiedQueue.
        :type: bool
        """
        self._is_modified = is_modified

    @property
    def modified_columns(self):
        """
        Gets the modified_columns of this ModifiedQueue.


        :return: The modified_columns of this ModifiedQueue.
        :rtype: list[str]
        """
        return self._modified_columns

    @modified_columns.setter
    def modified_columns(self, modified_columns):
        """
        Sets the modified_columns of this ModifiedQueue.


        :param modified_columns: The modified_columns of this ModifiedQueue.
        :type: list[str]
        """
        self._modified_columns = modified_columns

    @property
    def messages(self):
        """
        Gets the messages of this ModifiedQueue.


        :return: The messages of this ModifiedQueue.
        :rtype: list[QueueMessage]
        """
        return self._messages

    @messages.setter
    def messages(self, messages):
        """
        Sets the messages of this ModifiedQueue.


        :param messages: The messages of this ModifiedQueue.
        :type: list[QueueMessage]
        """
        self._messages = messages

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
