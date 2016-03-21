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
    public partial class CloudTable :  IEquatable<CloudTable>
    { 
    
        [JsonConverter(typeof(StringEnumConverter))]
        public enum TypeEnum {
            
            [EnumMember(Value = "user")]
            User,
            
            [EnumMember(Value = "role")]
            Role,
            
            [EnumMember(Value = "custom")]
            Custom
        }
    
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public TypeEnum? Type { get; set; }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudTable" /> class.
        /// Initializes a new instance of the <see cref="CloudTable" />class.
        /// </summary>
        /// <param name="Name">Name (default to &quot;table_name&quot;).</param>
        /// <param name="AppId">AppId (default to &quot;app_id&quot;).</param>
        /// <param name="Type">Type (default to TypeEnum.Custom).</param>
        /// <param name="Columns">Columns.</param>

        public CloudTable(string Name = null, string AppId = null, TypeEnum? Type = null, List<Column> Columns = null)
        {
            // use default value if no "Name" provided
            if (Name == null)
            {
                this.Name = "table_name";
            }
            else
            {
                this.Name = Name;
            }
            // use default value if no "AppId" provided
            if (AppId == null)
            {
                this.AppId = "app_id";
            }
            else
            {
                this.AppId = AppId;
            }
            // use default value if no "Type" provided
            if (Type == null)
            {
                this.Type = TypeEnum.Custom;
            }
            else
            {
                this.Type = Type;
            }
            this.Columns = Columns;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }
    
        /// <summary>
        /// Gets or Sets AppId
        /// </summary>
        [DataMember(Name="appId", EmitDefaultValue=false)]
        public string AppId { get; set; }
    
        /// <summary>
        /// Gets or Sets Columns
        /// </summary>
        [DataMember(Name="columns", EmitDefaultValue=false)]
        public List<Column> Columns { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CloudTable {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  AppId: ").Append(AppId).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Columns: ").Append(Columns).Append("\n");
            
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
            return this.Equals(obj as CloudTable);
        }

        /// <summary>
        /// Returns true if CloudTable instances are equal
        /// </summary>
        /// <param name="other">Instance of CloudTable to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CloudTable other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.AppId == other.AppId ||
                    this.AppId != null &&
                    this.AppId.Equals(other.AppId)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.Columns == other.Columns ||
                    this.Columns != null &&
                    this.Columns.SequenceEqual(other.Columns)
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
                
                if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                
                if (this.AppId != null)
                    hash = hash * 59 + this.AppId.GetHashCode();
                
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                
                if (this.Columns != null)
                    hash = hash * 59 + this.Columns.GetHashCode();
                
                return hash;
            }
        }

    }
}
