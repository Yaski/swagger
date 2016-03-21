(ns cloud-boost-application-api.api.cloud-queue
  (:require [cloud-boost-application-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn add-message-with-http-info
  "push message to queue
  add message message to queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/message" :put
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn add-message
  "push message to queue
  add message message to queue"
  [app-id queue-name body ]
  (:data (add-message-with-http-info app-id queue-name body)))

(defn add-subscriber-with-http-info
  "add a subscriber to this queue
  add a subscriber to this queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/subscriber" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn add-subscriber
  "add a subscriber to this queue
  add a subscriber to this queue"
  [app-id queue-name body ]
  (:data (add-subscriber-with-http-info app-id queue-name body)))

(defn clear-with-http-info
  "clear queue
  clear queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/clear" :delete
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn clear
  "clear queue
  clear queue"
  [app-id queue-name body ]
  (:data (clear-with-http-info app-id queue-name body)))

(defn create-queue-with-http-info
  "create a new queue
  add message message to queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/create" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn create-queue
  "create a new queue
  add message message to queue"
  [app-id queue-name body ]
  (:data (create-queue-with-http-info app-id queue-name body)))

(defn delete-message-with-http-info
  "delete a message in this queue
  delete a message in this queue"
  [app-id queue-name message-id body ]
  (call-api "queue/{app_id}/{queue_name}/message/{message_id}" :delete
            {:path-params   {"app_id" app-id "queue_name" queue-name "message_id" message-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete-message
  "delete a message in this queue
  delete a message in this queue"
  [app-id queue-name message-id body ]
  (:data (delete-message-with-http-info app-id queue-name message-id body)))

(defn delete-queue-with-http-info
  "delete a queue
  delete queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}" :delete
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete-queue
  "delete a queue
  delete queue"
  [app-id queue-name body ]
  (:data (delete-queue-with-http-info app-id queue-name body)))

(defn delete-subscriber-with-http-info
  "delete a subscriber to this queue
  delete a subscriber to this queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/subscriber" :delete
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn delete-subscriber
  "delete a subscriber to this queue
  delete a subscriber to this queue"
  [app-id queue-name body ]
  (:data (delete-subscriber-with-http-info app-id queue-name body)))

(defn get-all-messages-with-http-info
  "push message to queue
  add message message to queue"
  [app-id body ]
  (call-api "queue/{app_id}/messages" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-all-messages
  "push message to queue
  add message message to queue"
  [app-id body ]
  (:data (get-all-messages-with-http-info app-id body)))

(defn get-all-queues-with-http-info
  "get all queues
  get all queues"
  [app-id body ]
  (call-api "queue/{app_id}" :post
            {:path-params   {"app_id" app-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json" "text/plain;charset=utf-8"]
             :auth-names    []}))

(defn get-all-queues
  "get all queues
  get all queues"
  [app-id body ]
  (:data (get-all-queues-with-http-info app-id body)))

(defn get-message-with-http-info
  "get messages in queue
  get messages in queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/getMessage" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-message
  "get messages in queue
  get messages in queue"
  [app-id queue-name body ]
  (:data (get-message-with-http-info app-id queue-name body)))

(defn get-message-by-id-with-http-info
  "get a message in this queue by its id
  get a message in this queue by its id"
  [app-id queue-name message-id body ]
  (call-api "queue/{app_id}/{queue_name}/message/{message_id}" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name "message_id" message-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-message-by-id
  "get a message in this queue by its id
  get a message in this queue by its id"
  [app-id queue-name message-id body ]
  (:data (get-message-by-id-with-http-info app-id queue-name message-id body)))

(defn get-queue-with-http-info
  "get queue
  get queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn get-queue
  "get queue
  get queue"
  [app-id queue-name body ]
  (:data (get-queue-with-http-info app-id queue-name body)))

(defn peek-with-http-info
  "peek messages in queue without removing them
  peek messages in queue without removing them"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/peek" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn peek
  "peek messages in queue without removing them
  peek messages in queue without removing them"
  [app-id queue-name body ]
  (:data (peek-with-http-info app-id queue-name body)))

(defn peek-message-with-http-info
  "peek messages in queue without removing them
  peek messages in queue without removing them"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/peekMessage" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn peek-message
  "peek messages in queue without removing them
  peek messages in queue without removing them"
  [app-id queue-name body ]
  (:data (peek-message-with-http-info app-id queue-name body)))

(defn pull-with-http-info
  "pull messages from queue
  pull messages from queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}/pull" :post
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn pull
  "pull messages from queue
  pull messages from queue"
  [app-id queue-name body ]
  (:data (pull-with-http-info app-id queue-name body)))

(defn refresh-message-timeout-with-http-info
  "refresh timeout of a message in this queue
  refresh timeout of a message in this queue"
  [app-id queue-name message-id body ]
  (call-api "queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout" :put
            {:path-params   {"app_id" app-id "queue_name" queue-name "message_id" message-id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn refresh-message-timeout
  "refresh timeout of a message in this queue
  refresh timeout of a message in this queue"
  [app-id queue-name message-id body ]
  (:data (refresh-message-timeout-with-http-info app-id queue-name message-id body)))

(defn update-message-with-http-info
  "push message to queue
  add message message to queue"
  [my-app-id queue-name body ]
  (call-api "queue/{my_app_id}/{queue_name}/message" :put
            {:path-params   {"my_app_id" my-app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn update-message
  "push message to queue
  add message message to queue"
  [my-app-id queue-name body ]
  (:data (update-message-with-http-info my-app-id queue-name body)))

(defn update-queue-with-http-info
  "update queue
  update queue"
  [app-id queue-name body ]
  (call-api "queue/{app_id}/{queue_name}" :put
            {:path-params   {"app_id" app-id "queue_name" queue-name }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    body
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    []}))

(defn update-queue
  "update queue
  update queue"
  [app-id queue-name body ]
  (:data (update-queue-with-http-info app-id queue-name body)))
