/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface Query {

        "$IncludeList"?: Array<string>;

        "$Include"?: Array<string>;
    }

}
