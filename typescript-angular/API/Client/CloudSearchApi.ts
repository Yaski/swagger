/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class CloudSearchApi {
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
         * search for cloudobjects following the criteria defined herein
         * 
         * @param appId CloudApp id
         * @param tableName cloud table name
         * @param body query body
         */
        public search (appId: string, tableName: string, body: CloudSearch, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<CloudObject>> {
            const localVarPath = this.basePath + 'data/{app_id}/{table_name}/search'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'table_name' + '}', String(tableName));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling search');
            }
            // verify required parameter 'tableName' is set
            if (!tableName) {
                throw new Error('Missing required parameter tableName when calling search');
            }
            // verify required parameter 'body' is set
            if (!body) {
                throw new Error('Missing required parameter body when calling search');
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
