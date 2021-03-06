<?php
/**
 * Column
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */
/**
 *  Copyright 2016 SmartBear Software
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;
/**
 * Column Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Swagger\Client
 * @author      http://github.com/swagger-api/swagger-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class Column implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $swaggerTypes = array(
        'name' => 'string',
        'data_type' => 'string',
        '_type' => 'string',
        'required' => 'bool',
        'unique' => 'bool',
        'related_to' => 'string',
        'relation_type' => 'string',
        'is_deletable' => 'bool',
        'is_editable' => 'bool',
        'is_renamable' => 'bool'
    );
  
    static function swaggerTypes() {
        return self::$swaggerTypes;
    }

    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        'name' => 'name',
        'data_type' => 'dataType',
        '_type' => '_type',
        'required' => 'required',
        'unique' => 'unique',
        'related_to' => 'relatedTo',
        'relation_type' => 'relationType',
        'is_deletable' => 'isDeletable',
        'is_editable' => 'isEditable',
        'is_renamable' => 'isRenamable'
    );
  
    static function attributeMap() {
        return self::$attributeMap;
    }

    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        'name' => 'setName',
        'data_type' => 'setDataType',
        '_type' => 'setType',
        'required' => 'setRequired',
        'unique' => 'setUnique',
        'related_to' => 'setRelatedTo',
        'relation_type' => 'setRelationType',
        'is_deletable' => 'setIsDeletable',
        'is_editable' => 'setIsEditable',
        'is_renamable' => 'setIsRenamable'
    );
  
    static function setters() {
        return self::$setters;
    }

    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        'name' => 'getName',
        'data_type' => 'getDataType',
        '_type' => 'getType',
        'required' => 'getRequired',
        'unique' => 'getUnique',
        'related_to' => 'getRelatedTo',
        'relation_type' => 'getRelationType',
        'is_deletable' => 'getIsDeletable',
        'is_editable' => 'getIsEditable',
        'is_renamable' => 'getIsRenamable'
    );
  
    static function getters() {
        return self::$getters;
    }

    
    /**
      * $name 
      * @var string
      */
    protected $name = 'table_name';
    
    /**
      * $data_type 
      * @var string
      */
    protected $data_type = 'Text';
    
    /**
      * $_type 
      * @var string
      */
    protected $_type = 'column';
    
    /**
      * $required 
      * @var bool
      */
    protected $required = false;
    
    /**
      * $unique 
      * @var bool
      */
    protected $unique = false;
    
    /**
      * $related_to 
      * @var string
      */
    protected $related_to = 'null';
    
    /**
      * $relation_type 
      * @var string
      */
    protected $relation_type = 'null';
    
    /**
      * $is_deletable 
      * @var bool
      */
    protected $is_deletable = true;
    
    /**
      * $is_editable 
      * @var bool
      */
    protected $is_editable = true;
    
    /**
      * $is_renamable 
      * @var bool
      */
    protected $is_renamable = false;
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->name = $data["name"];
            $this->data_type = $data["data_type"];
            $this->_type = $data["_type"];
            $this->required = $data["required"];
            $this->unique = $data["unique"];
            $this->related_to = $data["related_to"];
            $this->relation_type = $data["relation_type"];
            $this->is_deletable = $data["is_deletable"];
            $this->is_editable = $data["is_editable"];
            $this->is_renamable = $data["is_renamable"];
        }
    }
    
    /**
     * Gets name
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }
  
    /**
     * Sets name
     * @param string $name 
     * @return $this
     */
    public function setName($name)
    {
        
        $this->name = $name;
        return $this;
    }
    
    /**
     * Gets data_type
     * @return string
     */
    public function getDataType()
    {
        return $this->data_type;
    }
  
    /**
     * Sets data_type
     * @param string $data_type 
     * @return $this
     */
    public function setDataType($data_type)
    {
        $allowed_values = array("Text", "Email", "URL", "Number", "Boolean", "DateTime", "GeoPoint", "File", "List", "Relation", "Object", "Id", "EncryptedText", "ACL");
        if (!in_array($data_type, $allowed_values)) {
            throw new \InvalidArgumentException("Invalid value for 'data_type', must be one of 'Text', 'Email', 'URL', 'Number', 'Boolean', 'DateTime', 'GeoPoint', 'File', 'List', 'Relation', 'Object', 'Id', 'EncryptedText', 'ACL'");
        }
        $this->data_type = $data_type;
        return $this;
    }
    
    /**
     * Gets _type
     * @return string
     */
    public function getType()
    {
        return $this->_type;
    }
  
    /**
     * Sets _type
     * @param string $_type 
     * @return $this
     */
    public function setType($_type)
    {
        
        $this->_type = $_type;
        return $this;
    }
    
    /**
     * Gets required
     * @return bool
     */
    public function getRequired()
    {
        return $this->required;
    }
  
    /**
     * Sets required
     * @param bool $required 
     * @return $this
     */
    public function setRequired($required)
    {
        
        $this->required = $required;
        return $this;
    }
    
    /**
     * Gets unique
     * @return bool
     */
    public function getUnique()
    {
        return $this->unique;
    }
  
    /**
     * Sets unique
     * @param bool $unique 
     * @return $this
     */
    public function setUnique($unique)
    {
        
        $this->unique = $unique;
        return $this;
    }
    
    /**
     * Gets related_to
     * @return string
     */
    public function getRelatedTo()
    {
        return $this->related_to;
    }
  
    /**
     * Sets related_to
     * @param string $related_to 
     * @return $this
     */
    public function setRelatedTo($related_to)
    {
        
        $this->related_to = $related_to;
        return $this;
    }
    
    /**
     * Gets relation_type
     * @return string
     */
    public function getRelationType()
    {
        return $this->relation_type;
    }
  
    /**
     * Sets relation_type
     * @param string $relation_type 
     * @return $this
     */
    public function setRelationType($relation_type)
    {
        
        $this->relation_type = $relation_type;
        return $this;
    }
    
    /**
     * Gets is_deletable
     * @return bool
     */
    public function getIsDeletable()
    {
        return $this->is_deletable;
    }
  
    /**
     * Sets is_deletable
     * @param bool $is_deletable 
     * @return $this
     */
    public function setIsDeletable($is_deletable)
    {
        
        $this->is_deletable = $is_deletable;
        return $this;
    }
    
    /**
     * Gets is_editable
     * @return bool
     */
    public function getIsEditable()
    {
        return $this->is_editable;
    }
  
    /**
     * Sets is_editable
     * @param bool $is_editable 
     * @return $this
     */
    public function setIsEditable($is_editable)
    {
        
        $this->is_editable = $is_editable;
        return $this;
    }
    
    /**
     * Gets is_renamable
     * @return bool
     */
    public function getIsRenamable()
    {
        return $this->is_renamable;
    }
  
    /**
     * Sets is_renamable
     * @param bool $is_renamable 
     * @return $this
     */
    public function setIsRenamable($is_renamable)
    {
        
        $this->is_renamable = $is_renamable;
        return $this;
    }
    
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset 
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->$offset);
    }
  
    /**
     * Gets offset.
     * @param  integer $offset Offset 
     * @return mixed 
     */
    public function offsetGet($offset)
    {
        return $this->$offset;
    }
  
    /**
     * Sets value based on offset.
     * @param  integer $offset Offset 
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        $this->$offset = $value;
    }
  
    /**
     * Unsets offset.
     * @param  integer $offset Offset 
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->$offset);
    }
  
    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) {
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        } else {
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
        }
    }
}
