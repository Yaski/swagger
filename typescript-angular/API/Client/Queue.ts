/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface Queue {

        "id"?: string;

        "tableName"?: string;

        "createdAt"?: Date;

        "updatedAt"?: Date;

        "aCL"?: ACL;

        "type"?: string;

        "expires"?: Date;

        "queueType"?: string;

        "retry"?: string;

        "name"?: string;

        "subscribers"?: Array<string>;

        "messages"?: Array<QueueMessage>;
    }

}
