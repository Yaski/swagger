<?php
/**
 * CloudFile
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
 * CloudFile Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Swagger\Client
 * @author      http://github.com/swagger-api/swagger-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class CloudFile implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $swaggerTypes = array(
        '_id' => 'string',
        '_type' => 'string',
        'acl' => '\Swagger\Client\Model\ACL',
        'name' => 'string',
        'size' => 'float',
        'url' => 'string',
        'expires' => '\DateTime',
        'content_type' => 'string'
    );
  
    static function swaggerTypes() {
        return self::$swaggerTypes;
    }

    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        '_id' => '_id',
        '_type' => '_type',
        'acl' => 'ACL',
        'name' => 'name',
        'size' => 'size',
        'url' => 'url',
        'expires' => 'expires',
        'content_type' => 'contentType'
    );
  
    static function attributeMap() {
        return self::$attributeMap;
    }

    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        '_id' => 'setId',
        '_type' => 'setType',
        'acl' => 'setAcl',
        'name' => 'setName',
        'size' => 'setSize',
        'url' => 'setUrl',
        'expires' => 'setExpires',
        'content_type' => 'setContentType'
    );
  
    static function setters() {
        return self::$setters;
    }

    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        '_id' => 'getId',
        '_type' => 'getType',
        'acl' => 'getAcl',
        'name' => 'getName',
        'size' => 'getSize',
        'url' => 'getUrl',
        'expires' => 'getExpires',
        'content_type' => 'getContentType'
    );
  
    static function getters() {
        return self::$getters;
    }

    
    /**
      * $_id 
      * @var string
      */
    protected $_id;
    
    /**
      * $_type 
      * @var string
      */
    protected $_type = 'file';
    
    /**
      * $acl 
      * @var \Swagger\Client\Model\ACL
      */
    protected $acl;
    
    /**
      * $name 
      * @var string
      */
    protected $name;
    
    /**
      * $size 
      * @var float
      */
    protected $size;
    
    /**
      * $url 
      * @var string
      */
    protected $url;
    
    /**
      * $expires 
      * @var \DateTime
      */
    protected $expires;
    
    /**
      * $content_type 
      * @var string
      */
    protected $content_type = 'application/octet-stream';
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->_id = $data["_id"];
            $this->_type = $data["_type"];
            $this->acl = $data["acl"];
            $this->name = $data["name"];
            $this->size = $data["size"];
            $this->url = $data["url"];
            $this->expires = $data["expires"];
            $this->content_type = $data["content_type"];
        }
    }
    
    /**
     * Gets _id
     * @return string
     */
    public function getId()
    {
        return $this->_id;
    }
  
    /**
     * Sets _id
     * @param string $_id 
     * @return $this
     */
    public function setId($_id)
    {
        
        $this->_id = $_id;
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
     * Gets acl
     * @return \Swagger\Client\Model\ACL
     */
    public function getAcl()
    {
        return $this->acl;
    }
  
    /**
     * Sets acl
     * @param \Swagger\Client\Model\ACL $acl 
     * @return $this
     */
    public function setAcl($acl)
    {
        
        $this->acl = $acl;
        return $this;
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
     * Gets size
     * @return float
     */
    public function getSize()
    {
        return $this->size;
    }
  
    /**
     * Sets size
     * @param float $size 
     * @return $this
     */
    public function setSize($size)
    {
        
        $this->size = $size;
        return $this;
    }
    
    /**
     * Gets url
     * @return string
     */
    public function getUrl()
    {
        return $this->url;
    }
  
    /**
     * Sets url
     * @param string $url 
     * @return $this
     */
    public function setUrl($url)
    {
        
        $this->url = $url;
        return $this;
    }
    
    /**
     * Gets expires
     * @return \DateTime
     */
    public function getExpires()
    {
        return $this->expires;
    }
  
    /**
     * Sets expires
     * @param \DateTime $expires 
     * @return $this
     */
    public function setExpires($expires)
    {
        
        $this->expires = $expires;
        return $this;
    }
    
    /**
     * Gets content_type
     * @return string
     */
    public function getContentType()
    {
        return $this->content_type;
    }
  
    /**
     * Sets content_type
     * @param string $content_type 
     * @return $this
     */
    public function setContentType($content_type)
    {
        
        $this->content_type = $content_type;
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
