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
    public partial class Read :  IEquatable<Read>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="Read" /> class.
        /// Initializes a new instance of the <see cref="Read" />class.
        /// </summary>
        /// <param name="Allow">Allow.</param>
        /// <param name="Deny">Deny.</param>

        public Read(Allow Allow = null, Deny Deny = null)
        {
            this.Allow = Allow;
            this.Deny = Deny;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Allow
        /// </summary>
        [DataMember(Name="allow", EmitDefaultValue=false)]
        public Allow Allow { get; set; }
    
        /// <summary>
        /// Gets or Sets Deny
        /// </summary>
        [DataMember(Name="deny", EmitDefaultValue=false)]
        public Deny Deny { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Read {\n");
            sb.Append("  Allow: ").Append(Allow).Append("\n");
            sb.Append("  Deny: ").Append(Deny).Append("\n");
            
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
            return this.Equals(obj as Read);
        }

        /// <summary>
        /// Returns true if Read instances are equal
        /// </summary>
        /// <param name="other">Instance of Read to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Read other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Allow == other.Allow ||
                    this.Allow != null &&
                    this.Allow.Equals(other.Allow)
                ) && 
                (
                    this.Deny == other.Deny ||
                    this.Deny != null &&
                    this.Deny.Equals(other.Deny)
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
                
                if (this.Allow != null)
                    hash = hash * 59 + this.Allow.GetHashCode();
                
                if (this.Deny != null)
                    hash = hash * 59 + this.Deny.GetHashCode();
                
                return hash;
            }
        }

    }
}
