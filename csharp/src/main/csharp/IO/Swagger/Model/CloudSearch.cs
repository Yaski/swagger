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
    public partial class CloudSearch :  IEquatable<CloudSearch>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="CloudSearch" /> class.
        /// Initializes a new instance of the <see cref="CloudSearch" />class.
        /// </summary>
        /// <param name="Query">Query.</param>
        /// <param name="Sort">Sort.</param>
        /// <param name="CollectionName">CollectionName (default to &quot;table_name_here&quot;).</param>
        /// <param name="Key">Key.</param>
        /// <param name="Skip">Skip.</param>
        /// <param name="Limit">Limit.</param>

        public CloudSearch(FilterBody Query = null, List<string> Sort = null, string CollectionName = null, string Key = null, int? Skip = null, int? Limit = null)
        {
            this.Query = Query;
            this.Sort = Sort;
            // use default value if no "CollectionName" provided
            if (CollectionName == null)
            {
                this.CollectionName = "table_name_here";
            }
            else
            {
                this.CollectionName = CollectionName;
            }
            this.Key = Key;
            this.Skip = Skip;
            this.Limit = Limit;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Query
        /// </summary>
        [DataMember(Name="query", EmitDefaultValue=false)]
        public FilterBody Query { get; set; }
    
        /// <summary>
        /// Gets or Sets Sort
        /// </summary>
        [DataMember(Name="sort", EmitDefaultValue=false)]
        public List<string> Sort { get; set; }
    
        /// <summary>
        /// Gets or Sets CollectionName
        /// </summary>
        [DataMember(Name="collectionName", EmitDefaultValue=false)]
        public string CollectionName { get; set; }
    
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
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CloudSearch {\n");
            sb.Append("  Query: ").Append(Query).Append("\n");
            sb.Append("  Sort: ").Append(Sort).Append("\n");
            sb.Append("  CollectionName: ").Append(CollectionName).Append("\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Skip: ").Append(Skip).Append("\n");
            sb.Append("  Limit: ").Append(Limit).Append("\n");
            
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
            return this.Equals(obj as CloudSearch);
        }

        /// <summary>
        /// Returns true if CloudSearch instances are equal
        /// </summary>
        /// <param name="other">Instance of CloudSearch to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CloudSearch other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Query == other.Query ||
                    this.Query != null &&
                    this.Query.Equals(other.Query)
                ) && 
                (
                    this.Sort == other.Sort ||
                    this.Sort != null &&
                    this.Sort.SequenceEqual(other.Sort)
                ) && 
                (
                    this.CollectionName == other.CollectionName ||
                    this.CollectionName != null &&
                    this.CollectionName.Equals(other.CollectionName)
                ) && 
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
                
                if (this.Query != null)
                    hash = hash * 59 + this.Query.GetHashCode();
                
                if (this.Sort != null)
                    hash = hash * 59 + this.Sort.GetHashCode();
                
                if (this.CollectionName != null)
                    hash = hash * 59 + this.CollectionName.GetHashCode();
                
                if (this.Key != null)
                    hash = hash * 59 + this.Key.GetHashCode();
                
                if (this.Skip != null)
                    hash = hash * 59 + this.Skip.GetHashCode();
                
                if (this.Limit != null)
                    hash = hash * 59 + this.Limit.GetHashCode();
                
                return hash;
            }
        }

    }
}
