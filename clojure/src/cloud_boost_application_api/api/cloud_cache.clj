(ns cloud-boost-application-api.api.cloud-cache
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn clear-cache-with-http-info
  "clear all items from a cloud cache
  clear all items from a cloud cache"
  [app-id cache-name body ]
  (call-api "cache/{app_id}/{cache_name}/clear" :delete
            {:path-params   {"app_id" app-id "cache_name" cache-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn clear-cache
  "clear all items from a cloud cache
  clear all items from a cloud cache"
  [app-id cache-name body ]
  (:data (clear-cache-with-http-info app-id cache-name body)))

(defn create-cache-with-http-info
  "create a cloud cache
  create a cloud cache"
  [app-id cache-name body ]
  (call-api "cache/{app_id}/{cache_name}/create" :post
            {:path-params   {"app_id" app-id "cache_name" cache-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn create-cache
  "create a cloud cache
  create a cloud cache"
  [app-id cache-name body ]
  (:data (create-cache-with-http-info app-id cache-name body)))

(defn delete-all-cache-with-http-info
  "delete all CloudCaches
  delete all CloudCaches"
  [app-id body ]
  (call-api "cache/{app_id}" :delete
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete-all-cache
  "delete all CloudCaches
  delete all CloudCaches"
  [app-id body ]
  (:data (delete-all-cache-with-http-info app-id body)))

(defn delete-cache-with-http-info
  "delete a CloudCache
  delete a CloudCache"
  [app-id cache-name body ]
  (call-api "cache/{app_id}/{cache_name}" :delete
            {:path-params   {"app_id" app-id "cache_name" cache-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete-cache
  "delete a CloudCache
  delete a CloudCache"
  [app-id cache-name body ]
  (:data (delete-cache-with-http-info app-id cache-name body)))

(defn delete-item-with-http-info
  "delete item from a cloud cache
  delete item from a cloud cache"
  [app-id cache-name data-key body ]
  (call-api "cache/{app_id}/{cache_name}/item/{data_key}" :delete
            {:path-params   {"app_id" app-id "cache_name" cache-name "data_key" data-key }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete-item
  "delete item from a cloud cache
  delete item from a cloud cache"
  [app-id cache-name data-key body ]
  (:data (delete-item-with-http-info app-id cache-name data-key body)))

(defn get-all-cache-with-http-info
  "get all CloudCaches
  get all CloudCaches"
  [app-id body ]
  (call-api "cache/{app_id}" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-all-cache
  "get all CloudCaches
  get all CloudCaches"
  [app-id body ]
  (:data (get-all-cache-with-http-info app-id body)))

(defn get-all-items-with-http-info
  "get all items from a cloud cache
  get all items from a cloud cache"
  [app-id cache-name body ]
  (call-api "cache/{app_id}/{cache_name}/items" :post
            {:path-params   {"app_id" app-id "cache_name" cache-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-all-items
  "get all items from a cloud cache
  get all items from a cloud cache"
  [app-id cache-name body ]
  (:data (get-all-items-with-http-info app-id cache-name body)))

(defn get-cache-info-with-http-info
  "get info about a CloudCache
  get info about a CloudCache"
  [app-id cache-name body ]
  (call-api "cache/{app_id}/{cache_name}" :post
            {:path-params   {"app_id" app-id "cache_name" cache-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-cache-info
  "get info about a CloudCache
  get info about a CloudCache"
  [app-id cache-name body ]
  (:data (get-cache-info-with-http-info app-id cache-name body)))

(defn get-item-with-http-info
  "get item from a cloud cache
  get item from a cloud cache"
  [app-id cache-name data-key body ]
  (call-api "cache/{app_id}/{cache_name}/{data_key}/item" :post
            {:path-params   {"app_id" app-id "cache_name" cache-name "data_key" data-key }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-item
  "get item from a cloud cache
  get item from a cloud cache"
  [app-id cache-name data-key body ]
  (:data (get-item-with-http-info app-id cache-name data-key body)))

(defn get-items-count-with-http-info
  "count items in a cloud cache
  count items in a cloud cache"
  [app-id cache-name body ]
  (call-api "cache/{app_id}/{cache_name}/items/count" :post
            {:path-params   {"app_id" app-id "cache_name" cache-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-items-count
  "count items in a cloud cache
  count items in a cloud cache"
  [app-id cache-name body ]
  (:data (get-items-count-with-http-info app-id cache-name body)))

(defn set-with-http-info
  "add item to a cloud cache
  add item to a cloud cache"
  [app-id cache-name data-key body ]
  (call-api "cache/{app_id}/{cache_name}/{data_key}" :put
            {:path-params   {"app_id" app-id "cache_name" cache-name "data_key" data-key }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json" "text/plain;charset=utf-8"]
             :auth-names    []}))

(defn set
  "add item to a cloud cache
  add item to a cloud cache"
  [app-id cache-name data-key body ]
  (:data (set-with-http-info app-id cache-name data-key body)))
