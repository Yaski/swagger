(ns cloud-boost-application-api.api.cloud-object
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn delete-with-http-info
  "deletes a cloud object from cloudapp
  deletes a cloud object from cloudapp"
  [app-id table-name body ]
  (call-api "data/{app_id}/{table_name}" :delete
            {:path-params   {"app_id" app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete
  "deletes a cloud object from cloudapp
  deletes a cloud object from cloudapp"
  [app-id table-name body ]
  (:data (delete-with-http-info app-id table-name body)))

(defn save-with-http-info
  "saves a cloud object to cloudboost
  "
  [app-id table-name body ]
  (call-api "data/{app_id}/{table_name}" :put
            {:path-params   {"app_id" app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn save
  "saves a cloud object to cloudboost
  "
  [app-id table-name body ]
  (:data (save-with-http-info app-id table-name body)))
