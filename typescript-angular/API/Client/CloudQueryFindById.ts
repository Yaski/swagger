/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface CloudQueryFindById extends CloudQuery {

        "query"?: CloudQueryId;

        "limit"?: number;
    }

}
