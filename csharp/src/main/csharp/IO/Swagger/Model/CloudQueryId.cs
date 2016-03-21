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
    public partial class CloudQueryId : Query,  IEquatable<CloudQueryId>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudQueryId" /> class.
        /// Initializes a new instance of the <see cref="CloudQueryId" />class.
        /// </summary>
        /// <param name="IncludeList">IncludeList.</param>
        /// <param name="Include">Include.</param>
        /// <param name="Id">Id (default to &quot;uj79dm&quot;).</param>

        public CloudQueryId(List<string> IncludeList = null, List<string> Include = null, string Id = null)
        {
            this.IncludeList = IncludeList;
            this.Include = Include;
            // use default value if no "Id" provided
            if (Id == null)
            {
                this.Id = "uj79dm";
            }
            else
            {
                this.Id = Id;
            }
            
        }
        
    
        /// <summary>
        /// Gets or Sets IncludeList
        /// </summary>
        [DataMember(Name="$includeList", EmitDefaultValue=false)]
        public List<string> IncludeList { get; set; }
    
        /// <summary>
        /// Gets or Sets Include
        /// </summary>
        [DataMember(Name="$include", EmitDefaultValue=false)]
        public List<string> Include { get; set; }
    
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="_id", EmitDefaultValue=false)]
        public string Id { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CloudQueryId {\n");
            sb.Append("  IncludeList: ").Append(IncludeList).Append("\n");
            sb.Append("  Include: ").Append(Include).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public  new string ToJson()
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
            return this.Equals(obj as CloudQueryId);
        }

        /// <summary>
        /// Returns true if CloudQueryId instances are equal
        /// </summary>
        /// <param name="other">Instance of CloudQueryId to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CloudQueryId other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.IncludeList == other.IncludeList ||
                    this.IncludeList != null &&
                    this.IncludeList.SequenceEqual(other.IncludeList)
                ) && 
                (
                    this.Include == other.Include ||
                    this.Include != null &&
                    this.Include.SequenceEqual(other.Include)
                ) && 
                (
                    this.Id == other.Id ||
                    this.Id != null &&
                    this.Id.Equals(other.Id)
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
                
                if (this.IncludeList != null)
                    hash = hash * 59 + this.IncludeList.GetHashCode();
                
                if (this.Include != null)
                    hash = hash * 59 + this.Include.GetHashCode();
                
                if (this.Id != null)
                    hash = hash * 59 + this.Id.GetHashCode();
                
                return hash;
            }
        }

    }
}
