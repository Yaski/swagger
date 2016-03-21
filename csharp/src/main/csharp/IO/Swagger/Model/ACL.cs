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
    public partial class ACL :  IEquatable<ACL>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="ACL" /> class.
        /// Initializes a new instance of the <see cref="ACL" />class.
        /// </summary>
        /// <param name="Read">Read.</param>
        /// <param name="Write">Write.</param>

        public ACL(Read Read = null, Write Write = null)
        {
            this.Read = Read;
            this.Write = Write;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Read
        /// </summary>
        [DataMember(Name="read", EmitDefaultValue=false)]
        public Read Read { get; set; }
    
        /// <summary>
        /// Gets or Sets Write
        /// </summary>
        [DataMember(Name="write", EmitDefaultValue=false)]
        public Write Write { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ACL {\n");
            sb.Append("  Read: ").Append(Read).Append("\n");
            sb.Append("  Write: ").Append(Write).Append("\n");
            
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
            return this.Equals(obj as ACL);
        }

        /// <summary>
        /// Returns true if ACL instances are equal
        /// </summary>
        /// <param name="other">Instance of ACL to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ACL other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Read == other.Read ||
                    this.Read != null &&
                    this.Read.Equals(other.Read)
                ) && 
                (
                    this.Write == other.Write ||
                    this.Write != null &&
                    this.Write.Equals(other.Write)
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
                
                if (this.Read != null)
                    hash = hash * 59 + this.Read.GetHashCode();
                
                if (this.Write != null)
                    hash = hash * 59 + this.Write.GetHashCode();
                
                return hash;
            }
        }

    }
}
