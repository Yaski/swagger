/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface UserRoleBody {

        "key"?: string;

        "role"?: CloudRole;

        "user"?: CloudUser;
    }

}
