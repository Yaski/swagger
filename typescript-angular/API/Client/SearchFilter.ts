/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface SearchFilter {

        "mustNot"?: Array<string>;

        "should"?: Array<string>;

        "must"?: Array<string>;
    }

}
