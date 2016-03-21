(ns cloud-boost-application-api.api.cloud-role
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn create-role-with-http-info
  "create a new cloudrole
  "
  [app-id body ]
  (call-api "data/{app_id}/Role" :put
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn create-role
  "create a new cloudrole
  "
  [app-id body ]
  (:data (create-role-with-http-info app-id body)))
