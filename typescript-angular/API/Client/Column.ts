/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface Column {

        "name"?: string;

        "dataType"?: Column.DataTypeEnum;

        "type"?: string;

        "required"?: boolean;

        "unique"?: boolean;

        "relatedTo"?: string;

        "relationType"?: string;

        "isDeletable"?: boolean;

        "isEditable"?: boolean;

        "isRenamable"?: boolean;
    }

    export namespace Column {

        export enum DataTypeEnum { 
            Text = <any> 'Text',
            Email = <any> 'Email',
            URL = <any> 'URL',
            Number = <any> 'Number',
            Boolean = <any> 'Boolean',
            DateTime = <any> 'DateTime',
            GeoPoint = <any> 'GeoPoint',
            File = <any> 'File',
            List = <any> 'List',
            Relation = <any> 'Relation',
            Object = <any> 'Object',
            Id = <any> 'Id',
            EncryptedText = <any> 'EncryptedText',
            ACL = <any> 'ACL'
        }
    }
}
