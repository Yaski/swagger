/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class CloudQueryApi {
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
         * count items in a table that match this query criteria
         * count items in a table that match this query criteria
         * @param appId CloudApp id
         * @param tableName cloud table name
         * @param body query body
         */
        public count (appId: string, tableName: string, body: CloudQueryCount, extraHttpRequestParams?: any ) : ng.IHttpPromise<number> {
            const localVarPath = this.basePath + 'data/{app_id}/{table_name}/count'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling count');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling count');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling count');
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
         * distinct query criteria
         * 
         * @param appId CloudApp id
         * @param tableName cloud table name
         * @param body query body
         */
        public distinct (appId: string, tableName: string, body: CloudQueryDistinct, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<CloudObject>> {
            const localVarPath = this.basePath + 'data/{app_id}/{table_name}/distinct'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling distinct');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling distinct');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling distinct');
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
         * find CloudObject meeting this query criteria
         * 
         * @param appId CloudApp id
         * @param tableName cloud table name
         * @param body query object
         */
        public find (appId: string, tableName: string, body: CloudQuery, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<CloudObject>> {
            const localVarPath = this.basePath + 'data/{app_id}/{table_name}/find'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling find');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling find');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling find');
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
         * find CloudObject with specific _id
         * 
         * @param cloudAppId CloudApp id
         * @param tableName cloud table name
         * @param body query body
         */
        public findById (cloudAppId: string, tableName: string, body: CloudQueryFindById, extraHttpRequestParams?: any ) : ng.IHttpPromise<CloudObject> {
            const localVarPath = this.basePath + 'data/{cloud_app_id}/{table_name}/find'
                .replace('{' + 'cloud_app_id' + '}', String(cloudAppId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'cloudAppId' is set
            if (!cloudAppId) {
                throw new Error('Missing required parameter cloudAppId when calling findById');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling findById');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling findById');
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
         * find a single CloudObject
         * 
         * @param appId CloudApp id
         * @param tableName cloud table name
         * @param body query body
         */
        public findOne (appId: string, tableName: string, body: CloudQueryFindOne, extraHttpRequestParams?: any ) : ng.IHttpPromise<CloudObject> {
            const localVarPath = this.basePath + 'data/{app_id}/{table_name}/findOne'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling findOne');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling findOne');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling findOne');
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
    }
}
