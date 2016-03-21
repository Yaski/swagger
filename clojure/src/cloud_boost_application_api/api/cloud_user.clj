(ns cloud-boost-application-api.api.cloud-user
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn add-to-role-with-http-info
  "add a user to a role
  "
  [app-id body ]
  (call-api "user/{app_id}/addToRole" :put
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn add-to-role
  "add a user to a role
  "
  [app-id body ]
  (:data (add-to-role-with-http-info app-id body)))

(defn change-password-with-http-info
  "change a password
  changes the password for a logged in user without logging them out"
  [app-id body ]
  (call-api "user/{app_id}/changePassword" :put
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn change-password
  "change a password
  changes the password for a logged in user without logging them out"
  [app-id body ]
  (:data (change-password-with-http-info app-id body)))

(defn login-with-http-info
  "login existing user
  "
  [app-id body ]
  (call-api "user/{app_id}/login" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn login
  "login existing user
  "
  [app-id body ]
  (:data (login-with-http-info app-id body)))

(defn logout-with-http-info
  "logout user
  "
  [app-id body ]
  (call-api "user/{app_id}/logout" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn logout
  "logout user
  "
  [app-id body ]
  (:data (logout-with-http-info app-id body)))

(defn remove-from-role-with-http-info
  "remove a user from a role
  "
  [app-id body ]
  (call-api "user/{app_id}/removeFromRole" :put
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn remove-from-role
  "remove a user from a role
  "
  [app-id body ]
  (:data (remove-from-role-with-http-info app-id body)))

(defn reset-password-with-http-info
  "reset a password
  sends a password reset link to the given email"
  [app-id body ]
  (call-api "user/{app_id}/resetPassword" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn reset-password
  "reset a password
  sends a password reset link to the given email"
  [app-id body ]
  (:data (reset-password-with-http-info app-id body)))

(defn sign-up-with-http-info
  "create a new user
  "
  [app-id body ]
  (call-api "user/{app_id}/signup" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn sign-up
  "create a new user
  "
  [app-id body ]
  (:data (sign-up-with-http-info app-id body)))
