/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface CloudTable {

        "name"?: string;

        "appId"?: string;

        "type"?: CloudTable.TypeEnum;

        "columns"?: Array<Column>;
    }

    export namespace CloudTable {

        export enum TypeEnum { 
            user = <any> 'user',
            role = <any> 'role',
            custom = <any> 'custom'
        }
    }
}
