/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class CloudFileApi {
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
         * deletes file
         * 
         * @param appId ID of app
         * @param fileId file id
         * @param body request body
         */
        public deleteFile (appId: string, fileId: string, body?: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
            const localVarPath = this.basePath + 'file/{app_id}/{file_id}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'file_id' + '}', String(fileId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling deleteFile');
            }
            // verify required parameter 'fileId' is set
            if (!fileId) {
                throw new Error('Missing required parameter fileId when calling deleteFile');
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
         * fetch file content
         * 
         * @param appId ID of app
         * @param fileId file id
         * @param body request body
         */
        public fetchFileContent (appId: string, fileId: string, body?: KeyBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
            const localVarPath = this.basePath + 'file/{app_id}/{file_id}'
                .replace('{' + 'app_id' + '}', String(appId))
                .replace('{' + 'file_id' + '}', String(fileId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling fetchFileContent');
            }
            // verify required parameter 'fileId' is set
            if (!fileId) {
                throw new Error('Missing required parameter fileId when calling fetchFileContent');
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
         * uploads a file
         * 
         * @param appId ID of app
         * @param fileObj file extra data
         * @param key app key
         * @param fileToUpload file to upload
         */
        public saveFile (appId: string, fileObj: string, key?: string, fileToUpload?: any, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
            const localVarPath = this.basePath + 'file/{app_id}'
                .replace('{' + 'app_id' + '}', String(appId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            let formParams: any = {};

            // verify required parameter 'appId' is set
            if (!appId) {
                throw new Error('Missing required parameter appId when calling saveFile');
            }
            // verify required parameter 'fileObj' is set
            if (!fileObj) {
                throw new Error('Missing required parameter fileObj when calling saveFile');
            }
            headerParams['Content-Type'] = 'application/x-www-form-urlencoded';

            formParams['key'] = key;

            formParams['fileObj'] = fileObj;

            formParams['fileToUpload'] = fileToUpload;

            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: false,
                
                data: this.$httpParamSerializer(formParams),
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * uploads a file with data
         * 
         * @param myAppId ID of app
         * @param fileObj file extra data
         */
        public saveFileData (myAppId: string, fileObj: FileBody, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
            const localVarPath = this.basePath + 'file/{my_app_id}'
                .replace('{' + 'my_app_id' + '}', String(myAppId));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'myAppId' is set
            if (!myAppId) {
                throw new Error('Missing required parameter myAppId when calling saveFileData');
            }
            // verify required parameter 'fileObj' is set
            if (!fileObj) {
                throw new Error('Missing required parameter fileObj when calling saveFileData');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: fileObj,
                
                
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
