/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class CloudTableApi {
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
         * 
         * delete a cloud table
         * @param tableName name of cloud table
         * @param appId cloud app id
         * @param body master key and app id
         */
        public deleteTable (tableName: string, appId: string, body: CloudTableSave, extraHttpRequestParams?: any ) : ng.IHttpPromise<CloudTable> {
            const localVarPath = this.basePath + 'app/{app_id}/{table_name}'
                .replace('{' + 'table_name' + '}', String(tableName))
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling deleteTable');
            }
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteTable');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling deleteTable');
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
         * 
         * get a table
         * @param tableName name of cloud table
         * @param appId id of app
         * @param body master key and app id
         */
        public get (tableName: string, appId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<CloudTable> {
            const localVarPath = this.basePath + 'app/{app_id}/{table_name}'
                .replace('{' + 'table_name' + '}', String(tableName))
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling get');
            }
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling get');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling get');
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
         * 
         * get all tables in app
         * @param appId app id
         * @param body master key
         */
        public getAll (appId: string, body: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
            const localVarPath = this.basePath + '/app/{app_id}/_getAll'
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling getAll');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling getAll');
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
         * 
         * save a cloud table
         * @param tableName name of cloud table
         * @param appId cloud app id
         * @param body master key and app id
         */
        public save (tableName: string, appId: string, body: CloudTableSave, extraHttpRequestParams?: any ) : ng.IHttpPromise<CloudTable> {
            const localVarPath = this.basePath + 'app/{app_id}/{table_name}'
                .replace('{' + 'table_name' + '}', String(tableName))
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling save');
            }
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling save');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling save');
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
