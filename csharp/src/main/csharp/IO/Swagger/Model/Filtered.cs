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
    public partial class Filtered :  IEquatable<Filtered>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="Filtered" /> class.
        /// Initializes a new instance of the <see cref="Filtered" />class.
        /// </summary>
        /// <param name="Query">Query.</param>
        /// <param name="Filter">Filter.</param>

        public Filtered(BoolQuery Query = null, BoolFilter Filter = null)
        {
            this.Query = Query;
            this.Filter = Filter;
            
        }
        
    
        /// <summary>
        /// Gets or Sets Query
        /// </summary>
        [DataMember(Name="query", EmitDefaultValue=false)]
        public BoolQuery Query { get; set; }
    
        /// <summary>
        /// Gets or Sets Filter
        /// </summary>
        [DataMember(Name="filter", EmitDefaultValue=false)]
        public BoolFilter Filter { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Filtered {\n");
            sb.Append("  Query: ").Append(Query).Append("\n");
            sb.Append("  Filter: ").Append(Filter).Append("\n");
            
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
            return this.Equals(obj as Filtered);
        }

        /// <summary>
        /// Returns true if Filtered instances are equal
        /// </summary>
        /// <param name="other">Instance of Filtered to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Filtered other)
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
                    this.Filter == other.Filter ||
                    this.Filter != null &&
                    this.Filter.Equals(other.Filter)
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
                
                if (this.Filter != null)
                    hash = hash * 59 + this.Filter.GetHashCode();
                
                return hash;
            }
        }

    }
}
