#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 fn_8036B748(void);
s32 validate_subcommand_client();
s32 fn_8036B748(void);
s32 fn_8036B770(void);
s32 validate_subcommand_client();
s32 fn_8036B770(void);
s32 fn_8036B798(void);
s32 validate_subcommand_client();
s32 fn_8036B798(void);
s32 fn_8036B7C0(void);
s32 validate_subcommand_client();
s32 fn_8036B7C0(void);
}

extern "C" {

s32 fn_8036B748(void) {
    return validate_subcommand_client() ? 1 : 0;
}
s32 fn_8036B770(void) {
    return validate_subcommand_client() ? 1 : 0;
}
s32 fn_8036B798(void) {
    return validate_subcommand_client() ? 1 : 0;
}
s32 fn_8036B7C0(void) {
    return validate_subcommand_client() ? 1 : 0;
}

}
