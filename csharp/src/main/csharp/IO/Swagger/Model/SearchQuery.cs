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
    public partial class SearchQuery :  IEquatable<SearchQuery>
    { 
    
        /// <summary>
        /// Initializes a new instance of the <see cref="SearchQuery" /> class.
        /// Initializes a new instance of the <see cref="SearchQuery" />class.
        /// </summary>
        /// <param name="MustNot">MustNot.</param>
        /// <param name="Should">Should.</param>
        /// <param name="Must">Must.</param>

        public SearchQuery(List<string> MustNot = null, List<string> Should = null, List<string> Must = null)
        {
            this.MustNot = MustNot;
            this.Should = Should;
            this.Must = Must;
            
        }
        
    
        /// <summary>
        /// Gets or Sets MustNot
        /// </summary>
        [DataMember(Name="must_not", EmitDefaultValue=false)]
        public List<string> MustNot { get; set; }
    
        /// <summary>
        /// Gets or Sets Should
        /// </summary>
        [DataMember(Name="should", EmitDefaultValue=false)]
        public List<string> Should { get; set; }
    
        /// <summary>
        /// Gets or Sets Must
        /// </summary>
        [DataMember(Name="must", EmitDefaultValue=false)]
        public List<string> Must { get; set; }
    
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SearchQuery {\n");
            sb.Append("  MustNot: ").Append(MustNot).Append("\n");
            sb.Append("  Should: ").Append(Should).Append("\n");
            sb.Append("  Must: ").Append(Must).Append("\n");
            
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
            return this.Equals(obj as SearchQuery);
        }

        /// <summary>
        /// Returns true if SearchQuery instances are equal
        /// </summary>
        /// <param name="other">Instance of SearchQuery to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SearchQuery other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.MustNot == other.MustNot ||
                    this.MustNot != null &&
                    this.MustNot.SequenceEqual(other.MustNot)
                ) && 
                (
                    this.Should == other.Should ||
                    this.Should != null &&
                    this.Should.SequenceEqual(other.Should)
                ) && 
                (
                    this.Must == other.Must ||
                    this.Must != null &&
                    this.Must.SequenceEqual(other.Must)
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
                
                if (this.MustNot != null)
                    hash = hash * 59 + this.MustNot.GetHashCode();
                
                if (this.Should != null)
                    hash = hash * 59 + this.Should.GetHashCode();
                
                if (this.Must != null)
                    hash = hash * 59 + this.Must.GetHashCode();
                
                return hash;
            }
        }

    }
}
