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
    public partial class CloudFile :  IEquatable<CloudFile>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudFile" /> class.
        /// Initializes a new instance of the <see cref="CloudFile" />class.
        /// </summary>
        /// <param name="Id">Id.</param>
        /// <param name="Type">Type (default to &quot;file&quot;).</param>
        /// <param name="ACL">ACL.</param>
        /// <param name="Name">Name.</param>
        /// <param name="Size">Size.</param>
        /// <param name="Url">Url.</param>
        /// <param name="Expires">Expires.</param>
        /// <param name="ContentType">ContentType (default to &quot;application/octet-stream&quot;).</param>

        public CloudFile(string Id = null, string Type = null, ACL ACL = null, string Name = null, float? Size = null, string Url = null, DateTime? Expires = null, string ContentType = null)
        {
            this.Id = Id;
            // use default value if no "Type" provided
            if (Type == null)
            {
                this.Type = "file";
            }
            else
            {
                this.Type = Type;
            }
            this.ACL = ACL;
            this.Name = Name;
            this.Size = Size;
            this.Url = Url;
            this.Expires = Expires;
            // use default value if no "ContentType" provided
            if (ContentType == null)
            {
                this.ContentType = "application/octet-stream";
            }
            else
            {
                this.ContentType = ContentType;
            }
            
        }
        
    
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="_id", EmitDefaultValue=false)]
        public string Id { get; set; }
    
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="_type", EmitDefaultValue=false)]
        public string Type { get; set; }
    
        /// <summary>
        /// Gets or Sets ACL
        /// </summary>
        [DataMember(Name="ACL", EmitDefaultValue=false)]
        public ACL ACL { get; set; }
    
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }
    
        /// <summary>
        /// Gets or Sets Size
        /// </summary>
        [DataMember(Name="size", EmitDefaultValue=false)]
        public float? Size { get; set; }
    
        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url", EmitDefaultValue=false)]
        public string Url { get; set; }
    
        /// <summary>
        /// Gets or Sets Expires
        /// </summary>
        [DataMember(Name="expires", EmitDefaultValue=false)]
        public DateTime? Expires { get; set; }
    
        /// <summary>
        /// Gets or Sets ContentType
        /// </summary>
        [DataMember(Name="contentType", EmitDefaultValue=false)]
        public string ContentType { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CloudFile {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  ACL: ").Append(ACL).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Expires: ").Append(Expires).Append("\n");
            sb.Append("  ContentType: ").Append(ContentType).Append("\n");
            
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
            return this.Equals(obj as CloudFile);
        }

        /// <summary>
        /// Returns true if CloudFile instances are equal
        /// </summary>
        /// <param name="other">Instance of CloudFile to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CloudFile other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Id == other.Id ||
                    this.Id != null &&
                    this.Id.Equals(other.Id)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.ACL == other.ACL ||
                    this.ACL != null &&
                    this.ACL.Equals(other.ACL)
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
                ) && 
                (
                    this.Url == other.Url ||
                    this.Url != null &&
                    this.Url.Equals(other.Url)
                ) && 
                (
                    this.Expires == other.Expires ||
                    this.Expires != null &&
                    this.Expires.Equals(other.Expires)
                ) && 
                (
                    this.ContentType == other.ContentType ||
                    this.ContentType != null &&
                    this.ContentType.Equals(other.ContentType)
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
                
                if (this.Id != null)
                    hash = hash * 59 + this.Id.GetHashCode();
                
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                
                if (this.ACL != null)
                    hash = hash * 59 + this.ACL.GetHashCode();
                
                if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                
                if (this.Size != null)
                    hash = hash * 59 + this.Size.GetHashCode();
                
                if (this.Url != null)
                    hash = hash * 59 + this.Url.GetHashCode();
                
                if (this.Expires != null)
                    hash = hash * 59 + this.Expires.GetHashCode();
                
                if (this.ContentType != null)
                    hash = hash * 59 + this.ContentType.GetHashCode();
                
                return hash;
            }
        }

    }
}
