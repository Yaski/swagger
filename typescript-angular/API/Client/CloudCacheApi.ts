/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class CloudCacheApi {
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
         * clear all items from a cloud cache
         * clear all items from a cloud cache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param body master key of app
         */
        public clearCache (appId: string, cacheName: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<CacheRequest>> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}/clear'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling clearCache');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling clearCache');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling clearCache');
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
         * create a cloud cache
         * create a cloud cache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param body master key of app
         */
        public createCache (appId: string, cacheName: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Cache> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}/create'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling createCache');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling createCache');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling createCache');
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
         * delete all CloudCaches
         * delete all CloudCaches
         * @param appId Id of CloudApp
         * @param body master key of app
         */
        public deleteAllCache (appId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<CacheRequest>> {
            const localVarPath = this.basePath + 'cache/{app_id}'
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteAllCache');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling deleteAllCache');
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
         * delete a CloudCache
         * delete a CloudCache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param body master key of app
         */
        public deleteCache (appId: string, cacheName: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<CacheRequest> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteCache');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling deleteCache');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling deleteCache');
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
         * delete item from a cloud cache
         * delete item from a cloud cache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param dataKey key under which data to delete is cached
         * @param body master key of app
         */
        public deleteItem (appId: string, cacheName: string, dataKey: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}/item/{data_key}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName))
                .replace('{' + 'data_key' + '}', String(dataKey));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteItem');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling deleteItem');
            }
            // verify required parameter 'dataKey' is set
            if (!dataKey) {
                throw new Error('Missing required parameter dataKey when calling deleteItem');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling deleteItem');
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
         * get all CloudCaches
         * get all CloudCaches
         * @param appId Id of CloudApp
         * @param body master key of app
         */
        public getAllCache (appId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<Cache>> {
            const localVarPath = this.basePath + 'cache/{app_id}'
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getAllCache');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getAllCache');
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
         * get all items from a cloud cache
         * get all items from a cloud cache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param body master key of app
         */
        public getAllItems (appId: string, cacheName: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<CacheItem>> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}/items'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getAllItems');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling getAllItems');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getAllItems');
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
         * get info about a CloudCache
         * get info about a CloudCache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param body master key of app
         */
        public getCacheInfo (appId: string, cacheName: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<Cache> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getCacheInfo');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling getCacheInfo');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getCacheInfo');
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
         * get item from a cloud cache
         * get item from a cloud cache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param dataKey key under which data should be got in cache
         * @param body master key of app
         */
        public getItem (appId: string, cacheName: string, dataKey: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}/{data_key}/item'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName))
                .replace('{' + 'data_key' + '}', String(dataKey));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getItem');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling getItem');
            }
            // verify required parameter 'dataKey' is set
            if (!dataKey) {
                throw new Error('Missing required parameter dataKey when calling getItem');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getItem');
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
         * count items in a cloud cache
         * count items in a cloud cache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param body master key of app
         */
        public getItemsCount (appId: string, cacheName: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<number> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}/items/count'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getItemsCount');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling getItemsCount');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getItemsCount');
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
         * add item to a cloud cache
         * add item to a cloud cache
         * @param appId Id of CloudApp
         * @param cacheName Name of cache
         * @param dataKey key under which data should be store in cache
         * @param body cache data and master key included got from this object
         */
        public set (appId: string, cacheName: string, dataKey: string, body: CacheRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
            const localVarPath = this.basePath + 'cache/{app_id}/{cache_name}/{data_key}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'cache_name' + '}', String(cacheName))
                .replace('{' + 'data_key' + '}', String(dataKey));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling set');
            }
            // verify required parameter 'cacheName' is set
            if (!cacheName) {
                throw new Error('Missing required parameter cacheName when calling set');
            }
            // verify required parameter 'dataKey' is set
            if (!dataKey) {
                throw new Error('Missing required parameter dataKey when calling set');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling set');
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
