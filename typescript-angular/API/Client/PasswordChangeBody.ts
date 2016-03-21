/// <reference path="api.d.ts" />

namespace API.Client {
    'use strict';

    export interface PasswordChangeBody {

        "oldPassword"?: string;

        "newPassword"?: string;

        "key"?: string;
    }

}
