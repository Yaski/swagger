//
// CloudQueryFindById.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class CloudQueryFindById: JSONEncodable {

    public var key: String?
    public var skip: Int?
    public var limit: Int?
    public var query: CloudQueryId?
    public var sort: AnyObject?
    public var select: AnyObject?
    

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["key"] = self.key
        nillableDictionary["skip"] = self.skip
        nillableDictionary["limit"] = self.limit
        nillableDictionary["query"] = self.query?.encodeToJSON()
        nillableDictionary["sort"] = self.sort
        nillableDictionary["select"] = self.select
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
