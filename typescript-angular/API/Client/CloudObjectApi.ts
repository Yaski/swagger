/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class CloudObjectApi {
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
         * deletes a cloud object from cloudapp
         * deletes a cloud object from cloudapp
         * @param appId CloudApp id
         * @param tableName cloud table name
         * @param body CloudObject that needs to be added to the cloudboost
         */
        public _delete (appId: string, tableName: string, body: CloudObjectSaveRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<CloudObject> {
            const localVarPath = this.basePath + 'data/{app_id}/{table_name}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling _delete');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling _delete');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling _delete');
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
         * saves a cloud object to cloudboost
         * 
         * @param appId CloudApp id
         * @param tableName cloud table name
         * @param body CloudObject that needs to be added to cloudboost
         */
        public save (appId: string, tableName: string, body: CloudObjectSaveRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<CloudObject> {
            const localVarPath = this.basePath + 'data/{app_id}/{table_name}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling save');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling save');
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
