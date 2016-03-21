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
    public partial class FileBody :  IEquatable<FileBody>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="FileBody" /> class.
        /// Initializes a new instance of the <see cref="FileBody" />class.
        /// </summary>
        /// <param name="Key">Key.</param>
        /// <param name="Data">Data.</param>
        /// <param name="FileObj">FileObj.</param>

        public FileBody(string Key = null, string Data = null, CloudFile FileObj = null)
        {
            this.Key = Key;
            this.Data = Data;
            this.FileObj = FileObj;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Key
        /// </summary>
        [DataMember(Name="key", EmitDefaultValue=false)]
        public string Key { get; set; }
    
        /// <summary>
        /// Gets or Sets Data
        /// </summary>
        [DataMember(Name="data", EmitDefaultValue=false)]
        public string Data { get; set; }
    
        /// <summary>
        /// Gets or Sets FileObj
        /// </summary>
        [DataMember(Name="fileObj", EmitDefaultValue=false)]
        public CloudFile FileObj { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class FileBody {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  FileObj: ").Append(FileObj).Append("\n");
            
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
            return this.Equals(obj as FileBody);
        }

        /// <summary>
        /// Returns true if FileBody instances are equal
        /// </summary>
        /// <param name="other">Instance of FileBody to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(FileBody other)
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
                    this.Data == other.Data ||
                    this.Data != null &&
                    this.Data.Equals(other.Data)
                ) && 
                (
                    this.FileObj == other.FileObj ||
                    this.FileObj != null &&
                    this.FileObj.Equals(other.FileObj)
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
                
                if (this.Data != null)
                    hash = hash * 59 + this.Data.GetHashCode();
                
                if (this.FileObj != null)
                    hash = hash * 59 + this.FileObj.GetHashCode();
                
                return hash;
            }
        }

    }
}
