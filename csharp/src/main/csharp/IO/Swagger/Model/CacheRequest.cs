using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace IO.Swagger.Model
{
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class CacheRequest :  IEquatable<CacheRequest>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CacheRequest" /> class.
        /// Initializes a new instance of the <see cref="CacheRequest" />class.
        /// </summary>
        /// <param name="Item">Item.</param>
        /// <param name="Key">Key (default to &quot;master_key&quot;).</param>

        public CacheRequest(string Item = null, string Key = null)
        {
            this.Item = Item;
            // use default value if no "Key" provided
            if (Key == null)
            {
                this.Key = "master_key";
            }
            else
            {
                this.Key = Key;
            }
            
        }
        
    
        /// <summary>
        /// Gets or Sets Item
        /// </summary>
        [DataMember(Name="item", EmitDefaultValue=false)]
        public string Item { get; set; }
    
        /// <summary>
        /// Gets or Sets Key
        /// </summary>
        [DataMember(Name="key", EmitDefaultValue=false)]
        public string Key { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CacheRequest {\n");
            sb.Append("  Item: ").Append(Item).Append("\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as CacheRequest);
        }

        /// <summary>
        /// Returns true if CacheRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of CacheRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CacheRequest other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Item == other.Item ||
                    this.Item != null &&
                    this.Item.Equals(other.Item)
                ) && 
                (
                    this.Key == other.Key ||
                    this.Key != null &&
                    this.Key.Equals(other.Key)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                
                if (this.Item != null)
                    hash = hash * 59 + this.Item.GetHashCode();
                
                if (this.Key != null)
                    hash = hash * 59 + this.Key.GetHashCode();
                
                return hash;
            }
        }

    }
}
