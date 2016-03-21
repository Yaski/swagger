(ns cloud-boost-application-api.api.cloud-table
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn delete-table-with-http-info
  "
  delete a cloud table"
  [table-name app-id body ]
  (call-api "app/{app_id}/{table_name}" :delete
            {:path-params   {"table_name" table-name "app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete-table
  "
  delete a cloud table"
  [table-name app-id body ]
  (:data (delete-table-with-http-info table-name app-id body)))

(defn get-with-http-info
  "
  get a table"
  [table-name app-id body ]
  (call-api "app/{app_id}/{table_name}" :post
            {:path-params   {"table_name" table-name "app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get
  "
  get a table"
  [table-name app-id body ]
  (:data (get-with-http-info table-name app-id body)))

(defn get-all-with-http-info
  "
  get all tables in app"
  [app-id body ]
  (call-api "/app/{app_id}/_getAll" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-all
  "
  get all tables in app"
  [app-id body ]
  (:data (get-all-with-http-info app-id body)))

(defn save-with-http-info
  "
  save a cloud table"
  [table-name app-id body ]
  (call-api "app/{app_id}/{table_name}" :put
            {:path-params   {"table_name" table-name "app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn save
  "
  save a cloud table"
  [table-name app-id body ]
  (:data (save-with-http-info table-name app-id body)))
