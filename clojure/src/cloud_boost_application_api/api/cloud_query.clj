(ns cloud-boost-application-api.api.cloud-query
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn count-with-http-info
  "count items in a table that match this query criteria
  count items in a table that match this query criteria"
  [app-id table-name body ]
  (call-api "data/{app_id}/{table_name}/count" :post
            {:path-params   {"app_id" app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn count
  "count items in a table that match this query criteria
  count items in a table that match this query criteria"
  [app-id table-name body ]
  (:data (count-with-http-info app-id table-name body)))

(defn distinct-with-http-info
  "distinct query criteria
  "
  [app-id table-name body ]
  (call-api "data/{app_id}/{table_name}/distinct" :post
            {:path-params   {"app_id" app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn distinct
  "distinct query criteria
  "
  [app-id table-name body ]
  (:data (distinct-with-http-info app-id table-name body)))

(defn find-with-http-info
  "find CloudObject meeting this query criteria
  "
  [app-id table-name body ]
  (call-api "data/{app_id}/{table_name}/find" :post
            {:path-params   {"app_id" app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn find
  "find CloudObject meeting this query criteria
  "
  [app-id table-name body ]
  (:data (find-with-http-info app-id table-name body)))

(defn find-by-id-with-http-info
  "find CloudObject with specific _id
  "
  [cloud-app-id table-name body ]
  (call-api "data/{cloud_app_id}/{table_name}/find" :post
            {:path-params   {"cloud_app_id" cloud-app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn find-by-id
  "find CloudObject with specific _id
  "
  [cloud-app-id table-name body ]
  (:data (find-by-id-with-http-info cloud-app-id table-name body)))

(defn find-one-with-http-info
  "find a single CloudObject
  "
  [app-id table-name body ]
  (call-api "data/{app_id}/{table_name}/findOne" :post
            {:path-params   {"app_id" app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn find-one
  "find a single CloudObject
  "
  [app-id table-name body ]
  (:data (find-one-with-http-info app-id table-name body)))
