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
    public partial class Cache :  IEquatable<Cache>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="Cache" /> class.
        /// Initializes a new instance of the <see cref="Cache" />class.
        /// </summary>
        /// <param name="Type">Type (default to &quot;cache&quot;).</param>
        /// <param name="Name">Name.</param>
        /// <param name="Size">Size.</param>

        public Cache(string Type = null, string Name = null, string Size = null)
        {
            // use default value if no "Type" provided
            if (Type == null)
            {
                this.Type = "cache";
            }
            else
            {
                this.Type = Type;
            }
            this.Name = Name;
            this.Size = Size;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="_type", EmitDefaultValue=false)]
        public string Type { get; set; }
    
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }
    
        /// <summary>
        /// Gets or Sets Size
        /// </summary>
        [DataMember(Name="size", EmitDefaultValue=false)]
        public string Size { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Cache {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            
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
            return this.Equals(obj as Cache);
        }

        /// <summary>
        /// Returns true if Cache instances are equal
        /// </summary>
        /// <param name="other">Instance of Cache to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Cache other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Size == other.Size ||
                    this.Size != null &&
                    this.Size.Equals(other.Size)
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
                
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                
                if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                
                if (this.Size != null)
                    hash = hash * 59 + this.Size.GetHashCode();
                
                return hash;
            }
        }

    }
}
