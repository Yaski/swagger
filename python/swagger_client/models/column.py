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


class Column(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self):
        """
        Column - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'name': 'str',
            'data_type': 'str',
            'type': 'str',
            'required': 'bool',
            'unique': 'bool',
            'related_to': 'str',
            'relation_type': 'str',
            'is_deletable': 'bool',
            'is_editable': 'bool',
            'is_renamable': 'bool'
        }

        self.attribute_map = {
            'name': 'name',
            'data_type': 'dataType',
            'type': '_type',
            'required': 'required',
            'unique': 'unique',
            'related_to': 'relatedTo',
            'relation_type': 'relationType',
            'is_deletable': 'isDeletable',
            'is_editable': 'isEditable',
            'is_renamable': 'isRenamable'
        }

        self._name = 'table_name'
        self._data_type = 'Text'
        self._type = 'column'
        self._required = False
        self._unique = False
        self._related_to = 'null'
        self._relation_type = 'null'
        self._is_deletable = True
        self._is_editable = True
        self._is_renamable = False

    @property
    def name(self):
        """
        Gets the name of this Column.


        :return: The name of this Column.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this Column.


        :param name: The name of this Column.
        :type: str
        """
        self._name = name

    @property
    def data_type(self):
        """
        Gets the data_type of this Column.


        :return: The data_type of this Column.
        :rtype: str
        """
        return self._data_type

    @data_type.setter
    def data_type(self, data_type):
        """
        Sets the data_type of this Column.


        :param data_type: The data_type of this Column.
        :type: str
        """
        allowed_values = ["Text", "Email", "URL", "Number", "Boolean", "DateTime", "GeoPoint", "File", "List", "Relation", "Object", "Id", "EncryptedText", "ACL"]
        if data_type not in allowed_values:
            raise ValueError(
                "Invalid value for `data_type`, must be one of {0}"
                .format(allowed_values)
            )
        self._data_type = data_type

    @property
    def type(self):
        """
        Gets the type of this Column.


        :return: The type of this Column.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """
        Sets the type of this Column.


        :param type: The type of this Column.
        :type: str
        """
        self._type = type

    @property
    def required(self):
        """
        Gets the required of this Column.


        :return: The required of this Column.
        :rtype: bool
        """
        return self._required

    @required.setter
    def required(self, required):
        """
        Sets the required of this Column.


        :param required: The required of this Column.
        :type: bool
        """
        self._required = required

    @property
    def unique(self):
        """
        Gets the unique of this Column.


        :return: The unique of this Column.
        :rtype: bool
        """
        return self._unique

    @unique.setter
    def unique(self, unique):
        """
        Sets the unique of this Column.


        :param unique: The unique of this Column.
        :type: bool
        """
        self._unique = unique

    @property
    def related_to(self):
        """
        Gets the related_to of this Column.


        :return: The related_to of this Column.
        :rtype: str
        """
        return self._related_to

    @related_to.setter
    def related_to(self, related_to):
        """
        Sets the related_to of this Column.


        :param related_to: The related_to of this Column.
        :type: str
        """
        self._related_to = related_to

    @property
    def relation_type(self):
        """
        Gets the relation_type of this Column.


        :return: The relation_type of this Column.
        :rtype: str
        """
        return self._relation_type

    @relation_type.setter
    def relation_type(self, relation_type):
        """
        Sets the relation_type of this Column.


        :param relation_type: The relation_type of this Column.
        :type: str
        """
        self._relation_type = relation_type

    @property
    def is_deletable(self):
        """
        Gets the is_deletable of this Column.


        :return: The is_deletable of this Column.
        :rtype: bool
        """
        return self._is_deletable

    @is_deletable.setter
    def is_deletable(self, is_deletable):
        """
        Sets the is_deletable of this Column.


        :param is_deletable: The is_deletable of this Column.
        :type: bool
        """
        self._is_deletable = is_deletable

    @property
    def is_editable(self):
        """
        Gets the is_editable of this Column.


        :return: The is_editable of this Column.
        :rtype: bool
        """
        return self._is_editable

    @is_editable.setter
    def is_editable(self, is_editable):
        """
        Sets the is_editable of this Column.


        :param is_editable: The is_editable of this Column.
        :type: bool
        """
        self._is_editable = is_editable

    @property
    def is_renamable(self):
        """
        Gets the is_renamable of this Column.


        :return: The is_renamable of this Column.
        :rtype: bool
        """
        return self._is_renamable

    @is_renamable.setter
    def is_renamable(self, is_renamable):
        """
        Sets the is_renamable of this Column.


        :param is_renamable: The is_renamable of this Column.
        :type: bool
        """
        self._is_renamable = is_renamable

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

