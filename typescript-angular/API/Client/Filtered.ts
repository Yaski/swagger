/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface Filtered {

        "query"?: BoolQuery;

        "filter"?: BoolFilter;
    }

}
