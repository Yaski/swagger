(ns cloud-boost-application-api.api.cloud-search
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn search-with-http-info
  "search for cloudobjects following the criteria defined herein
  "
  [app-id table-name body ]
  (call-api "data/{app_id}/{table_name}/search" :post
            {:path-params   {"app_id" app-id "table_name" table-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn search
  "search for cloudobjects following the criteria defined herein
  "
  [app-id table-name body ]
  (:data (search-with-http-info app-id table-name body)))
