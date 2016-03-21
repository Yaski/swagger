/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface CloudQueryDistinct extends CloudQuery {

        "onKey"?: Array<string>;
    }

}
