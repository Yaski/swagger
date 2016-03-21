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
    public partial class QueueMessage :  IEquatable<QueueMessage>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="QueueMessage" /> class.
        /// Initializes a new instance of the <see cref="QueueMessage" />class.
        /// </summary>
        /// <param name="ACL">ACL.</param>
        /// <param name="Type">Type (default to &quot;queue-message&quot;).</param>
        /// <param name="Expires">Expires.</param>
        /// <param name="Id">Id.</param>
        /// <param name="Delay">Delay.</param>
        /// <param name="Timeout">Timeout (default to 1800).</param>
        /// <param name="ModifiedColumns">ModifiedColumns.</param>
        /// <param name="IsModified">IsModified (default to true).</param>
        /// <param name="Message">Message.</param>

        public QueueMessage(ACL ACL = null, string Type = null, DateTime? Expires = null, string Id = null, DateTime? Delay = null, long? Timeout = null, List<string> ModifiedColumns = null, bool? IsModified = null, string Message = null)
        {
            this.ACL = ACL;
            // use default value if no "Type" provided
            if (Type == null)
            {
                this.Type = "queue-message";
            }
            else
            {
                this.Type = Type;
            }
            this.Expires = Expires;
            this.Id = Id;
            this.Delay = Delay;
            // use default value if no "Timeout" provided
            if (Timeout == null)
            {
                this.Timeout = 1800;
            }
            else
            {
                this.Timeout = Timeout;
            }
            this.ModifiedColumns = ModifiedColumns;
            // use default value if no "IsModified" provided
            if (IsModified == null)
            {
                this.IsModified = true;
            }
            else
            {
                this.IsModified = IsModified;
            }
            this.Message = Message;
            
        }
        
    
        /// <summary>
        /// Gets or Sets ACL
        /// </summary>
        [DataMember(Name="ACL", EmitDefaultValue=false)]
        public ACL ACL { get; set; }
    
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="_type", EmitDefaultValue=false)]
        public string Type { get; set; }
    
        /// <summary>
        /// Gets or Sets Expires
        /// </summary>
        [DataMember(Name="expires", EmitDefaultValue=false)]
        public DateTime? Expires { get; set; }
    
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="_id", EmitDefaultValue=false)]
        public string Id { get; set; }
    
        /// <summary>
        /// Gets or Sets Delay
        /// </summary>
        [DataMember(Name="delay", EmitDefaultValue=false)]
        public DateTime? Delay { get; set; }
    
        /// <summary>
        /// Gets or Sets Timeout
        /// </summary>
        [DataMember(Name="timeout", EmitDefaultValue=false)]
        public long? Timeout { get; set; }
    
        /// <summary>
        /// Gets or Sets ModifiedColumns
        /// </summary>
        [DataMember(Name="_modifiedColumns", EmitDefaultValue=false)]
        public List<string> ModifiedColumns { get; set; }
    
        /// <summary>
        /// Gets or Sets IsModified
        /// </summary>
        [DataMember(Name="_isModified", EmitDefaultValue=false)]
        public bool? IsModified { get; set; }
    
        /// <summary>
        /// Gets or Sets Message
        /// </summary>
        [DataMember(Name="message", EmitDefaultValue=false)]
        public string Message { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QueueMessage {\n");
            sb.Append("  ACL: ").Append(ACL).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Expires: ").Append(Expires).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Delay: ").Append(Delay).Append("\n");
            sb.Append("  Timeout: ").Append(Timeout).Append("\n");
            sb.Append("  ModifiedColumns: ").Append(ModifiedColumns).Append("\n");
            sb.Append("  IsModified: ").Append(IsModified).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            
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
            return this.Equals(obj as QueueMessage);
        }

        /// <summary>
        /// Returns true if QueueMessage instances are equal
        /// </summary>
        /// <param name="other">Instance of QueueMessage to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(QueueMessage other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.ACL == other.ACL ||
                    this.ACL != null &&
                    this.ACL.Equals(other.ACL)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.Expires == other.Expires ||
                    this.Expires != null &&
                    this.Expires.Equals(other.Expires)
                ) && 
                (
                    this.Id == other.Id ||
                    this.Id != null &&
                    this.Id.Equals(other.Id)
                ) && 
                (
                    this.Delay == other.Delay ||
                    this.Delay != null &&
                    this.Delay.Equals(other.Delay)
                ) && 
                (
                    this.Timeout == other.Timeout ||
                    this.Timeout != null &&
                    this.Timeout.Equals(other.Timeout)
                ) && 
                (
                    this.ModifiedColumns == other.ModifiedColumns ||
                    this.ModifiedColumns != null &&
                    this.ModifiedColumns.SequenceEqual(other.ModifiedColumns)
                ) && 
                (
                    this.IsModified == other.IsModified ||
                    this.IsModified != null &&
                    this.IsModified.Equals(other.IsModified)
                ) && 
                (
                    this.Message == other.Message ||
                    this.Message != null &&
                    this.Message.Equals(other.Message)
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
                
                if (this.ACL != null)
                    hash = hash * 59 + this.ACL.GetHashCode();
                
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                
                if (this.Expires != null)
                    hash = hash * 59 + this.Expires.GetHashCode();
                
                if (this.Id != null)
                    hash = hash * 59 + this.Id.GetHashCode();
                
                if (this.Delay != null)
                    hash = hash * 59 + this.Delay.GetHashCode();
                
                if (this.Timeout != null)
                    hash = hash * 59 + this.Timeout.GetHashCode();
                
                if (this.ModifiedColumns != null)
                    hash = hash * 59 + this.ModifiedColumns.GetHashCode();
                
                if (this.IsModified != null)
                    hash = hash * 59 + this.IsModified.GetHashCode();
                
                if (this.Message != null)
                    hash = hash * 59 + this.Message.GetHashCode();
                
                return hash;
            }
        }

    }
}
