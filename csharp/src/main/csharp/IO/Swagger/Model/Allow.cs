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
    public partial class Allow :  IEquatable<Allow>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="Allow" /> class.
        /// Initializes a new instance of the <see cref="Allow" />class.
        /// </summary>
        /// <param name="User">User.</param>
        /// <param name="Role">Role.</param>

        public Allow(List<string> User = null, List<string> Role = null)
        {
            this.User = User;
            this.Role = Role;
            
        }
        
    
        /// <summary>
        /// Gets or Sets User
        /// </summary>
        [DataMember(Name="user", EmitDefaultValue=false)]
        public List<string> User { get; set; }
    
        /// <summary>
        /// Gets or Sets Role
        /// </summary>
        [DataMember(Name="role", EmitDefaultValue=false)]
        public List<string> Role { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Allow {\n");
            sb.Append("  User: ").Append(User).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            
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
            return this.Equals(obj as Allow);
        }

        /// <summary>
        /// Returns true if Allow instances are equal
        /// </summary>
        /// <param name="other">Instance of Allow to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Allow other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.User == other.User ||
                    this.User != null &&
                    this.User.SequenceEqual(other.User)
                ) && 
                (
                    this.Role == other.Role ||
                    this.Role != null &&
                    this.Role.SequenceEqual(other.Role)
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
                
                if (this.User != null)
                    hash = hash * 59 + this.User.GetHashCode();
                
                if (this.Role != null)
                    hash = hash * 59 + this.Role.GetHashCode();
                
                return hash;
            }
        }

    }
}
