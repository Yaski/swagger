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
    public partial class RefreshMessageTimeoutBody :  IEquatable<RefreshMessageTimeoutBody>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="RefreshMessageTimeoutBody" /> class.
        /// Initializes a new instance of the <see cref="RefreshMessageTimeoutBody" />class.
        /// </summary>
        /// <param name="Timeout">Timeout.</param>
        /// <param name="Key">Key (default to &quot;app_key&quot;).</param>

        public RefreshMessageTimeoutBody(long? Timeout = null, string Key = null)
        {
            this.Timeout = Timeout;
            // use default value if no "Key" provided
            if (Key == null)
            {
                this.Key = "app_key";
            }
            else
            {
                this.Key = Key;
            }
            
        }
        
    
        /// <summary>
        /// Gets or Sets Timeout
        /// </summary>
        [DataMember(Name="timeout", EmitDefaultValue=false)]
        public long? Timeout { get; set; }
    
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
            sb.Append("class RefreshMessageTimeoutBody {\n");
            sb.Append("  Timeout: ").Append(Timeout).Append("\n");
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
            return this.Equals(obj as RefreshMessageTimeoutBody);
        }

        /// <summary>
        /// Returns true if RefreshMessageTimeoutBody instances are equal
        /// </summary>
        /// <param name="other">Instance of RefreshMessageTimeoutBody to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RefreshMessageTimeoutBody other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Timeout == other.Timeout ||
                    this.Timeout != null &&
                    this.Timeout.Equals(other.Timeout)
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
                
                if (this.Timeout != null)
                    hash = hash * 59 + this.Timeout.GetHashCode();
                
                if (this.Key != null)
                    hash = hash * 59 + this.Key.GetHashCode();
                
                return hash;
            }
        }

    }
}
