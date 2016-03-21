/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface ModifiedQueue {

        "aCL"?: ACL;

        "type"?: string;

        "expires"?: Date;

        "queueType"?: string;

        "retry"?: string;

        "name"?: string;

        "subscribers"?: Array<string>;

        "isModified"?: boolean;

        "modifiedColumns"?: Array<string>;

        "messages"?: Array<QueueMessage>;
    }

}
