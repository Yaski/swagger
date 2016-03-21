/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface CloudFile {

        "id"?: string;

        "type"?: string;

        "aCL"?: ACL;

        "name"?: string;

        "size"?: number;

        "url"?: string;

        "expires"?: Date;

        "contentType"?: string;
    }

}
