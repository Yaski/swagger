/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface CloudSearch {

        "query"?: FilterBody;

        "sort"?: Array<string>;

        "collectionName"?: string;

        "key"?: string;

        "skip"?: number;

        "limit"?: number;
    }

}
