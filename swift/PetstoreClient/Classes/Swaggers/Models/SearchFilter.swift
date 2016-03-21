//
// SearchFilter.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class SearchFilter: JSONEncodable {

    public var mustNot: [String]?
    public var should: [String]?
    public var must: [String]?
    

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["must_not"] = self.mustNot?.encodeToJSON()
        nillableDictionary["should"] = self.should?.encodeToJSON()
        nillableDictionary["must"] = self.must?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
