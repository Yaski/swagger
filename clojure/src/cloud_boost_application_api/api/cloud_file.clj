(ns cloud-boost-application-api.api.cloud-file
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn delete-file-with-http-info
  "deletes file
  "
  ([app-id file-id ] (delete-file-with-http-info app-id file-id nil))
  ([app-id file-id {:keys [body ]}]
   (call-api "file/{app_id}/{file_id}" :delete
             {:path-params   {"app_id" app-id "file_id" file-id }
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    body
              :content-types ["application/json"]
              :accepts       ["application/json"]
              :auth-names    []})))

(defn delete-file
  "deletes file
  "
  ([app-id file-id ] (delete-file app-id file-id nil))
  ([app-id file-id optional-params]
   (:data (delete-file-with-http-info app-id file-id optional-params))))

(defn fetch-file-content-with-http-info
  "fetch file content
  "
  ([app-id file-id ] (fetch-file-content-with-http-info app-id file-id nil))
  ([app-id file-id {:keys [body ]}]
   (call-api "file/{app_id}/{file_id}" :post
             {:path-params   {"app_id" app-id "file_id" file-id }
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    body
              :content-types ["application/json"]
              :accepts       ["application/json" "application/octet-stream"]
              :auth-names    []})))

(defn fetch-file-content
  "fetch file content
  "
  ([app-id file-id ] (fetch-file-content app-id file-id nil))
  ([app-id file-id optional-params]
   (:data (fetch-file-content-with-http-info app-id file-id optional-params))))

(defn save-file-with-http-info
  "uploads a file
  "
  ([app-id file-obj ] (save-file-with-http-info app-id file-obj nil))
  ([app-id file-obj {:keys [key ^File file-to-upload ]}]
   (call-api "file/{app_id}" :post
             {:path-params   {"app_id" app-id }
              :header-params {}
              :query-params  {}
              :form-params   {"key" key "fileObj" file-obj "fileToUpload" file-to-upload }
              :content-types ["multipart/form-data"]
              :accepts       ["application/json"]
              :auth-names    []})))

(defn save-file
  "uploads a file
  "
  ([app-id file-obj ] (save-file app-id file-obj nil))
  ([app-id file-obj optional-params]
   (:data (save-file-with-http-info app-id file-obj optional-params))))

(defn save-file-data-with-http-info
  "uploads a file with data
  "
  [my-app-id file-obj ]
  (call-api "file/{my_app_id}" :post
            {:path-params   {"my_app_id" my-app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    file-obj
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn save-file-data
  "uploads a file with data
  "
  [my-app-id file-obj ]
  (:data (save-file-data-with-http-info my-app-id file-obj)))
