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
    public partial class UserRoleBody :  IEquatable<UserRoleBody>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="UserRoleBody" /> class.
        /// Initializes a new instance of the <see cref="UserRoleBody" />class.
        /// </summary>
        /// <param name="Key">Key.</param>
        /// <param name="Role">Role.</param>
        /// <param name="User">User.</param>

        public UserRoleBody(string Key = null, CloudRole Role = null, CloudUser User = null)
        {
            this.Key = Key;
            this.Role = Role;
            this.User = User;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Key
        /// </summary>
        [DataMember(Name="key", EmitDefaultValue=false)]
        public string Key { get; set; }
    
        /// <summary>
        /// Gets or Sets Role
        /// </summary>
        [DataMember(Name="role", EmitDefaultValue=false)]
        public CloudRole Role { get; set; }
    
        /// <summary>
        /// Gets or Sets User
        /// </summary>
        [DataMember(Name="user", EmitDefaultValue=false)]
        public CloudUser User { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class UserRoleBody {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  User: ").Append(User).Append("\n");
            
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
            return this.Equals(obj as UserRoleBody);
        }

        /// <summary>
        /// Returns true if UserRoleBody instances are equal
        /// </summary>
        /// <param name="other">Instance of UserRoleBody to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(UserRoleBody other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Key == other.Key ||
                    this.Key != null &&
                    this.Key.Equals(other.Key)
                ) && 
                (
                    this.Role == other.Role ||
                    this.Role != null &&
                    this.Role.Equals(other.Role)
                ) && 
                (
                    this.User == other.User ||
                    this.User != null &&
                    this.User.Equals(other.User)
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
                
                if (this.Key != null)
                    hash = hash * 59 + this.Key.GetHashCode();
                
                if (this.Role != null)
                    hash = hash * 59 + this.Role.GetHashCode();
                
                if (this.User != null)
                    hash = hash * 59 + this.User.GetHashCode();
                
                return hash;
            }
        }

    }
}
