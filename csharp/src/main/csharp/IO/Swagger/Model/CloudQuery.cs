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
    public partial class CloudQuery :  IEquatable<CloudQuery>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudQuery" /> class.
        /// Initializes a new instance of the <see cref="CloudQuery" />class.
        /// </summary>
        /// <param name="Key">Key.</param>
        /// <param name="Skip">Skip.</param>
        /// <param name="Limit">Limit.</param>
        /// <param name="Query">Query.</param>
        /// <param name="Sort">Sort.</param>
        /// <param name="Select">Select.</param>

        public CloudQuery(string Key = null, int? Skip = null, int? Limit = null, Query Query = null, Object Sort = null, Object Select = null)
        {
            this.Key = Key;
            this.Skip = Skip;
            this.Limit = Limit;
            this.Query = Query;
            this.Sort = Sort;
            this.Select = Select;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Key
        /// </summary>
        [DataMember(Name="key", EmitDefaultValue=false)]
        public string Key { get; set; }
    
        /// <summary>
        /// Gets or Sets Skip
        /// </summary>
        [DataMember(Name="skip", EmitDefaultValue=false)]
        public int? Skip { get; set; }
    
        /// <summary>
        /// Gets or Sets Limit
        /// </summary>
        [DataMember(Name="limit", EmitDefaultValue=false)]
        public int? Limit { get; set; }
    
        /// <summary>
        /// Gets or Sets Query
        /// </summary>
        [DataMember(Name="query", EmitDefaultValue=false)]
        public Query Query { get; set; }
    
        /// <summary>
        /// Gets or Sets Sort
        /// </summary>
        [DataMember(Name="sort", EmitDefaultValue=false)]
        public Object Sort { get; set; }
    
        /// <summary>
        /// Gets or Sets Select
        /// </summary>
        [DataMember(Name="select", EmitDefaultValue=false)]
        public Object Select { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CloudQuery {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Skip: ").Append(Skip).Append("\n");
            sb.Append("  Limit: ").Append(Limit).Append("\n");
            sb.Append("  Query: ").Append(Query).Append("\n");
            sb.Append("  Sort: ").Append(Sort).Append("\n");
            sb.Append("  Select: ").Append(Select).Append("\n");
            
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
            return this.Equals(obj as CloudQuery);
        }

        /// <summary>
        /// Returns true if CloudQuery instances are equal
        /// </summary>
        /// <param name="other">Instance of CloudQuery to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CloudQuery other)
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
                    this.Skip == other.Skip ||
                    this.Skip != null &&
                    this.Skip.Equals(other.Skip)
                ) && 
                (
                    this.Limit == other.Limit ||
                    this.Limit != null &&
                    this.Limit.Equals(other.Limit)
                ) && 
                (
                    this.Query == other.Query ||
                    this.Query != null &&
                    this.Query.Equals(other.Query)
                ) && 
                (
                    this.Sort == other.Sort ||
                    this.Sort != null &&
                    this.Sort.Equals(other.Sort)
                ) && 
                (
                    this.Select == other.Select ||
                    this.Select != null &&
                    this.Select.Equals(other.Select)
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
                
                if (this.Skip != null)
                    hash = hash * 59 + this.Skip.GetHashCode();
                
                if (this.Limit != null)
                    hash = hash * 59 + this.Limit.GetHashCode();
                
                if (this.Query != null)
                    hash = hash * 59 + this.Query.GetHashCode();
                
                if (this.Sort != null)
                    hash = hash * 59 + this.Sort.GetHashCode();
                
                if (this.Select != null)
                    hash = hash * 59 + this.Select.GetHashCode();
                
                return hash;
            }
        }

    }
}
