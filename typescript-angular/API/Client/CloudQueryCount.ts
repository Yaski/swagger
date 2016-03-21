/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface CloudQueryCount extends CloudQuery {

        "sort"?: string;

        "select"?: string;

        "skip"?: number;

        "limit"?: number;
    }

}
