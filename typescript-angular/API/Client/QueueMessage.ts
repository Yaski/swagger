/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface QueueMessage {

        "aCL"?: ACL;

        "type"?: string;

        "expires"?: Date;

        "id"?: string;

        "delay"?: Date;

        "timeout"?: number;

        "modifiedColumns"?: Array<string>;

        "isModified"?: boolean;

        "message"?: string;
    }

}
