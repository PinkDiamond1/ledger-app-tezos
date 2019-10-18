// Subset of Michelson constants, used in parsing manager.tz
// operations.

#pragma once

#include "memory.h"

enum michelson_code {
    MICHELSON_ADDRESS = 0x036e,
    MICHELSON_CONS = 0x031b,
    MICHELSON_DROP = 0x0320,
    MICHELSON_IMPLICIT_ACCOUNT = 0x031e,
    MICHELSON_KEY_HASH = 0x035d,
    MICHELSON_MUTEZ = 0x036a,
    MICHELSON_NIL = 0x053d,
    MICHELSON_NONE = 0x053e,
    MICHELSON_OPERATION = 0x036d,
    MICHELSON_PUSH = 0x0743,
    MICHELSON_SET_DELEGATE = 0x034e,
    MICHELSON_SOME = 0x0346,
    MICHELSON_TRANSFER_TOKENS = 0x034d,
    MICHELSON_UNIT = 0x034f,
    MICHELSON_IF_NONE = 0x072f,
    MICHELSON_FAILWITH = 0x0327,
    MICHELSON_CONTRACT = 0x0555,
    MICHELSON_CONTRACT_WITH_ENTRYPOINT = 0x0655,

    // TODO: does this only apply to contracts?
    MICHELSON_CONTRACT_UNIT = 0x036c,
};

enum michelson_type {
    MICHELSON_TYPE_STRING = 0x01,
    MICHELSON_TYPE_SEQUENCE = 0x02,
    MICHELSON_TYPE_BYTE_SEQUENCE = 0x0a,
};

enum michelson_params_tag {
    MICHELSON_PARAMS_NONE = 0x00,
    MICHELSON_PARAMS_SOME = 0xff,
};

#define MAX_MICHELSON_SEQUENCE_LENGTH 200

#define MAX_ENTRYPOINT_LENGTH 31
enum entrypoint_tag {
    ENTRYPOINT_DEFAULT = 0,
    ENTRYPOINT_ROOT = 1,
    ENTRYPOINT_DO = 2,
    ENTRYPOINT_SET_DELEGATE = 3,
    ENTRYPOINT_REMOVE_DELEGATE = 4,
    ENTRYPOINT_NAMED = 255,
};
