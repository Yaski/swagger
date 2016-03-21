/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class CloudQueueApi {
        protected basePath = 'http://api.cloudboost.io/';
        public defaultHeaders : any = {};

        static $inject: string[] = ['$http', '$httpParamSerializer'];

        constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
            if (basePath) {
                this.basePath = basePath;
            }
        }

        private extendObj<T1,T2>(objA: T1, objB: T2) {
            for(let key in objB){
                if(objB.hasOwnProperty(key)){
                    objA[key] = objB[key];
                }
            }
            return <T1&T2>objA;
        }

        /**
         * push message to queue
         * add message message to queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public addMessage (appId: string, queueName: string, body: QueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/message'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling addMessage');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling addMessage');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling addMessage');
            }
            let httpRequestParams: any = {
                method: 'PUT',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * add a subscriber to this queue
         * add a subscriber to this queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body payload
         */
        public addSubscriber (appId: string, queueName: string, body: QueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Queue> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/subscriber'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling addSubscriber');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling addSubscriber');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling addSubscriber');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * clear queue
         * clear queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public clear (appId: string, queueName: string, body: QueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Queue> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/clear'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling clear');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling clear');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling clear');
            }
            let httpRequestParams: any = {
                method: 'DELETE',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * create a new queue
         * add message message to queue
         * @param appId Id of CloudApp
         * @param queueName name of queue
         * @param body client key of app
         */
        public createQueue (appId: string, queueName: string, body: QueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Queue> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/create'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling createQueue');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling createQueue');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling createQueue');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * delete a message in this queue
         * delete a message in this queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param messageId message id
         * @param body client key of app
         */
        public deleteMessage (appId: string, queueName: string, messageId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/message/{message_id}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName))
                .replace('{' + 'message_id' + '}', String(messageId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteMessage');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling deleteMessage');
            }
            // verify required parameter 'messageId' is set
            if (!messageId) {
                throw new Error('Missing required parameter messageId when calling deleteMessage');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling deleteMessage');
            }
            let httpRequestParams: any = {
                method: 'DELETE',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * delete a queue
         * delete queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public deleteQueue (appId: string, queueName: string, body: QueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Queue> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteQueue');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling deleteQueue');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling deleteQueue');
            }
            let httpRequestParams: any = {
                method: 'DELETE',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * delete a subscriber to this queue
         * delete a subscriber to this queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body payload
         */
        public deleteSubscriber (appId: string, queueName: string, body: QueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Queue> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/subscriber'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteSubscriber');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling deleteSubscriber');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling deleteSubscriber');
            }
            let httpRequestParams: any = {
                method: 'DELETE',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * push message to queue
         * add message message to queue
         * @param appId Id of CloudApp
         * @param body client key of app
         */
        public getAllMessages (appId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/messages'
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getAllMessages');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getAllMessages');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * get all queues
         * get all queues
         * @param appId Id of CloudApp
         * @param body client key of app
         */
        public getAllQueues (appId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<Queue>> {
            const localVarPath = this.basePath + 'queue/{app_id}'
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getAllQueues');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getAllQueues');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * get messages in queue
         * get messages in queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public getMessage (appId: string, queueName: string, body: QueuePayloadWithCount, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/getMessage'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getMessage');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling getMessage');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getMessage');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * get a message in this queue by its id
         * get a message in this queue by its id
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param messageId message id
         * @param body client key of app
         */
        public getMessageById (appId: string, queueName: string, messageId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<QueueMessage> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/message/{message_id}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName))
                .replace('{' + 'message_id' + '}', String(messageId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getMessageById');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling getMessageById');
            }
            // verify required parameter 'messageId' is set
            if (!messageId) {
                throw new Error('Missing required parameter messageId when calling getMessageById');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getMessageById');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * get queue
         * get queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public getQueue (appId: string, queueName: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Queue> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getQueue');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling getQueue');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getQueue');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * peek messages in queue without removing them
         * peek messages in queue without removing them
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public peek (appId: string, queueName: string, body: QueuePayloadWithCount, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/peek'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling peek');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling peek');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling peek');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * peek messages in queue without removing them
         * peek messages in queue without removing them
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public peekMessage (appId: string, queueName: string, body: QueuePayloadWithCount, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/peekMessage'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling peekMessage');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling peekMessage');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling peekMessage');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * pull messages from queue
         * pull messages from queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public pull (appId: string, queueName: string, body: QueuePayloadWithCount, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/pull'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling pull');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling pull');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling pull');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * refresh timeout of a message in this queue
         * refresh timeout of a message in this queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param messageId message id
         * @param body client key of app
         */
        public refreshMessageTimeout (appId: string, queueName: string, messageId: string, body: RefreshMessageTimeoutBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}/{message_id}/refresh-message-timeout'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName))
                .replace('{' + 'message_id' + '}', String(messageId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling refreshMessageTimeout');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling refreshMessageTimeout');
            }
            // verify required parameter 'messageId' is set
            if (!messageId) {
                throw new Error('Missing required parameter messageId when calling refreshMessageTimeout');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling refreshMessageTimeout');
            }
            let httpRequestParams: any = {
                method: 'PUT',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * push message to queue
         * add message message to queue
         * @param myAppId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public updateMessage (myAppId: string, queueName: string, body: QueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<QueueMessage>> {
            const localVarPath = this.basePath + 'queue/{my_app_id}/{queue_name}/message'
                .replace('{' + 'my_app_id' + '}', String(myAppId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'myAppId' is set
            if (!myAppId) {
                throw new Error('Missing required parameter myAppId when calling updateMessage');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling updateMessage');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling updateMessage');
            }
            let httpRequestParams: any = {
                method: 'PUT',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * update queue
         * update queue
         * @param appId Id of CloudApp
         * @param queueName Name of queue
         * @param body client key of app
         */
        public updateQueue (appId: string, queueName: string, body: ModifiedQueueBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<ModifiedQueue> {
            const localVarPath = this.basePath + 'queue/{app_id}/{queue_name}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'queue_name' + '}', String(queueName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling updateQueue');
            }
            // verify required parameter 'queueName' is set
            if (!queueName) {
                throw new Error('Missing required parameter queueName when calling updateQueue');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling updateQueue');
            }
            let httpRequestParams: any = {
                method: 'PUT',
                url: localVarPath,
                json: true,
                data: body,
                
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
    }
}
