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


class QueueMessage(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self):
        """
        QueueMessage - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'acl': 'ACL',
            'type': 'str',
            'expires': 'datetime',
            'id': 'str',
            'delay': 'datetime',
            'timeout': 'int',
            'modified_columns': 'list[str]',
            'is_modified': 'bool',
            'message': 'str'
        }

        self.attribute_map = {
            'acl': 'ACL',
            'type': '_type',
            'expires': 'expires',
            'id': '_id',
            'delay': 'delay',
            'timeout': 'timeout',
            'modified_columns': '_modifiedColumns',
            'is_modified': '_isModified',
            'message': 'message'
        }

        self._acl = None
        self._type = 'queue-message'
        self._expires = None
        self._id = None
        self._delay = None
        self._timeout = 1800
        self._modified_columns = None
        self._is_modified = True
        self._message = None

    @property
    def acl(self):
        """
        Gets the acl of this QueueMessage.


        :return: The acl of this QueueMessage.
        :rtype: ACL
        """
        return self._acl

    @acl.setter
    def acl(self, acl):
        """
        Sets the acl of this QueueMessage.


        :param acl: The acl of this QueueMessage.
        :type: ACL
        """
        self._acl = acl

    @property
    def type(self):
        """
        Gets the type of this QueueMessage.


        :return: The type of this QueueMessage.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """
        Sets the type of this QueueMessage.


        :param type: The type of this QueueMessage.
        :type: str
        """
        self._type = type

    @property
    def expires(self):
        """
        Gets the expires of this QueueMessage.


        :return: The expires of this QueueMessage.
        :rtype: datetime
        """
        return self._expires

    @expires.setter
    def expires(self, expires):
        """
        Sets the expires of this QueueMessage.


        :param expires: The expires of this QueueMessage.
        :type: datetime
        """
        self._expires = expires

    @property
    def id(self):
        """
        Gets the id of this QueueMessage.


        :return: The id of this QueueMessage.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this QueueMessage.


        :param id: The id of this QueueMessage.
        :type: str
        """
        self._id = id

    @property
    def delay(self):
        """
        Gets the delay of this QueueMessage.


        :return: The delay of this QueueMessage.
        :rtype: datetime
        """
        return self._delay

    @delay.setter
    def delay(self, delay):
        """
        Sets the delay of this QueueMessage.


        :param delay: The delay of this QueueMessage.
        :type: datetime
        """
        self._delay = delay

    @property
    def timeout(self):
        """
        Gets the timeout of this QueueMessage.


        :return: The timeout of this QueueMessage.
        :rtype: int
        """
        return self._timeout

    @timeout.setter
    def timeout(self, timeout):
        """
        Sets the timeout of this QueueMessage.


        :param timeout: The timeout of this QueueMessage.
        :type: int
        """
        self._timeout = timeout

    @property
    def modified_columns(self):
        """
        Gets the modified_columns of this QueueMessage.


        :return: The modified_columns of this QueueMessage.
        :rtype: list[str]
        """
        return self._modified_columns

    @modified_columns.setter
    def modified_columns(self, modified_columns):
        """
        Sets the modified_columns of this QueueMessage.


        :param modified_columns: The modified_columns of this QueueMessage.
        :type: list[str]
        """
        self._modified_columns = modified_columns

    @property
    def is_modified(self):
        """
        Gets the is_modified of this QueueMessage.


        :return: The is_modified of this QueueMessage.
        :rtype: bool
        """
        return self._is_modified

    @is_modified.setter
    def is_modified(self, is_modified):
        """
        Sets the is_modified of this QueueMessage.


        :param is_modified: The is_modified of this QueueMessage.
        :type: bool
        """
        self._is_modified = is_modified

    @property
    def message(self):
        """
        Gets the message of this QueueMessage.


        :return: The message of this QueueMessage.
        :rtype: str
        """
        return self._message

    @message.setter
    def message(self, message):
        """
        Sets the message of this QueueMessage.


        :param message: The message of this QueueMessage.
        :type: str
        """
        self._message = message

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

