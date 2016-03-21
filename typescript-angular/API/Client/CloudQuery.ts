/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface CloudQuery {

        "key"?: string;

        "skip"?: number;

        "limit"?: number;

        "query"?: Query;

        "sort"?: any;

        "select"?: any;
    }

}
