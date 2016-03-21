<?php
/**
 * CloudQuery
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
 * CloudQuery Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Swagger\Client
 * @author      http://github.com/swagger-api/swagger-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class CloudQuery implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $swaggerTypes = array(
        'key' => 'string',
        'skip' => 'int',
        'limit' => 'int',
        'query' => '\Swagger\Client\Model\Query',
        'sort' => 'object',
        'select' => 'object'
    );
  
    static function swaggerTypes() {
        return self::$swaggerTypes;
    }

    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        'key' => 'key',
        'skip' => 'skip',
        'limit' => 'limit',
        'query' => 'query',
        'sort' => 'sort',
        'select' => 'select'
    );
  
    static function attributeMap() {
        return self::$attributeMap;
    }

    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        'key' => 'setKey',
        'skip' => 'setSkip',
        'limit' => 'setLimit',
        'query' => 'setQuery',
        'sort' => 'setSort',
        'select' => 'setSelect'
    );
  
    static function setters() {
        return self::$setters;
    }

    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        'key' => 'getKey',
        'skip' => 'getSkip',
        'limit' => 'getLimit',
        'query' => 'getQuery',
        'sort' => 'getSort',
        'select' => 'getSelect'
    );
  
    static function getters() {
        return self::$getters;
    }

    
    /**
      * $key 
      * @var string
      */
    protected $key;
    
    /**
      * $skip 
      * @var int
      */
    protected $skip;
    
    /**
      * $limit 
      * @var int
      */
    protected $limit;
    
    /**
      * $query 
      * @var \Swagger\Client\Model\Query
      */
    protected $query;
    
    /**
      * $sort 
      * @var object
      */
    protected $sort;
    
    /**
      * $select 
      * @var object
      */
    protected $select;
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->key = $data["key"];
            $this->skip = $data["skip"];
            $this->limit = $data["limit"];
            $this->query = $data["query"];
            $this->sort = $data["sort"];
            $this->select = $data["select"];
        }
    }
    
    /**
     * Gets key
     * @return string
     */
    public function getKey()
    {
        return $this->key;
    }
  
    /**
     * Sets key
     * @param string $key 
     * @return $this
     */
    public function setKey($key)
    {
        
        $this->key = $key;
        return $this;
    }
    
    /**
     * Gets skip
     * @return int
     */
    public function getSkip()
    {
        return $this->skip;
    }
  
    /**
     * Sets skip
     * @param int $skip 
     * @return $this
     */
    public function setSkip($skip)
    {
        
        $this->skip = $skip;
        return $this;
    }
    
    /**
     * Gets limit
     * @return int
     */
    public function getLimit()
    {
        return $this->limit;
    }
  
    /**
     * Sets limit
     * @param int $limit 
     * @return $this
     */
    public function setLimit($limit)
    {
        
        $this->limit = $limit;
        return $this;
    }
    
    /**
     * Gets query
     * @return \Swagger\Client\Model\Query
     */
    public function getQuery()
    {
        return $this->query;
    }
  
    /**
     * Sets query
     * @param \Swagger\Client\Model\Query $query 
     * @return $this
     */
    public function setQuery($query)
    {
        
        $this->query = $query;
        return $this;
    }
    
    /**
     * Gets sort
     * @return object
     */
    public function getSort()
    {
        return $this->sort;
    }
  
    /**
     * Sets sort
     * @param object $sort 
     * @return $this
     */
    public function setSort($sort)
    {
        
        $this->sort = $sort;
        return $this;
    }
    
    /**
     * Gets select
     * @return object
     */
    public function getSelect()
    {
        return $this->select;
    }
  
    /**
     * Sets select
     * @param object $select 
     * @return $this
     */
    public function setSelect($select)
    {
        
        $this->select = $select;
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
