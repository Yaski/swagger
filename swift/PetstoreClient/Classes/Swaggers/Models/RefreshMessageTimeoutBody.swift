//
// RefreshMessageTimeoutBody.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class RefreshMessageTimeoutBody: JSONEncodable {

    public var timeout: Int?
    public var key: String?
    

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["timeout"] = self.timeout
        nillableDictionary["key"] = self.key
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}