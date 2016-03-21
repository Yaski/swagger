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
    public partial class Queue :  IEquatable<Queue>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="Queue" /> class.
        /// Initializes a new instance of the <see cref="Queue" />class.
        /// </summary>
        /// <param name="Id">Id.</param>
        /// <param name="TableName">TableName (default to &quot;_Queue&quot;).</param>
        /// <param name="CreatedAt">CreatedAt.</param>
        /// <param name="UpdatedAt">UpdatedAt.</param>
        /// <param name="ACL">ACL.</param>
        /// <param name="Type">Type (default to &quot;queue&quot;).</param>
        /// <param name="Expires">Expires.</param>
        /// <param name="QueueType">QueueType (default to &quot;pull&quot;).</param>
        /// <param name="Retry">Retry.</param>
        /// <param name="Name">Name.</param>
        /// <param name="Subscribers">Subscribers.</param>
        /// <param name="Messages">Messages.</param>

        public Queue(string Id = null, string TableName = null, DateTime? CreatedAt = null, DateTime? UpdatedAt = null, ACL ACL = null, string Type = null, DateTime? Expires = null, string QueueType = null, string Retry = null, string Name = null, List<string> Subscribers = null, List<QueueMessage> Messages = null)
        {
            this.Id = Id;
            // use default value if no "TableName" provided
            if (TableName == null)
            {
                this.TableName = "_Queue";
            }
            else
            {
                this.TableName = TableName;
            }
            this.CreatedAt = CreatedAt;
            this.UpdatedAt = UpdatedAt;
            this.ACL = ACL;
            // use default value if no "Type" provided
            if (Type == null)
            {
                this.Type = "queue";
            }
            else
            {
                this.Type = Type;
            }
            this.Expires = Expires;
            // use default value if no "QueueType" provided
            if (QueueType == null)
            {
                this.QueueType = "pull";
            }
            else
            {
                this.QueueType = QueueType;
            }
            this.Retry = Retry;
            this.Name = Name;
            this.Subscribers = Subscribers;
            this.Messages = Messages;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="_id", EmitDefaultValue=false)]
        public string Id { get; set; }
    
        /// <summary>
        /// Gets or Sets TableName
        /// </summary>
        [DataMember(Name="_tableName", EmitDefaultValue=false)]
        public string TableName { get; set; }
    
        /// <summary>
        /// Gets or Sets CreatedAt
        /// </summary>
        [DataMember(Name="createdAt", EmitDefaultValue=false)]
        public DateTime? CreatedAt { get; set; }
    
        /// <summary>
        /// Gets or Sets UpdatedAt
        /// </summary>
        [DataMember(Name="updatedAt", EmitDefaultValue=false)]
        public DateTime? UpdatedAt { get; set; }
    
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
        /// Gets or Sets QueueType
        /// </summary>
        [DataMember(Name="queueType", EmitDefaultValue=false)]
        public string QueueType { get; set; }
    
        /// <summary>
        /// Gets or Sets Retry
        /// </summary>
        [DataMember(Name="retry", EmitDefaultValue=false)]
        public string Retry { get; set; }
    
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }
    
        /// <summary>
        /// Gets or Sets Subscribers
        /// </summary>
        [DataMember(Name="subscribers", EmitDefaultValue=false)]
        public List<string> Subscribers { get; set; }
    
        /// <summary>
        /// Gets or Sets Messages
        /// </summary>
        [DataMember(Name="messages", EmitDefaultValue=false)]
        public List<QueueMessage> Messages { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Queue {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  TableName: ").Append(TableName).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("  ACL: ").Append(ACL).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Expires: ").Append(Expires).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Retry: ").Append(Retry).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Subscribers: ").Append(Subscribers).Append("\n");
            sb.Append("  Messages: ").Append(Messages).Append("\n");
            
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
            return this.Equals(obj as Queue);
        }

        /// <summary>
        /// Returns true if Queue instances are equal
        /// </summary>
        /// <param name="other">Instance of Queue to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Queue other)
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
                    this.TableName == other.TableName ||
                    this.TableName != null &&
                    this.TableName.Equals(other.TableName)
                ) && 
                (
                    this.CreatedAt == other.CreatedAt ||
                    this.CreatedAt != null &&
                    this.CreatedAt.Equals(other.CreatedAt)
                ) && 
                (
                    this.UpdatedAt == other.UpdatedAt ||
                    this.UpdatedAt != null &&
                    this.UpdatedAt.Equals(other.UpdatedAt)
                ) && 
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
                    this.QueueType == other.QueueType ||
                    this.QueueType != null &&
                    this.QueueType.Equals(other.QueueType)
                ) && 
                (
                    this.Retry == other.Retry ||
                    this.Retry != null &&
                    this.Retry.Equals(other.Retry)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Subscribers == other.Subscribers ||
                    this.Subscribers != null &&
                    this.Subscribers.SequenceEqual(other.Subscribers)
                ) && 
                (
                    this.Messages == other.Messages ||
                    this.Messages != null &&
                    this.Messages.SequenceEqual(other.Messages)
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
                
                if (this.TableName != null)
                    hash = hash * 59 + this.TableName.GetHashCode();
                
                if (this.CreatedAt != null)
                    hash = hash * 59 + this.CreatedAt.GetHashCode();
                
                if (this.UpdatedAt != null)
                    hash = hash * 59 + this.UpdatedAt.GetHashCode();
                
                if (this.ACL != null)
                    hash = hash * 59 + this.ACL.GetHashCode();
                
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                
                if (this.Expires != null)
                    hash = hash * 59 + this.Expires.GetHashCode();
                
                if (this.QueueType != null)
                    hash = hash * 59 + this.QueueType.GetHashCode();
                
                if (this.Retry != null)
                    hash = hash * 59 + this.Retry.GetHashCode();
                
                if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                
                if (this.Subscribers != null)
                    hash = hash * 59 + this.Subscribers.GetHashCode();
                
                if (this.Messages != null)
                    hash = hash * 59 + this.Messages.GetHashCode();
                
                return hash;
            }
        }

    }
}
