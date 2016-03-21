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
    public partial class Column :  IEquatable<Column>
    { 
    
        [JsonConverter(typeof(StringEnumConverter))]
        public enum DataTypeEnum {
            
            [EnumMember(Value = "Text")]
            Text,
            
            [EnumMember(Value = "Email")]
            Email,
            
            [EnumMember(Value = "URL")]
            Url,
            
            [EnumMember(Value = "Number")]
            Number,
            
            [EnumMember(Value = "Boolean")]
            Boolean,
            
            [EnumMember(Value = "DateTime")]
            Datetime,
            
            [EnumMember(Value = "GeoPoint")]
            Geopoint,
            
            [EnumMember(Value = "File")]
            File,
            
            [EnumMember(Value = "List")]
            List,
            
            [EnumMember(Value = "Relation")]
            Relation,
            
            [EnumMember(Value = "Object")]
            Object,
            
            [EnumMember(Value = "Id")]
            Id,
            
            [EnumMember(Value = "EncryptedText")]
            Encryptedtext,
            
            [EnumMember(Value = "ACL")]
            Acl
        }
    
        /// <summary>
        /// Gets or Sets DataType
        /// </summary>
        [DataMember(Name="dataType", EmitDefaultValue=false)]
        public DataTypeEnum? DataType { get; set; }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="Column" /> class.
        /// Initializes a new instance of the <see cref="Column" />class.
        /// </summary>
        /// <param name="Name">Name (default to &quot;table_name&quot;).</param>
        /// <param name="DataType">DataType (default to DataTypeEnum.Text).</param>
        /// <param name="Type">Type (default to &quot;column&quot;).</param>
        /// <param name="Required">Required (default to false).</param>
        /// <param name="Unique">Unique (default to false).</param>
        /// <param name="RelatedTo">RelatedTo (default to &quot;null&quot;).</param>
        /// <param name="RelationType">RelationType (default to &quot;null&quot;).</param>
        /// <param name="IsDeletable">IsDeletable (default to true).</param>
        /// <param name="IsEditable">IsEditable (default to true).</param>
        /// <param name="IsRenamable">IsRenamable (default to false).</param>

        public Column(string Name = null, DataTypeEnum? DataType = null, string Type = null, bool? Required = null, bool? Unique = null, string RelatedTo = null, string RelationType = null, bool? IsDeletable = null, bool? IsEditable = null, bool? IsRenamable = null)
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
            // use default value if no "DataType" provided
            if (DataType == null)
            {
                this.DataType = DataTypeEnum.Text;
            }
            else
            {
                this.DataType = DataType;
            }
            // use default value if no "Type" provided
            if (Type == null)
            {
                this.Type = "column";
            }
            else
            {
                this.Type = Type;
            }
            // use default value if no "Required" provided
            if (Required == null)
            {
                this.Required = false;
            }
            else
            {
                this.Required = Required;
            }
            // use default value if no "Unique" provided
            if (Unique == null)
            {
                this.Unique = false;
            }
            else
            {
                this.Unique = Unique;
            }
            // use default value if no "RelatedTo" provided
            if (RelatedTo == null)
            {
                this.RelatedTo = "null";
            }
            else
            {
                this.RelatedTo = RelatedTo;
            }
            // use default value if no "RelationType" provided
            if (RelationType == null)
            {
                this.RelationType = "null";
            }
            else
            {
                this.RelationType = RelationType;
            }
            // use default value if no "IsDeletable" provided
            if (IsDeletable == null)
            {
                this.IsDeletable = true;
            }
            else
            {
                this.IsDeletable = IsDeletable;
            }
            // use default value if no "IsEditable" provided
            if (IsEditable == null)
            {
                this.IsEditable = true;
            }
            else
            {
                this.IsEditable = IsEditable;
            }
            // use default value if no "IsRenamable" provided
            if (IsRenamable == null)
            {
                this.IsRenamable = false;
            }
            else
            {
                this.IsRenamable = IsRenamable;
            }
            
        }
        
    
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }
    
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="_type", EmitDefaultValue=false)]
        public string Type { get; set; }
    
        /// <summary>
        /// Gets or Sets Required
        /// </summary>
        [DataMember(Name="required", EmitDefaultValue=false)]
        public bool? Required { get; set; }
    
        /// <summary>
        /// Gets or Sets Unique
        /// </summary>
        [DataMember(Name="unique", EmitDefaultValue=false)]
        public bool? Unique { get; set; }
    
        /// <summary>
        /// Gets or Sets RelatedTo
        /// </summary>
        [DataMember(Name="relatedTo", EmitDefaultValue=false)]
        public string RelatedTo { get; set; }
    
        /// <summary>
        /// Gets or Sets RelationType
        /// </summary>
        [DataMember(Name="relationType", EmitDefaultValue=false)]
        public string RelationType { get; set; }
    
        /// <summary>
        /// Gets or Sets IsDeletable
        /// </summary>
        [DataMember(Name="isDeletable", EmitDefaultValue=false)]
        public bool? IsDeletable { get; set; }
    
        /// <summary>
        /// Gets or Sets IsEditable
        /// </summary>
        [DataMember(Name="isEditable", EmitDefaultValue=false)]
        public bool? IsEditable { get; set; }
    
        /// <summary>
        /// Gets or Sets IsRenamable
        /// </summary>
        [DataMember(Name="isRenamable", EmitDefaultValue=false)]
        public bool? IsRenamable { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Column {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  DataType: ").Append(DataType).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Required: ").Append(Required).Append("\n");
            sb.Append("  Unique: ").Append(Unique).Append("\n");
            sb.Append("  RelatedTo: ").Append(RelatedTo).Append("\n");
            sb.Append("  RelationType: ").Append(RelationType).Append("\n");
            sb.Append("  IsDeletable: ").Append(IsDeletable).Append("\n");
            sb.Append("  IsEditable: ").Append(IsEditable).Append("\n");
            sb.Append("  IsRenamable: ").Append(IsRenamable).Append("\n");
            
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
            return this.Equals(obj as Column);
        }

        /// <summary>
        /// Returns true if Column instances are equal
        /// </summary>
        /// <param name="other">Instance of Column to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Column other)
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
                    this.DataType == other.DataType ||
                    this.DataType != null &&
                    this.DataType.Equals(other.DataType)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.Required == other.Required ||
                    this.Required != null &&
                    this.Required.Equals(other.Required)
                ) && 
                (
                    this.Unique == other.Unique ||
                    this.Unique != null &&
                    this.Unique.Equals(other.Unique)
                ) && 
                (
                    this.RelatedTo == other.RelatedTo ||
                    this.RelatedTo != null &&
                    this.RelatedTo.Equals(other.RelatedTo)
                ) && 
                (
                    this.RelationType == other.RelationType ||
                    this.RelationType != null &&
                    this.RelationType.Equals(other.RelationType)
                ) && 
                (
                    this.IsDeletable == other.IsDeletable ||
                    this.IsDeletable != null &&
                    this.IsDeletable.Equals(other.IsDeletable)
                ) && 
                (
                    this.IsEditable == other.IsEditable ||
                    this.IsEditable != null &&
                    this.IsEditable.Equals(other.IsEditable)
                ) && 
                (
                    this.IsRenamable == other.IsRenamable ||
                    this.IsRenamable != null &&
                    this.IsRenamable.Equals(other.IsRenamable)
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
                
                if (this.DataType != null)
                    hash = hash * 59 + this.DataType.GetHashCode();
                
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                
                if (this.Required != null)
                    hash = hash * 59 + this.Required.GetHashCode();
                
                if (this.Unique != null)
                    hash = hash * 59 + this.Unique.GetHashCode();
                
                if (this.RelatedTo != null)
                    hash = hash * 59 + this.RelatedTo.GetHashCode();
                
                if (this.RelationType != null)
                    hash = hash * 59 + this.RelationType.GetHashCode();
                
                if (this.IsDeletable != null)
                    hash = hash * 59 + this.IsDeletable.GetHashCode();
                
                if (this.IsEditable != null)
                    hash = hash * 59 + this.IsEditable.GetHashCode();
                
                if (this.IsRenamable != null)
                    hash = hash * 59 + this.IsRenamable.GetHashCode();
                
                return hash;
            }
        }

    }
}
